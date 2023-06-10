const int LED = 1; //Definimos una constante tipo entero donde guardamos el valor del pin que usaremos   

void setup() {//Modulo de configuración 
pinMode(LED,OUTPUT); //Definimos el Pin 1 del arduino como salida
}

void loop() {//Modulo de funcionamiento 
  
digitalWrite (LED,HIGH);//Encendemos el pin previamente configurado 
delay(1000);          //Mantenemos encendido el LED por 1 segundo
digitalWrite (LED,LOW); //Apagamos el pin previamente configurado 
delay(1000);          //Mantenemos apagado el LED por 1 segundo
}
