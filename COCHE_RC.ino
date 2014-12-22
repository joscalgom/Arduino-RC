void setup() {
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,INPUT);
 pinMode(5,INPUT);
    
 
 }

void loop() {
  // put your main code here, to run repeatedly: 

 
 if(analogRead(2)<500){    //valor del joystick en la posición central.
    digitalWrite(8,HIGH);  // si es menor de 500 implica que el joystick está moviéndose hacia la derecha.
    digitalWrite(9,LOW);
 }
 else if(analogRead(2)>550){
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
 }
 else{
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
 }
 if(digitalRead(2)==1&&digitalRead(4)==0){ //si el botón de adelante está pulsado damos corriente al motor para que gire hacia adelante
   digitalWrite(11,HIGH);
   digitalWrite(10,LOW);
 }
 else if(digitalRead(4)==1&&digitalRead(2)==0){//si el botón de atrás está pulsado damos corriente al motor para que gire hacia detrás
   digitalWrite(10,HIGH);
   digitalWrite(11,LOW);
 }
  
 else{
        
   digitalWrite(11,LOW);
   digitalWrite(10,LOW);
 }
      
}
