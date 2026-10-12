# BridgeWatch - A Bridge Monitoring System

## Project Overview

Our project is a portable, non-invasive bridge monitoring system designed to continuously collect structural and environmental data. The device is housed in a weatherproof 3D-printed enclosure and can be attached to a bridge without drilling or permanently modifying the structure.

Using multiple sensors, the system measures bridge vibrations, environmental conditions, and traffic activity. A Raspberry Pi Pico processes the collected data and transmits it using LoRa to a nearby gateway. The gateway uploads the information to the cloud, where it can be viewed through a mobile application.

Rather than replacing professional bridge inspections, our device serves as an **early warning monitoring system**, helping engineers identify unusual changes in bridge behavior between routine inspections.

---

# Hardware

| Component | Purpose |
|-----------|---------|
| **Raspberry Pi Pico 2 (RP2350)** | Main controller that processes sensor data and communicates with the LoRa module. |
| **SX1276 LoRa Module** | Sends sensor data over long distances using very little power. |
| **ADXL355 High-Resolution Accelerometer** | Detects tiny bridge vibrations and changes in structural behavior. |
| **MPU-6050 Accelerometer & Gyroscope** | Measures larger movement, impacts, and orientation changes. |
| **BME280 Environmental Sensor** | Measures temperature, humidity, and atmospheric pressure. |
| **INMP441 MEMS Microphone** | Detects impacts and unusual acoustic events that may indicate structural anomalies. |

---
# Schematic
<img width="587" height="412" alt="Screenshot 2026-09-09 191422" src="https://github.com/user-attachments/assets/9f466828-e2b5-451b-8117-7e979da28459" />
# Route
<img width="310" height="447" alt="Screenshot 2026-10-11 212952" src="https://github.com/user-attachments/assets/8dd7cb9a-3870-422b-b02c-c8d934b482f4" />
# Mobile App Features

## Dashboard

The dashboard provides a quick overview of the bridge's current condition.

### Features

- Bridge Health Score
- Bridge Status (Normal / Warning / Critical)
- Battery Level
- Current Traffic Level
- Last Data Update
- Active Alerts
- Quick Sensor Summary

## Live Monitoring

Displays live sensor readings in real time.

## Historical Data

Stores previous bridge data for long-term analysis.

---

# Why is this important?

Bridges are critical pieces of infrastructure that millions of people rely on every day. Most bridges are only inspected every few months or years, meaning structural changes that occur between inspections can go unnoticed.

Our project fills this gap by providing **continuous, real-time monitoring**. Instead of replacing professional inspections, the system acts as an **early warning tool**, detecting abnormal changes in vibration, movement, and environmental conditions that may indicate a developing problem.

By combining affordable sensors with long-range LoRa communication, this system offers a scalable and cost-effective solution that could be deployed on many bridges rather than only high-value infrastructure. Continuous monitoring allows engineers to observe how bridges respond to traffic, weather, and long-term wear while identifying trends that may require further investigation.

In addition to structural monitoring, the system also estimates traffic levels using vibration analysis. This information can help transportation departments understand bridge usage, identify heavily traveled routes, and make informed decisions about maintenance scheduling and future infrastructure improvements.

### Benefits

- Continuous bridge monitoring
- Early warning notifications
- Remote monitoring using LoRa
- Low-cost and scalable design
- Non-invasive installation
- Weather-resistant enclosure
- Historical data logging
- Traffic analysis
- Supports preventative maintenance
- Helps reduce inspection costs
- Improves infrastructure management

Plan:

Home Page:
Live bridge status
Historical Bridge Data List
Time, date, other cosmetic stuff

Sensor Page:
Sensor Stuff

About Us:
BridgeWatch Overview - scroll up
