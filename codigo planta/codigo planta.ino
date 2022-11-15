int IN1 = 8;
int IN2 = 7;
int humedad = 0;

void setup () {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop () {
.

    if (  humedad > 800) {
    digitalWrite (IN2, HIGH); 

   Serial.println("encender bomba"); 
    delay(5000);
    Serial.println("apagar bomba");
    
  
    digitalWrite(IN2, LOW);
    delay(2000);        
  }
  Serial.println (humedad);
  delay(1000);
}
