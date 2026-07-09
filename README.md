# rain detector





i have a simple project which detects rain and trigger a buzzer and at the same time a servo motor rotate 90 degree and save your cloths


> Built in [Breadboard](https://breadboard.hackclub.com), a Hack Club program. This project took ~1 hours of work.

# 🌧️ Arduino Rain Detector

A simple Arduino-based rain detection system that uses a water level sensor to detect raindrops. When rain is detected, the Arduino activates a buzzer to provide an audible alert and rotates a servo motor to 90°, making it suitable for applications such as automatic rain covers, window closers, and weather monitoring.

## ✨ Features

- Detects rain using a water level sensor
- Sounds an active buzzer when rain is detected
- Rotates an SG90 servo motor to 90°
- Returns the servo to 0° when the sensor is dry
- Displays sensor readings on the Serial Monitor
- Simple, beginner-friendly Arduino project

---

## ⚙️ How It Works

1. The Arduino continuously reads the analog value from the water level sensor.
2. When raindrops fall on the sensor, its output value increases.
3. The Arduino compares the sensor reading to a predefined threshold.
4. If the reading exceeds the threshold:
   - The Arduino activates the active buzzer to sound an alarm.
   - The SG90 servo motor rotates from **0°** to **90°**.
5. If the reading falls below the threshold (the sensor is dry):
   - The buzzer turns off.
   - The servo returns to **0°**.
6. The current sensor value is also sent to the **Serial Monitor** for debugging and sensitivity adjustment.

This simple control logic allows the system to automatically respond whenever rain is detected.
```

## 📖 What It Does

This project continuously monitors a water level sensor for the presence of water or raindrops. The Arduino reads the sensor value and compares it against a predefined threshold.

When rain is detected:
- 🔔 The buzzer turns on to alert the user.
- 🔄 The servo motor rotates to **90°**.

When the sensor is dry:
- 🔕 The buzzer turns off.
- 🔄 The servo returns to **0°**.

The firmware also prints sensor readings to the Serial Monitor, allowing the detection threshold to be adjusted for different environments.

---

## 🎯 Why I Built This

I built this project to learn how Arduino interfaces with sensors and actuators. It demonstrates analog sensor reading, decision-making in software, and controlling output devices such as servos and buzzers.

This project can also serve as the foundation for larger automation systems, including automatic window closers, retractable covers, and weather monitoring devices.

---

## 🛠 Components

| Component | Quantity |
|-----------|:--------:|
| Arduino Uno/Nano | 1 |
| Water Level Sensor | 1 |
| SG90 Servo Motor | 1 |
| Active Buzzer | 1 |
| Jumper Wires | Several |
| Breadboard (Optional) | 1 |
| USB Cable | 1 |

---

## 🔌 Wiring

### Water Level Sensor

| Sensor | Arduino |
|---------|----------|
| VCC | 5V |
| GND | GND |
| AO | A0 |

### Servo

| Servo | Arduino |
|--------|----------|
| Signal | D9 |
| VCC | 5V |
| GND | GND |

### Buzzer

| Buzzer | Arduino |
|---------|----------|
| + | D8 |
| - | GND |

---

## 🚀 How to Use

1. Assemble the circuit.
2. Connect the Arduino to your computer.
3. Open the Arduino sketch in the Arduino IDE.
4. Select your board and COM port.
5. Upload the firmware.
6. Place the water level sensor where it can detect rain.
7. Power the Arduino.

When rain falls on the sensor:
- The buzzer sounds.
- The servo rotates to 90°.

When the sensor dries:
- The buzzer stops.
- The servo returns to 0°.

---

## 💻 Firmware

The firmware is written in Arduino (C++).

Functions:
- Reads the water level sensor continuously.
- Detects rain using a configurable threshold.
- Controls the buzzer.
- Controls the servo motor.
- Sends sensor values to the Serial Monitor.

Library used:
- Servo.h

---

## 📁 Repository Structure

```
Rain-Detector/
│
├── firmware/
│   └── rain_detector.ino
│
├── images/
│   ├── wiring_diagram.png
│   └── project_photo.jpg
│
├── README.md
└── LICENSE
```

---

## 📷 Images

Add:
- Project photos
- Wiring diagram
- Breadboard layout
- Demonstration GIF (optional)

---

## 🔮 Future Improvements

- OLED display
- LCD status screen
- IoT notifications
- Automatic rain cover
- Battery-powered operation
- Adjustable sensitivity using a potentiometer

---

## 📜 License

This project is licensed under the MIT License.



## Demo

- **Try it:** [https://breadboard.hackclub.com/share/80](https://breadboard.hackclub.com/share/80)


*Made in [Breadboard](https://breadboard.hackclub.com) — 1h of work*



<p align="center"><img src="https://cdn.hackclub.com/019efae7-6857-75a2-8bc1-2618087b4eae/a%20bred%20tanuki%20(3).png" width="64" alt="Breadboard mascot" /></p>
