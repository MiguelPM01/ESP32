void setup() {

  Serial.begin(115200);
  Serial.print("esto es el setup");
  Serial.println("Linea nueva después");

}

void loop() {
  Serial.println("Esto es el loop");
  delay(2000);

}
