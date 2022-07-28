/*sketch de un encender 1 leds,
 *conectamos en los pines digitalesç
 *primero, conectamos el "GND" al la parte negativa(pata corta) del LED mediante un cable 
 *despues conectamos una resistencia entre el pin "DIGITAL" seleccionado y la parte positiva(pata larga) del LED
 *Y luego, comenzamos a programar
 */
void setup() {
  // put your setup code here, to run once:
 // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// the loop function runs over and over again forever
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
