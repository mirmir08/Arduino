void verde(int rj){
  int o=1; //Se inicia la variable de las vibraciones
  digitalWrite(rj, HIGH); //Se enciende la variable rj
  digitalWrite(rj-1, HIGH);  //Se enciende el led rojo que se encuentra uno atras
  delay(3000); 
  digitalWrite(rj, LOW); //Se apagara solo la veriable de verde
  delay(100);
  for (o=1; o<=3; o++){ //Vibraciones
    digitalWrite(rj, HIGH);
    delay(100);
    digitalWrite(rj, LOW);
    delay(100);
  }
}


void rojo(int koya){
  digitalWrite(koya, HIGH); //Se prende rojo la veriable
  digitalWrite(koya-3, LOW); //Se prende apaga el segundo rojo
  digitalWrite(koya, HIGH); //Sige prendido rojo
  digitalWrite(koya+3, LOW); //Se apaga el primer rojo cuando se prenda el segundo
  delay(100);
}


void naranja (int tata){
  digitalWrite(tata, HIGH); //Se prende naranja
  delay(2000);
  digitalWrite(tata, LOW);
  delay(100);
}


void contar(){ //Monitor serial
  int i=1; //Se inicializa
  for(int i=0; i<=50; i++){ //Y por cada uno se va imrimiendo
    Serial.println(i);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Se coloca la velocidas
  int i=8; //Se inicia los pines

  for(i=8; i<=13; i++){ //Se colocan los pines
    pinMode(i, OUTPUT);
  }

  int o=1;

}

void loop() {
  // put your main code here, to run repeatedly:
  verde(11); 
  naranja(12);
  rojo(13);
  //Se inicializan de nuevo los colores con el segundo semaforo
  verde(8); 
  naranja(9);
  rojo(10);
  contar();

}
