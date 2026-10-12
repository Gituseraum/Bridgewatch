#include <RadioLib.h>

// Pin definitions based on typical RP2040 + SX1262 wiring layouts
// Adjust these pin numbers if your schematic routes them to different GPIOs
const int LORA_CS = 13;    // SPI Chip Select
const int LORA_DIO1 = 29;  // Interrupt / DIO1
const int LORA_RST = 14;   // Reset pin
const int LORA_BUSY = 15;  // Busy pin

// Instantiate the SX1262
// Module(ss, dio1, rst, busy)
SX1262 radio = new Module(LORA_CS, LORA_DIO1, LORA_RST, LORA_BUSY);

void setup() {
  Serial.begin(115200);
  while (!Serial);
  
  Serial.println(F("\nInitializing RP2040 LoRa Node..."));

  // Initialize SX1262 with 915.0 MHz (Change to 868.0 MHz for EU, 433.0 MHz, etc.)
  // Frequency, Bandwidth, Spreading Factor, Coding Rate, Sync Word, Power, Current Limit
  int state = radio.begin(915.0, 125.0, 9, 7, 0x12, 14, 8);

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("LoRa Initialization Success!"));
  } else {
    Serial.print(F("Initialization failed, code "));
    Serial.println(state);
    while (true);
  }
}

void loop() {
  Serial.print(F("[LoRa] Sending packet... "));

  // Transmit a packet
  String message = "Hello from RP2040 Custom PCB!";
  int state = radio.transmit(message);

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("Transmission finished successfully!"));
  } else {
    Serial.print(F("Transmission failed, code "));
    Serial.println(state);
  }

  // Wait 5 seconds before sending the next packet
  delay(5000);
}
