# Maceta_inteligente_infocal



//variable global

int bomba1 = 4 ;

void setup() {
// pin mode sensor  variable globasl 

pinMode(bomba1, OUTPUT);

// tiempo serial para pantalla llamada de datos

Serial.begin(9600);
}


void loop() {
// read de  entrada en el analog pin 0:
int sensorValue = analogRead(A0); 

//condicion si a 300 && 315 la tierra esta seca encender bomba
if (sensorValue >=300 && sensorValue <=315){
Serial.println(sensorValue);
    digitalWrite(bomba1, HIGH);
    Serial.print("llegas aca  bomba abierta");
  }
  
//condicion si no se a menor la tierra esta humeda apagado bomba
  
  else {
Serial.println(sensorValue);
    digitalWrite(bomba1, LOW);
    Serial.print("llega aca bomba cerrada");
  }
delay(1000);
}
