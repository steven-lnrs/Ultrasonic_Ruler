# 📏 Noise Ruler

Welcome to the **Noise Ruler** project! This device measures distances using an ultrasonic sensor and displays the result on an I2C LCD screen. Perfect for makers, hobbyists, and anyone looking to explore basic electronics and programming. 🌟

---

## 🛠️ Features

- Measures distances accurately using an ultrasonic sensor 📡.
- Displays the distance in real-time on an LCD screen 💻.
- Simple and intuitive design for easy use.

---

## 📋 How It Works

1. The **ultrasonic sensor** sends out sound waves and measures the time it takes for the echo to return.
2. The device calculates the distance based on the time and speed of sound. Quick reminder to divide by two, because the wave has to come back to the echo pin.
3. The result is displayed in centimeters on the LCD screen.

---
## 🚀 Getting Started

## 🔌 Hardware Requirements

- Arduino (any compatible board)
- Ultrasonic Sensor (e.g., HC-SR04)
- I2C LCD Display
- Jumper wires
- Breadboard

---


### 1️⃣ Wiring Diagram

| **Component**    | **Arduino Pin** |
|-------------------|-----------------|
| Trig Pin          | 6               |
| Echo Pin          | 9               |
| LCD SDA           | A4 (or dedicated SDA pin) |
| LCD SCL           | A5 (or dedicated SCL pin) |
| 5V & GND          | Power supply    |

### 2️⃣ Software Setup
1. Download the LCD_I2C from the arduino IDE (package made by Blackhack)
2. Clone this repository:
   ```bash
   git clone https://github.com/your-username/noise-ruler.git
   cd noise-ruler
3. Run it on your IDE and ensure the wires are connected properly


### ⚠️ Warnings ⚠️
1. Do not use soft materials when measuring distance, it will absorb the ultrasound wave and will give an inaccurate reading.
2. The percentage error of a supersonic sensor is ±1% to ±3%, not including external factors.
3. Environmental conditions effect an ultrasonic sensor. Temperature and humidity slightly affect readings.
4. The maximum range for an HC-SR04 is typically 4 meters. After reaching the maximum threshold, accuracy will reduce significantly.
