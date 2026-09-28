# ⚡ VoltGuard AI

## IoTRICITY S3 — Team Powerpuff Girl

VoltGuard AI is an intelligent electrical safety monitoring prototype designed to detect abnormal electrical conditions and assess risk using multiple sensor inputs.

### Problem

Electrical abnormalities such as high current, abnormal voltage, overheating and smoke can develop into serious safety hazards.

### Proposed Solution

VoltGuard AI combines multiple sensor inputs and uses an ESP32 to analyze the conditions and calculate an overall risk score.

### Monitored Parameters

- Current
- Voltage
- Temperature
- Smoke/Gas

### Risk Levels

🟢 **Normal** — Normal operating conditions.

🟡 **Warning** — Abnormal conditions detected.

🔴 **Critical** — Multiple abnormal conditions detected; alert and preventive response activated.

### Hardware

- ESP32
- DHT22 temperature sensor
- MQ2 smoke/gas sensor
- Potentiometers for simulated current and voltage
- LEDs
- Buzzer
- Relay module

### Software

- Arduino/C++
- Wokwi
- DHTesp library

### Working

Sensor Data  
↓  
ESP32  
↓  
Risk Analysis  
↓  
Risk Level  
↓  
Alert / Preventive Response

### Future Scope

The current prototype uses intelligent multi-sensor risk scoring. A machine-learning model trained on real electrical fault data can be integrated in a future version.

---

**Team:** Powerpuff Girl  
**Competition:** IoTRICITY S3
