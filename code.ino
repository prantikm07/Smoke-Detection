include <LiquidCrystal_I2C.h>

#define BUZZER_PIN 3                                          // Declare "BUZZER_PIN" Pin
#define GAS_SENSOR_PIN A0                                     // Declare "GAS_SENSOR_PIN" Pin
#define LED_RED 4                                             // Declare RED LED Pin
#define LED_GREEN 12                                          // Declare GREEN LED Pin

#define LCD_ROWS 2                                            // Select "LCD_ROWS 2"  
#define LCD_COLUMNS 16                                        // Select "LCD_COLUMNS 16"                                       
#define LCD_ADDRESS 0x27                                      // I2C LCD Module Default "ADDRESS = 0x27"
LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);    // LiquidCrystal_I2C Funcation Put all the Data

//=================================================================================================================

void setup() {

  lcd.init();                                               // LCD Commucation With 'Arduino Uno'
  lcd.backlight();                                          // LCD 'Backlight' On  
  lcd.home();                                               // LCD now refresh
  lcd.clear();                                              // LCD Display 'Clear'     
  pinMode(BUZZER_PIN, OUTPUT);
  

  lcd.setCursor(4, 0);                                      // Set Cursor 1st Row after the 4th Column
  lcd.print("WELCOME!");                                    // Print 'WELCOME' in LCD
  delay(3500);                                              // Delay "3.5 s"
  lcd.clear();                                              // LCD Should Clear
  lcd.setCursor(1, 0);                                      // set Cursor
  lcd.print("GAS DETECTION");                               // Print "GAS DETECTION" in LCD
  lcd.setCursor(4, 1);                                      // set Cursor 
  lcd.print("SYSTEM");                                      // Print '  SYSTEM' in LCD
  delay(3000);                    
  lcd.clear();                                              // LCD Should Clear
  delay(1000) ;                                           

  Serial.begin(9600);                                       // Communication With the 'PC Machine'

}

//=================================================================================================================

void loop() {
  int sensorValue = analogRead(GAS_SENSOR_PIN);
  
   lcd.setCursor(3, 0);
   lcd.print("GAS_VALUE");
   lcd.setCursor(3, 1);
   lcd.print(sensorValue);
   lcd.setCursor(7, 1);
   lcd.print("PPM");



  if(sensorValue >= 100){
    digitalWrite(BUZZER_PIN,LOW);
    digitalWrite(LED_RED,HIGH);
    digitalWrite(LED_GREEN,LOW);
    delay(100);
    digitalWrite(LED_RED,LOW);
    delay(100);
    lcd.clear(); 
    lcd.setCursor(4, 0);
    lcd.print("WARNING!");
     delay(100);

  }
  else{
     digitalWrite(BUZZER_PIN,HIGH);
     delay(100);
     digitalWrite(LED_RED,LOW);
     digitalWrite(LED_GREEN,HIGH);
     delay(100);
     digitalWrite(LED_GREEN,LOW);
     delay(100);
  }
  Serial.println(sensorValue);
  delay(1000);
}