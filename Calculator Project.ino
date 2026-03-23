#include <Keypad.h>
#include <LiquidCrystal.h>

// Initialize LCD (adjust pins as necessary)
LiquidCrystal lcd(10, 11, A0, A1, A2, A3);

// Keypad configuration
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'C', '0', '=', '/'}
};
byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3,2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String input = "";
float num1 = 0, num2 = 0;
char operation = '\0';

void setup() {
  lcd.begin(16, 2);
  lcd.print("Arduino");
  delay(500);
  lcd.setCursor(2,1);
  lcd.print("Calculator");
  delay(2000);
  lcd.clear();
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key >= '0' && key <= '9') {  // If it's a number
      input += key;
      lcd.setCursor(0, 0); 
      lcd.clear();
      lcd.print(input);
    } else if (key == '+' || key == '-' || key == '*' || key == '/') {  // If it's an operator
      num1 = input.toFloat();
      operation = key;
      input = "";
      lcd.clear();
      lcd.print(num1);
      lcd.print(" ");
      lcd.print(operation);
    } else if (key == '=') {  // Calculate result
      num2 = input.toFloat();
      lcd.clear();
      lcd.print("Result:-");
      lcd.setCursor(0,1);      
      float result;
      switch (operation) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num2 != 0 ? num1 / num2 : 0; break;
      }
      lcd.print(result);
      input = "";
    } else if (key == 'C') {  // Clear input
            /*lcd.clear();
            lcd.print("input Values...");*/
      input = "";
      num1 = 0;
      num2 = 0;
      operation = 'C';
      lcd.clear();
            delay(200);
      lcd.print("input Values...");
    }
        else{lcd.clear();
            lcd.print("input Values...");}
  }
}