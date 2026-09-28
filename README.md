# ⚡ VoltGuard AI
## Intelligent Multi-Sensor Electrical Risk Detection & Preventive Safety System

<p align="center">

### 🚀 IoTRICITY S3 — Build Phase

**Team Powerpuff Girl**

</p>

---

## 🔴 1. Problem Statement

Electrical faults do not always become dangerous instantly. They can develop gradually through abnormal current, voltage fluctuations, rising temperature, and smoke or gas.

If these parameters are monitored independently, it may be difficult to understand the **combined risk condition** of the system.

### The Challenge

A practical safety-support system is needed that can:

- Monitor multiple electrical and environmental parameters
- Detect abnormal conditions
- Combine multiple warning signals
- Assess the overall risk level
- Provide real-time alerts
- Trigger an appropriate preventive response

---

# 💡 2. Our Solution — VoltGuard AI

**VoltGuard AI** is an intelligent multi-sensor electrical safety monitoring prototype designed to detect abnormal electrical and environmental conditions and assess their combined risk.

The system monitors:

⚡ **Current**  
⚡ **Voltage**  
🌡️ **Temperature**  
🔥 **Smoke/Gas**

An **ESP32** acts as the central controller. It collects the sensor data, processes the readings, calculates a risk score, and classifies the system condition into:

🟢 **NORMAL**  
🟡 **WARNING**  
🔴 **CRITICAL**

When the risk becomes critical, the prototype activates a **visual alert, audible buzzer, and simulated relay-based preventive control action**.

---

# 🎯 3. Project Objectives

The main objectives of VoltGuard AI are to:

1. Monitor multiple electrical and environmental parameters.
2. Detect abnormal conditions at an early stage.
3. Combine multiple sensor signals for contextual risk assessment.
4. Calculate an understandable overall risk score.
5. Classify the system into Normal, Warning, or Critical states.
6. Provide immediate visual and audible alerts.
7. Demonstrate a simulated preventive control response.
8. Provide a foundation for future machine-learning-based prediction.

---

# 🧠 4. How VoltGuard AI Works

```text
          SENSOR INPUTS
               │
     ┌─────────┼─────────┐
     │         │         │
 Current    Voltage   Temperature
     │         │         │
     └─────────┼─────────┘
               │
            Smoke/Gas
               │
               ▼
        ┌──────────────┐
        │    ESP32     │
        │ Data         │
        │ Processing   │
        └──────┬───────┘
               │
               ▼
      MULTI-SENSOR ANALYSIS
               │
               ▼
        RISK ASSESSMENT
               │
       ┌───────┼────────┐
       ▼       ▼        ▼
    NORMAL   WARNING  CRITICAL
       │       │        │
       ▼       ▼        ▼
      🟢      🟡       🔴
                       │
                  Buzzer + Relay
Core Process

Sense → Analyze → Assess → Alert → Act

📊 5. Parameters Monitored
Parameter	Prototype Component	Purpose
⚡ Current	Potentiometer	Simulates changing electrical current
⚡ Voltage	Potentiometer	Simulates voltage variation
🌡️ Temperature	DHT22	Monitors temperature changes
🔥 Smoke/Gas	MQ2	Monitors smoke/gas level

Safety Note: Potentiometers are used as safe simulated inputs for current and voltage. The prototype does not use real mains electricity.

📈 6. Intelligent Risk-Scoring Mechanism

The current prototype uses a transparent multi-sensor risk-scoring mechanism.

Each abnormal condition contributes one risk point:

High Current       → +1
Abnormal Voltage   → +1
High Temperature   → +1
High Smoke Level   → +1

The total risk score determines the system state.

🟢 NORMAL — Risk Score 0–1 / 4

The monitored parameters are largely within the defined normal range.

Response:

Green LED ON
Buzzer OFF
Normal monitoring continues
🟡 WARNING — Risk Score 2 / 4

Multiple abnormal conditions have been detected.

Response:

Yellow LED ON
Warning status displayed
System continues monitoring
🔴 CRITICAL — Risk Score 3–4 / 4

Several high-risk conditions are detected simultaneously.

Response:

Red LED ON
Buzzer ON
Relay control action activated
Critical status displayed
🔄 7. Real-Time Demonstration

The simulation demonstrates how the system responds as abnormal conditions develop.

        🟢 NORMAL
            │
            ▼
   Current Starts Increasing
            │
            ▼
       🟡 WARNING
            │
            ▼
   Temperature Increases
            │
            ▼
    Smoke/Gas Increases
            │
            ▼
       🔴 CRITICAL
            │
            ▼
   🚨 Alert + Relay Action

This demonstrates a complete progression from a normal operating condition to a critical condition.
⚙️ 8. Technical Architecture
Input Layer

The system receives data from:

Current input
Voltage input
DHT22 temperature sensor
MQ2 smoke/gas sensor
Processing Layer

The ESP32:

Reads sensor values.
Processes the input signals.
Checks predefined abnormal conditions.
Calculates the risk score.
Determines the system state.
Output Layer

The system provides:

Risk Level	Output
🟢 Normal	Green LED
🟡 Warning	Yellow LED
🔴 Critical	Red LED + Buzzer + Relay
🛠️ 9. Technology Stack
Hardware / Simulation Components
ESP32 DevKit
DHT22 Temperature Sensor
MQ2 Smoke/Gas Sensor
Potentiometers
Green LED
Yellow LED
Red LED
Buzzer
Relay Module
Software
Arduino/C++
Wokwi Simulator
DHTesp Library
🖥️ 10. Wokwi Simulation

The complete prototype is developed and demonstrated using Wokwi.

The simulation provides a safe environment for testing different electrical-risk scenarios without connecting the project to real mains electricity.

Demonstration Scenarios
Scenario	Simulated Condition	Expected Response
🟢 Normal	Parameters within normal range	Green LED
🟡 Warning	Multiple abnormal conditions	Yellow LED
🔴 Critical	Several high-risk conditions	Red LED + Buzzer + Relay
✨ 11. Key Features
⚡ Multi-parameter monitoring
📊 Real-time risk assessment
🚨 Abnormal-condition detection
🟢🟡🔴 Three-level risk classification
🔊 Critical audible alert
💡 Visual status indication
🔌 Simulated preventive relay action
🖥️ Wokwi-based prototype
🛡️ Safe simulation without real mains electricity
🌟 12. Innovation

The key concept behind VoltGuard AI is multi-sensor contextual risk assessment.

Instead of responding to only one parameter, the prototype considers multiple signals together:

Current
Voltage
Temperature
Smoke
   │
   ▼
Combined Analysis
   │
   ▼
Risk Score
   │
   ▼
Risk Level
   │
   ▼
Preventive Response

This allows the system to demonstrate how multiple warning signals can be considered together to determine the overall condition of the monitored system.

🤖 13. AI / Intelligent Decision-Making

The current prototype implements an intelligent rule-based multi-sensor risk-scoring mechanism.

It is intentionally transparent so that the relationship between sensor abnormalities and the resulting risk level can be clearly demonstrated.

Future AI Enhancement

A future version can replace or enhance the rule-based scoring layer with a machine-learning model trained on real electrical fault data.

The ML system could learn more complex relationships between:

Current
Voltage
Temperature
Smoke
Historical sensor trends

This could support more advanced anomaly detection and predictive maintenance.

🔮 14. Future Scope
🤖 Machine Learning

Train a model using real electrical fault datasets to detect complex abnormal patterns.

☁️ Cloud Monitoring

Transmit sensor readings to a cloud platform for remote monitoring.

📱 Web / Mobile Dashboard

Provide:

Live sensor readings
Risk level
Alerts
Historical data
Fault trends
🔧 Predictive Maintenance

Analyze historical sensor data to identify developing equipment abnormalities before failure.

🔌 Hardware Prototype

Convert the simulation into a low-voltage physical prototype and later integrate it with professionally engineered electrical protection systems.

⚠️ 15. Current Prototype Limitations

This project is currently a simulation/proof-of-concept.

Current and voltage are represented using simulated inputs.
Risk assessment currently uses predefined thresholds.
The current prototype does not contain a trained machine-learning model.
The relay represents a simulated preventive control action.
Real electrical installations require certified protection equipment and professional engineering.

These limitations also define the next stages of development.

🛡️ 16. Safety Consideration

VoltGuard AI is designed as a prototype and safety-support concept.

The simulation does not use real mains electricity.

The relay demonstrates a possible load-control response during a critical condition.

VoltGuard AI is not intended to replace certified electrical protection equipment such as circuit breakers, fuses, protection relays, or professionally engineered safety systems.

📂 17. Repository Structure
VoltGuard-AI/
│
├── sketch.ino
├── diagram.json
├── libraries.txt
└── README.md
File Description
File	Description
sketch.ino	ESP32 control and risk-assessment code
diagram.json	Wokwi circuit configuration
libraries.txt	Required Arduino library
README.md	Complete project documentation
🧪 18. Testing

The prototype can be tested through three major scenarios.

Test 1 — Normal

All parameters remain within the defined normal range.

Expected: 🟢 Green LED

Test 2 — Warning

Multiple abnormal conditions begin to appear.

Expected: 🟡 Yellow LED

Test 3 — Critical

Several parameters become abnormal simultaneously.

Expected: 🔴 Red LED + Buzzer + Relay

🎥 19. Project Demo

The demonstration video presents the project as a complete story:

Problem
   ↓
Our Team
   ↓
Proposed Solution
   ↓
System Architecture
   ↓
Normal Condition
   ↓
Abnormal Condition
   ↓
Warning
   ↓
Critical Condition
   ↓
Preventive Response
🎬 Demo Video

YouTube:
Add your YouTube link here

👩‍💻 20. Team
Team Powerpuff Girl
Project

VoltGuard AI

Competition

IoTRICITY S3

Track

Predictive Automation & AI-Driven Decision-Making
