#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Debounce.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

byte bt1 = 2;
byte bt2 = 3;
Debounce btd1(bt1,70);
Debounce btd2(bt2,70);
volatile int bts1 = 0;
volatile int bts2 = 0;
int menu=0;

void btn1_ISR();
void btn2_ISR();

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  Serial.begin(9600);
  lcd.setCursor(1,0);
  lcd.print("lol");
  pinMode(bt1, INPUT_PULLUP);
  pinMode(bt2, INPUT_PULLUP);
  attachInterrupt(0, btn1_ISR, RISING);
  attachInterrupt(1, btn2_ISR, RISING);
}

void btn1_ISR()
{
  bts1=btd1.read();
  if (bts1==LOW)
  {
    menu++;
    if (menu>5)
    {
      menu=0;
    }
  }
}

void btn2_ISR()
{
  bts2=btd2.read();
  if (bts2==LOW)
  {
    menu--;
    if (menu<0)
    {
      menu=5;
    }
  }
}

void loop()
{
  switch (menu) {
  case 0:
    lcd.setCursor(0,1);
    lcd.print("menu1");
    break;
  case 1:
    lcd.setCursor(0,1);
    lcd.print("menu2");
    break;
  case 2:
    lcd.setCursor(0,1);
    lcd.print("menu3");
    break;
  case 3:
    lcd.setCursor(0,1);
    lcd.print("menu4");
    break;
  case 4:
    lcd.setCursor(0,1);
    lcd.print("menu5");
    break;
  case 5:
    lcd.setCursor(0,1);
    lcd.print("menu6");
    break;
  default:
    lcd.setCursor(0,1);
    lcd.print("menu1");
    break;
}
}