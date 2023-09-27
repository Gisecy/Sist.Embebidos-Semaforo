//Asignación de pines para cada led.
const int redLed = 13;
const int orangeLed = 12;
const int greenLed = 11;

void setup() {
  
  pinMode(redLed, OUTPUT);
  pinMode(orangeLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  
  //Secuencia de encendido de leds: rojo, naranja(amarillo), verde.
  digitalWrite(redLed, HIGH);
  delay(3000);                      //Tiempo de estado HIGH 3000ms.
  digitalWrite(redLed, LOW);
  delay(100);                       //Tiempo de espera 100ms

  digitalWrite(orangeLed, HIGH);
  delay(1000);                      //Tiempo de estado HIGH 1000ms.
  digitalWrite(orangeLed, LOW);
  delay(100);

  digitalWrite(greenLed, HIGH);
  delay(1500);                     //Tiempo de estado HIGH 1500ms.
  digitalWrite(greenLed, LOW);
  delay(100);
}


