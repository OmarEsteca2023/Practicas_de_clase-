void setup() {//Modulo de configuración 
pinMode(5,OUTPUT); //Definimos el Pin 1 del arduino como salida
}

void loop() {//Modulo de funcionamiento 
  
digitalWrite (5,HIGH);//Encendemos el pin previamente configurado 
delay(1000);          //Mantenemos encendido el LED por 1 segundo
digitalWrite (5,LOW); //Apagamos el pin previamente configurado 
delay(1000);          //Mantenemos apagado el LED por 1 segundo
}
