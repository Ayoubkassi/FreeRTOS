#include <Arduino_FreeRTOS.h>

#define redLed 7
#define greenLed 8


void setup(){
	pinMode(regLed , OUTPUT);
	pinMode(greenLed , OUTPUT);
	
	xTaskCreate( redLedTask , "red Led Task" ,128, NULL , 1 , NULL );
	xTaskCreate( greenLedTask , "green Led Task" ,128, NULL , 1 , NULL );
	
	
}

void loop(){}

void redLedTask(void *pvParameters){
	pinMode(redLed , OUTPUT);
	while(1){
		digitalWrite(redLed,HIGH);
		delay(500);
		didgitalWrite(redLed , LOW);
		delay(500);
	}
}


void greenLedTask(void *pvParameters){
	pinMode(greenLed , OUTPUT);
	while(1){
		digitalWrite(greenLed,HIGH);
		delay(800);
		didgitalWrite(greenLed , LOW);
		delay(800);
	}
}
