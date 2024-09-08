void setup() {
  // put your setup code here, to run once:}
  //Se declaran las variables
  int i=4; //Variable para las luces priciples
  int j=13; // Variable para las luces extras (cuando se prenden dos al mismo tiempo)


  //Para hacer el proceso de declarar los pines con un for desde el el pin mas pequeño hasta el mas grande
  //En vez de colocar un contador se coloca la variable con dos mas ++
  for(i=4; i<=13; i++){
    pinMode(i, OUTPUT);
  }


  //Para declarar los pines desde el mas grande con for, se coloca el mayor y menor y cara recorrer
  // la variable con dos menos --
  for (j = 13; j <= 4; j--) {
    pinMode(j, OUTPUT);
  }


  //(De las variavles de que se habla son las que se colocaron desde el inicio asegurate de
  // que se inicialicen desde el menor o mayor dependiende lo que se hara )

}






void loop() {
  // put your main code here, to run repeatedly:


//NORMAL
  int i= 4; //Se crea una varibable de donde se se inicializa


  //Para del primer led al ultimo
  for(i=4; i<=13; i++){ // como se inicia con el numero mas pequeño se sumara de uno a uno y se coloca la variable y dos mas
    digitalWrite(i, HIGH); // se prendera el pin que sea igual que la variable durante 10 milisegundos
    delay(10);
    digitalWrite(i, LOW);// se apagara el pin que sea igual que la variable durante 10 milisegundos
    delay(10);
  }


// Para hacer lo de regresp (del último al primero)
  for(i=13; i>=4; i--){ // Como es del mas grande al mas pequeño se restara uno se coloca la variable y dos menos
    digitalWrite(i, HIGH); // se prendera el pin que sea igual que la variable durante 10 milisegundos
    delay(10);
    digitalWrite(i, LOW);// se apagara el pin que sea igual que la variable durante 10 milisegundos
    delay(10);
  }


//CORTE 
//SE PENDEN DOS LEDS AL MISMO TIEMPO
    digitalWrite(13, HIGH); // se prendera el pin que sea igual que la variable durante 10 milisegundos
    digitalWrite(9, HIGH);
    delay(10);
    digitalWrite(13, LOW);// se apagara el pin que sea igual que la variable durante 10 milisegundos
    digitalWrite(9, LOW);
    delay(10);
  
  


//BELIBER

//consistira en dos bucles iguales solo con pines diferentes
//Cada bucle tendra dos for con diferente tiempo y veriables



  //Bucle 1
  //El ritmo de la cancion es tres golpes rapidos, dos lentos


   //LOs golpes rapidos deran los primeros leds y tendran la misma velociodad
  for(i=13; i>=11; i--){ //Los primeros leds desde el mayor entonces se va restando a la variable uno
    digitalWrite(i, HIGH);//Se prende el led durante 8 milisegundos
    delay(80);
    digitalWrite(i, LOW);//Se apaga el led durante 8 milisegundos
    delay(80);
  }

  //Los siguentes golpes de hacen dos y un poco mas lentos
  for(i=10; i>=9; i--){ //De donde se temino el bucle pasado seguimos en el siguente igual bajando uno
    digitalWrite(i, HIGH);//Se prende el led durante 20 milisegundos
    delay(200);
    digitalWrite(i, LOW);//Se apaga el led durante 20 milisegundos
    delay(200);
  }


  //Bucle 2
  //Sera de la misma manera pero ahora se empieza en el pin  siguiente en el que se termino el anterior
  for(i=8; i>=6; i--){
    digitalWrite(i, HIGH);
    delay(80);
    digitalWrite(i, LOW);
    delay(80);
  }

  for(i=5; i>=4; i--){
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    delay(200);
  }





//SE PRENDE UNO Y SE VAN PRENDIENDO Y APAGANDO LOS OTROS CINCO DEL OTRO LADO 

  int j=13; //Se inicializa la variable desde donde se empezara a prender (Fue la veriable que se declaro con los pines dentro del setup, la llamaremos varable de apoyo)

  for (i = 4; i<= 8; i++) { //Se empezar a aprender desde el primer led hasta el del medio, sera el que este prendido mientras se van pasando las de apoyo
    for (j = 13; j>= 9; j--) { // //Las variables de apoyo empiezan desde la ultima hasta la mitad
      digitalWrite(i, HIGH); //Se prendera la variable 
      digitalWrite(j, HIGH);// Se prendera la de apoyo
      delay(50); //Se prenden al mismo tiempo porque el delay se encuantra despues de estas y duraran 5 milisegundos 
      digitalWrite(i, LOW);//Se apagara la variable
      digitalWrite(j, LOW);//Se apagara la de apoyo
      delay(50); //Se apagan al mismo tiempo porque el delay se encuantra despues de estas y durara 5 milisegundos 
    }
  }


//Cuando se acabe de prender todas las variables se pasaran  las ultimas
  
  for (i = 13; i>= 9; i--) { //Se prenden desde la untima hasta la mitad
    for (j = 4; j<= 8; j++) { //Y las de apoyo desde la primera a la primera a la mitad
    //Se hace lo mismo que el la de arriba
      digitalWrite(i, HIGH);
      digitalWrite(j, HIGH);
      delay(50);
      digitalWrite(i, LOW);
      digitalWrite(j, LOW);
      delay(50);
    }
  }



    
    
  }



