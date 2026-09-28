#include <DHTesp.h>

// ================= PIN DEFINITIONS =================

#define CURRENT_PIN 34
#define VOLTAGE_PIN 35
#define MQ2_PIN     32
#define DHT_PIN     4

#define GREEN_LED   25
#define YELLOW_LED  26
#define RED_LED     27

#define BUZZER      14
#define RELAY       13

// ================= DHT SENSOR =================

DHTesp dht;

// ================= SETUP =================

void setup() {

  Serial.begin(115200);

  // Start DHT22
  dht.setup(DHT_PIN, DHTesp::DHT22);

  // LED pins
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  // Alarm and relay
  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);

  // Initial state
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);
  digitalWrite(RELAY, LOW);

  Serial.println();
  Serial.println("====================================");
  Serial.println("        VOLTGUARD AI SYSTEM");
  Serial.println("   Intelligent Electrical Safety");
  Serial.println("====================================");
}


// ================= MAIN LOOP =================

void loop() {

  // -------- READ SENSORS --------

  int currentRaw = analogRead(CURRENT_PIN);
  int voltageRaw = analogRead(VOLTAGE_PIN);
  int smokeRaw   = analogRead(MQ2_PIN);

  TempAndHumidity data = dht.getTempAndHumidity();

  float temperature = data.temperature;


  // -------- CONVERT POTENTIOMETER VALUES --------

  // Current simulation: 0 to 15 A
  float current = (currentRaw / 4095.0) * 15.0;

  // Voltage simulation: 180 to 260 V
  float voltage = 180.0 + 
                  (voltageRaw / 4095.0) * 80.0;


  // -------- RISK SCORE --------

  int riskScore = 0;

  // 1. Over-current detection
  if (current > 10.0) {
    riskScore++;
  }

  // 2. Abnormal voltage detection
  if (voltage < 200.0 || voltage > 250.0) {
    riskScore++;
  }

  // 3. Over-temperature detection
  if (temperature > 60.0) {
    riskScore++;
  }

  // 4. Smoke/gas detection
  if (smokeRaw > 2000) {
    riskScore++;
  }


  // -------- RESET OUTPUTS --------

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);
  digitalWrite(RELAY, LOW);


  // =================================================
  // NORMAL CONDITION
  // =================================================

  if (riskScore <= 1) {

    digitalWrite(GREEN_LED, HIGH);

    Serial.println("STATUS: NORMAL");
  }


  // =================================================
  // WARNING CONDITION
  // =================================================

  else if (riskScore == 2) {

    digitalWrite(YELLOW_LED, HIGH);

    Serial.println("STATUS: WARNING");
  }


  // =================================================
  // CRITICAL CONDITION
  // =================================================

  else {

    digitalWrite(RED_LED, HIGH);

    digitalWrite(BUZZER, HIGH);

    digitalWrite(RELAY, HIGH);

    Serial.println("STATUS: CRITICAL");
    Serial.println("!!! PREVENTIVE ACTION ACTIVATED !!!");
  }


  // -------- DISPLAY DATA --------

  Serial.println("------------------------------------");

  Serial.print("Current     : ");
  Serial.print(current, 2);
  Serial.println(" A");

  Serial.print("Voltage     : ");
  Serial.print(voltage, 2);
  Serial.println(" V");

  Serial.print("Temperature : ");
  Serial.print(temperature, 2);
  Serial.println(" C");

  Serial.print("Smoke Level : ");
  Serial.println(smokeRaw);

  Serial.print("Risk Score  : ");
  Serial.print(riskScore);
  Serial.println(" / 4");

  Serial.println("------------------------------------");
  Serial.println();


  // Read every 2 seconds
  delay(2000);
}
