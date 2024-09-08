void verde(int e){//Para crear la parte de abanzar 
  int o=1; //Varisable pasra que se sume y parpadie
  int r=e-1; //Como el valor del pin se coloco uno mas grande se reta
  int rj= r-1; //Variable para coloar el pin de rojo
  int koya=r-2; //Varible para el pin naranja
  digitalWrite(r, HIGH); //Se prendera el pin verde
  rojo(rj); //Al mismo tiempo que el rojo
  delay(100);
  digitalWrite(r, LOW);
  delay(100);
  for (o=1; o<=3; o++){ //Para que parpadee se coloca en un for c
    digitalWrite(r, HIGH); //Se prende el pin
    naranja(koya, 100); //Tambien se prende al mismo tiempo el amarillo
    delay(100);
    digitalWrite(r, LOW);
    delay(100);

  }

}

void naranja(int p, int nop){ //Para hecer el espera, y para colocar su tiempo se coloa despues
  int o=1; //Se coloca la variable para las vrivaciones
  int n=p-4; //Cuando parpadea naranja parpadea verde entonces para sacar verde se le resta 4 a la variable
  digitalWrite(n, HIGH);
   for (o=1; o<=3; o++){
    digitalWrite(p, HIGH);//Se prendel al mismo tiempo naranja y verde
    
    delay(nop);
    digitalWrite(p, LOW); //Se apagan al mismo tiempo naranja y verde
    digitalWrite(n, LOW);
    delay(100);

  }

}


  

void rojo(int x){ //Para coloar rojo al mismo tiempo que verde
  int p=x-5; //Para sacar el pin de verde se resta a el pin rojo cinco
  digitalWrite(x, HIGH);//Se prenden al mismo tiempo rojo y verde y duran lo mismo
  digitalWrite(p, HIGH);
  delay(3000);
  digitalWrite(x, LOW);
  digitalWrite(p, LOW);
  delay(30);

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
  //Para acomodarlos se colocan las funciones junto con el valor de la variavle
  verde(12); //Esta se coloca uno mayor
  rojo(13);
  naranja(12, 1000); //En la segunda varible se coloca la velocidad que se quiere cuando esta naranja en verde
  contar();
 


 


  



}
