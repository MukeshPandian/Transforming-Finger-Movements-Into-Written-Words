#include <LiquidCrystal.h>
int flex = A0;
int value;
int value_1;
int flex_1 = A1;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



void setup() {
lcd.begin(16, 2);  
pinMode(flex,INPUT);
pinMode(flex_1,INPUT);
Serial.begin(9600);
  

}

void loop() {
  value = analogRead(flex);
  value_1 = analogRead(flex_1);
  Serial.print(value); 
  Serial.print("\t"); 
  
  Serial.print(value_1);
  Serial.print("\n");
  delay(1000);
  if(value<=200 && value_1>200 ){
  Serial.println("I need water");
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("I NEED WATER");
  delay(500);  
  }
  else if(value_1<=200 && value>200) {
  Serial.print("\t");
  Serial.println("i need food");
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("I NEED FOOD");
  delay(500);  
    
  }
  else if(value_1<=200 && value <=200) {
  Serial.println("Restroom");
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Restroom");
  delay(500);  
    
  }
  else if(value_1>=200 && value >=200) {
  Serial.println("BACK BENCHERS");
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("BACK BENCHERS");
  delay(500);  
    
  }  
