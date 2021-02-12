const int analogInPin = A0;  // Analog input pin that the Temperature Sensor is attached to

int tempSensorValue = 0;        // value read from the pot
float tempValue = 0;        // real temperature value

void setup() {

  // initialize serial communications at 9600 bps:

  Serial.begin(9600);
}

void loop() {

  // read the analog in value:

  tempSensorValue = analogRead(analogInPin);

  // convert the analog volt to its temperature equivalent
  tempValue = ((tempSensorValue*(5.0/1024))-0.5)/0.01;


  // print the results to the Serial Monitor:

  Serial.print("Temperture sensor value =  ");

  Serial.print(tempValue);

  Serial.print("*C");

  Serial.println();

  delay(1000);
}