#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2)
int i,j;
int y=0;
int r=0;
void setup() 
{
  lcd.init();
  lcd.backlight();
  lcd.clear();
  pinMode(7,INPUT);
  pinMode(8,INPUT);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Available Block");
  Y=digitalRead(7);
  r=digitalRead(8);
    if(Y==1 && r==1)
    {
        lcd.setCursor(j,1);
        lcd.print("No block");
    }
    if(Y==1 && r==0)
    {
        lcd.setCursor(j,1);
        lcd.print("block No:S1");
    }
    
    if(Y==0 && r==1)
    {
        lcd.setCursor(j,1);
        lcd.print("block No:S2");
    }
    
    if(Y==0 && r==0)
    {
        lcd.setCursor(j,1);
        lcd.print("block No:S1,S2");
    }
    delay(500);
}
