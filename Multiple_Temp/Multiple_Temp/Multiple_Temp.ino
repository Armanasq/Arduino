/*
 * CS=SS, SDI=MOSI, SDO=MISO, SCK=CSK
 * Arduini Mega 2560:
 * S0=51
 * CS=53
 * CLK=52
 * SI=50
*/


#include "max6675.h"

/*
 * Engine Temp
 */
int thermoSO = 51;
int thermoCLK = 52;
int thermoCS7 = 13;
int thermoCS6 = 12;
int thermoCS5 = 11;
int thermoCS4 = 10;
int thermoCS3 = 9;
int thermoCS2 = 8;
int thermoCS1 = 7;

MAX6675 thermocouple1(thermoCLK, thermoCS1, thermoSO);
MAX6675 thermocouple2(thermoCLK, thermoCS2, thermoSO);
MAX6675 thermocouple3(thermoCLK, thermoCS3, thermoSO);
MAX6675 thermocouple4(thermoCLK, thermoCS1, thermoSO);
MAX6675 thermocouple5(thermoCLK, thermoCS2, thermoSO);
MAX6675 thermocouple6(thermoCLK, thermoCS3, thermoSO);
MAX6675 thermocouple7(thermoCLK, thermoCS3, thermoSO);

double temp1;
double temp2;
double temp3;
double temp4;
double temp5;
double temp6;
double temp7;

void setup() {

/*
 * Serial
 */
  Serial.begin(9600);
  Serial.println("Multiple Thermocouples to Arduino using SPI");
  Serial.println("A.Asgharpoor");
  Serial.println("===============================================================");
  delay(500);
}

void loop() {

/*
 * Temp Reading
 */
  temp1 = thermocouple1.readCelsius();
  temp2 = thermocouple2.readCelsius();
  temp3 = thermocouple3.readCelsius();
  temp4 = thermocouple4.readCelsius();
  temp5 = thermocouple5.readCelsius();
  temp6 = thermocouple6.readCelsius();
  temp7 = thermocouple7.readCelsius();

  
   Serial.print("temp1 = ");
   Serial.print(temp1);
   Serial.println(" C");  
   
   Serial.print("temp2 = ");
   Serial.print(temp2);
   Serial.println(" C");  

   Serial.print("temp3 = ");
   Serial.print(temp3);
   Serial.println(" C");  
   
   Serial.print("temp4 = ");
   Serial.print(temp4);
   Serial.println(" C");
   
   Serial.print("temp5 = ");
   Serial.print(temp5);
   Serial.println(" C");  
   
   Serial.print("temp6 = ");
   Serial.print(temp6);
   Serial.println(" C");
   
   Serial.print("temp7 = ");
   Serial.print(temp7);
   Serial.println(" C");  
   
delay(1000);

}
