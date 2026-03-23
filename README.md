# 📟 Arduino Keypad Calculator

## 👨‍💻 Author

**Pico Robotics**  
Robotics | IoT | Embedded Systems  

🔗 LinkedIn: https://www.linkedin.com/  
🌐 Website: https://shoyab-sadik.github.io/  
📱 WhatsApp: 01575317604  

---

## 🚀 Features

- Input numbers using a 4x4 keypad  
- Supports operations:
  - ➕ Addition  
  - ➖ Subtraction  
  - ✖️ Multiplication  
  - ➗ Division  
- Displays input and result on a 16x2 LCD  
- Clear function (`C`) to reset all values  
- Handles division by zero safely  

---

## 🧰 Components Required

- Arduino (Uno/Nano)  
- 16x2 LCD Display  
- 4x4 Matrix Keypad  
- Jumper wires  
- Breadboard (optional)  

---

## 🔌 Pin Configuration

### LCD Connections

| LCD Pin | Arduino Pin |
|--------|------------|
| RS     | 10         |
| EN     | 11         |
| D4     | A0         |
| D5     | A1         |
| D6     | A2         |
| D7     | A3         |

---

### Keypad Connections

| Keypad Row | Arduino Pin |
|-----------|------------|
| R1        | 9          |
| R2        | 8          |
| R3        | 7          |
| R4        | 6          |

| Keypad Column | Arduino Pin |
|--------------|------------|
| C1           | 5          |
| C2           | 4          |
| C3           | 3          |
| C4           | 2          |

---

## 🧠 How It Works

1. User inputs numbers using keypad  
2. Selects an operation (`+`, `-`, `*`, `/`)  
3. Inputs second number  
4. Press `=` to calculate  
5. Result is displayed on LCD  

---

## 🎮 Key Functions

| Key | Function |
|-----|--------|
| 0-9 | Number input |
| + - * / | Operations |
| = | Calculate result |
| C | Clear/reset |

---

## 📷 Output Example

