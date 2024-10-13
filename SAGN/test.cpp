
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  char text[] = "1234567891113151719212325&";
  int textLength = (sizeof(text) / sizeof(text[0]))-1;
  int firstHalf = textLength/2;
  int secondHalf = textLength-firstHalf;
  int countMove = 0;
  bool move = true;

  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(text);

  while (move == true) {
    if (firstHalf != 0) {
      delay(700);
      lcd.clear();
      lcd.setCursor(0, 0);
      for (int firstHalfLetters = countMove; firstHalfLetters < firstHalf; firstHalfLetters++) {
        lcd.print(text[firstHalfLetters]);
      }
      if (countMove <= firstHalf) {
        for (int nice = 0; nice < countMove; nice++) {
          lcd.print(" ");
        }
      }
      else{
        addSpace(textLength);

      }
        
      for (int pawelMaDepresjePoMoichNazwachZmiennych = 0; pawelMaDepresjePoMoichNazwachZmiennych < countMove; pawelMaDepresjePoMoichNazwachZmiennych++) {
        lcd.print(" ");
      }

      for (int pawelUwU = firstHalf; pawelUwU < textLength ;pawelUwU++) {
        lcd.print(text[pawelUwU]);
      }
    }
    else {
      delay(300);
      lcd.clear();
      lcd.setCursor(0, 0);
      for (int pawelMaDepresjePoMoichNazwachZmiennych = 0; pawelMaDepresjePoMoichNazwachZmiennych < countMove; pawelMaDepresjePoMoichNazwachZmiennych++) {
        lcd.print(" ");
      } 
      lcd.print(text[0]);
    }
    if (textLength < 18) {
      if (countMove>=16-firstHalf) { 
        move = false;
      }
      else{
        countMove++;
      }
    }
    else {
      if (countMove>=firstHalf) { 
        move = false;
      }
      else{
        countMove++;
      }
    }
  }
  lcd.setCursor(0, 1);
  lcd.print("koniec");
  lcd.print(firstHalf);
  lcd.print(":");
  lcd.print(textLength);

}


```
void loop() {

}

void addSpace(float lenght) {
  if (lenght == 0 || lenght == 1){
    
  }
  else if ((lenght-1)/2 == lenght/2){
    for(int space = 0; space <= int(lenght-1)/2 ; space++) {
      lcd.print(" ");
    }
  }
  else{
    for(int space = 0; space < int(lenght/2) ; space++) {
      lcd.print(" ");
    }
  }
}
