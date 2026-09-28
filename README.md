1. Problem Statement
Electrical faults do not always become dangerous instantly. They can develop gradually through abnormal current,
voltage fluctuations, rising temperature, and smoke or gas.
If these parameters are monitored independently, it may be difficult to understand the combined risk condition of the
system.
The Challenge
A practical safety-support system is needed that can monitor multiple parameters, detect abnormal conditions, combine
warning signals, assess overall risk, provide alerts, and trigger an appropriate preventive response.
2. Our Solution — VoltGuard AI
VoltGuard AI is an intelligent multi-sensor electrical safety monitoring prototype designed to detect abnormal electrical
and environmental conditions and assess their combined risk.
The system monitors Current, Voltage, Temperature, and Smoke/Gas. An ESP32 acts as the central controller,
processes readings, calculates a risk score, and classifies the condition as NORMAL, WARNING, or CRITICAL.
When the risk becomes critical, the prototype activates a visual alert, audible buzzer, and simulated relay-based
preventive control action.
3. Project Objectives
1. Monitor multiple electrical and environmental parameters.
2. Detect abnormal conditions at an early stage.
3. Combine multiple sensor signals for contextual risk assessment.
4. Calculate an understandable overall risk score.
5. Classify the system into Normal, Warning, or Critical states.
6. Provide immediate visual and audible alerts.
7. Demonstrate a simulated preventive control response.
8. Provide a foundation for future machine-learning-based prediction.
4. How VoltGuard AI Works
Core Process: Sense fi Analyze fi Assess fi Alert fi Act
System Flow
Current Sensor + Voltage Sensor + Temperature Sensor + Smoke/Gas Sensor
fl
ESP32
fl
Multi-Sensor Analysis
fl
Risk Assessment
fl
NORMAL / WARNING / CRITICAL
fl
Alert + Preventive Action
5. Parameters Monitored
Current — Potentiometer: Simulates changing electrical current.
Voltage — Potentiometer: Simulates voltage variation.
Temperature — DHT22: Monitors temperature changes.
Smoke/Gas — MQ2: Monitors smoke/gas level.
Safety Note: Potentiometers are used as safe simulated inputs for current and voltage. The prototype does not use real
mains electricity.
6. Intelligent Risk-Scoring Mechanism
The current prototype uses a transparent multi-sensor risk-scoring mechanism.
High Current fi +1
Abnormal Voltage fi +1
High Temperature fi +1
High Smoke Level fi +1
n NORMAL — Risk Score 0–1 / 4: Green LED ON; buzzer OFF.
n WARNING — Risk Score 2 / 4: Yellow LED ON; warning status displayed.
n CRITICAL — Risk Score 3–4 / 4: Red LED ON; buzzer ON; relay control action activated.
7. Real-Time Demonstration
NORMAL fi Current Starts Increasing fi WARNING fi Temperature Increases fi Smoke/Gas Increases fi CRITICAL
fi Alert + Relay Action
8. Technical Architecture
Input Layer: Current input, voltage input, DHT22 temperature sensor, MQ2 smoke/gas sensor.
Processing Layer: The ESP32 reads sensor values, processes input signals, checks predefined abnormal conditions,
calculates the risk score, and determines the system state.
Output Layer: Green LED — Normal; Yellow LED — Warning; Red LED + Buzzer + Relay — Critical.
9. Technology Stack
Hardware / Simulation: ESP32 DevKit; DHT22 Temperature Sensor; MQ2 Smoke/Gas Sensor; Potentiometers; Green,
Yellow and Red LEDs; Buzzer; Relay Module.
Software: Arduino/C++; Wokwi Simulator; DHTesp Library.
10. Wokwi Simulation
The complete prototype is developed and demonstrated using Wokwi. The simulation provides a safe environment for
testing different electrical-risk scenarios without connecting the project to real mains electricity.
Scenarios: Normal fi Green LED; Warning fi Yellow LED; Critical fi Red LED + Buzzer + Relay.
11. Key Features
• Multi-parameter monitoring
• Real-time risk assessment
• Abnormal-condition detection
• Three-level risk classification
• Critical audible alert
• Visual status indication
• Simulated preventive relay action
• Wokwi-based prototype
• Safe simulation without real mains electricity
12. Innovation
The key concept behind VoltGuard AI is multi-sensor contextual risk assessment.
Current + Voltage + Temperature + Smoke
fl
Combined Analysis
fl
Risk Score
fl
Risk Level
fl
Preventive Response
13. AI / Intelligent Decision-Making
The current prototype implements an intelligent rule-based multi-sensor risk-scoring mechanism. It is intentionally
transparent so that the relationship between sensor abnormalities and the resulting risk level can be clearly
demonstrated.
Future AI Enhancement: A future version can enhance the scoring layer with a machine-learning model trained on real
electrical fault data to learn more complex relationships between sensor values and historical trends.
14. Future Scope
• Machine Learning for complex anomaly detection
• Cloud monitoring for remote access
• Web/mobile dashboard for live readings, alerts and history
• Predictive maintenance using historical data
• Low-voltage hardware prototype and professionally engineered protection integration
15. Current Prototype Limitations
This project is currently a simulation/proof-of-concept.
• Current and voltage are represented using simulated inputs.
• Risk assessment uses predefined thresholds.
• The current prototype does not contain a trained machine-learning model.
• The relay represents a simulated preventive control action.
• Real electrical installations require certified protection equipment and professional engineering.
16. Safety Consideration
VoltGuard AI is a prototype and safety-support concept. The simulation does not use real mains electricity. The relay
demonstrates a possible load-control response during a critical condition.
VoltGuard AI is not intended to replace certified electrical protection equipment such as circuit breakers, fuses,
protection relays, or professionally engineered safety systems.
17. Repository Structure
VoltGuard-AI/
nnn sketch.ino
nnn diagram.json
nnn libraries.txt
nnn README.md
sketch.ino — ESP32 control and risk-assessment code
diagram.json — Wokwi circuit configuration
libraries.txt — Required Arduino library
README.md — Project documentation
18. Testing
Test 1 — Normal: Parameters within normal range fi Green LED.
Test 2 — Warning: Multiple abnormal conditions fi Yellow LED.
Test 3 — Critical: Several abnormal parameters fi Red LED + Buzzer + Relay.
19. Project Demo
The demonstration video presents the project as a complete story: Problem fi Team fi Proposed Solution fi System
Architecture fi Normal Condition fi Abnormal Condition fi Warning fi Critical Condition fi Preventive Response.
Demo Video: Add your YouTube link here.
20. Team
Team Powerpuff Girl
Project: VoltGuard AI
Competition: IoTRICITY S3
Track: Predictive Automation & AI-Driven Decision-Making
