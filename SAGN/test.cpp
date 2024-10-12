
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

char text[] = "mama";
char space[] = " "; 
int repeat = 0;

bool move = true;

int textLength = sizeof(text) / sizeof(text[0])-1;
int firstHalf = textLength/2;
int secondHalf = textLength-firstHalf;

void setup() {
  lcd.clear();
  lcd.begin(16, 2);
  ok();

}

void loop() {

}

void ok(){
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(text);
  while (move == true) {
    delay(800);
    lcd.clear();
    if (repeat<=firstHalf){
      for (int firstHalfLetters = 0+repeat;firstHalfLetters<=firstHalf-1; firstHalfLetters++) {
       lcd.print(text[firstHalfLetters]);
      }
    }
    else{
      lcd.print(space);
      lcd.print(space);
    }

    for (int spaceCount = 0; spaceCount < repeat; spaceCount++) {
      if (repeat<=firstHalf){
        lcd.print(space);
      }
      lcd.print(space);

    }

    for (int i=firstHalf; i<textLength; i++) {
      lcd.print(text[i]);
    } 

    if (16-secondHalf != repeat){
      repeat++;
    }
    else{
      move = false;
    }
  }
  lcd.setCursor(0, 1);
  lcd.print("koniec");

}
