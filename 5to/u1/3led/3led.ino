void setup() {
  // put your setup code here, to run once:


  //Definir los pines que se definiran uno por uno
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  //El primer led
  digitalWrite(13, HIGH); //Se prendera 3 segundos en el pin 13
  delay(3000); // Tiempo que se prendra
  digitalWrite(13, LOW);//Se apagara 3 segundos en el pin 13
  delay(3000); //Tiempo que se apagara


  //Segundo led
  digitalWrite(12, HIGH);//Se prendera 3 segundos en el pin 12
  delay(3000);
  digitalWrite(12, LOW);//Se apagara 3 segundos en el pin 12
  delay(3000);


  //Tercer led
  digitalWrite(11, HIGH);//Se prendera 3 segundos en el pin 11
  delay(3000);
  digitalWrite(11, LOW);//Se apagara 3 segundos en el pin 11
  delay(3000);

}
