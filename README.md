# rain detector





i have a simple project which detects rain and trigger a buzzer and at the same time a servo motor rotate 90 degree and save your cloths


> Built in [Breadboard](https://breadboard.hackclub.com), a Hack Club program. This project took ~1 hours of work.




# 🌧️ Arduino Rain Detector

A simple Arduino project that detects rain using a water level sensor. When rain is detected, the system sounds a buzzer and rotates a servo motor to 90°, making it useful for automatic rain covers, window closers, or weather alert systems.

## Features

- 🌧️ Detects rain using a water level sensor
- 🔔 Activates a buzzer when rain is detected
- 🔄 Rotates a servo motor to 90°
- 🔙 Returns the servo to 0° when the sensor is dry
- 📊 Displays sensor values in the Serial Monitor

#
## Bill of Materials 

| Component | Quantity | Purpose |
|-----------|:--------:|---------|
| Arduino Uno (or Nano) | 1 | Main microcontroller |
| Water Level Sensor Module | 1 | Detects rain/water |
| SG90 Micro Servo Motor | 1 | Rotates 90° when rain is detected |
| Active Buzzer (5V) | 1 | Provides an audible alert |
| Jumper Wires | 1 Set | Electrical connections |
| Breadboard (Optional) | 1 | Prototyping the circuit |
| USB Cable | 1 | Programming and powering the Arduino |
| 5V Power Supply (Optional) | 1 | Recommended for powering the servo separately |

## Wiring

### Water Level Sensor
| Sensor | Arduino |
|--------|---------|
| VCC | 5V |
| GND | GND |
| S (AO) | A0 |

### Servo
| Servo | Arduino |
|-------|---------|
| Signal | D9 |
| VCC | 5V |
| GND | GND |

### Buzzer
| Buzzer | Arduino |
|--------|---------|
| + | D8 |
| - | GND |

## Firmware

The firmware is written in **Arduino (C++)** and runs on an Arduino Uno or Nano.

### Functionality

- Continuously reads the water level sensor.
- Detects rain based on a configurable threshold.
- Activates the buzzer when rain is detected.
- Rotates the servo motor to **90°** during rain.
- Returns the servo to **0°** and turns the buzzer off when the sensor is dry.
- Outputs sensor readings to the Serial Monitor for debugging and threshold calibration.

### Requirements

- Arduino IDE
- Built-in `Servo` library

### Uploading the Firmware

1. Open `rain_detector.ino` in the Arduino IDE.
2. Select your Arduino board and COM port.
3. Click **Upload**.
4. Open the **Serial Monitor** (9600 baud) to view sensor readings and adjust the threshold if needed.
```

## How to Use It

1. Assemble the circuit according to the wiring diagram.
2. Connect the Arduino to your computer using a USB cable.
3. Open the project in the Arduino IDE.
4. Select the correct **Board** and **COM Port**.
5. Upload the code to the Arduino.
6. Place the water level sensor where it can detect raindrops.
7. Power the Arduino.
8. When rain falls on the sensor:
   - The buzzer will sound.
   - The servo motor will rotate to **90°**.
9. Once the sensor dries:
   - The buzzer will stop.
   - The servo will return to **0°**.
10. If needed, adjust the sensor threshold in the code to change the detection sensitivity.


## How It Works

1. The Arduino continuously reads the water level sensor.
2. If the sensor value exceeds the threshold:
   - The buzzer turns ON.
   - The servo rotates to 90°.
3. When the sensor dries:
   - The buzzer turns OFF.
   - The servo returns to 0°.

## 'What It Does'

This project continuously monitors a water level sensor to detect raindrops. When rain is detected, the Arduino immediately triggers an active buzzer to provide an audible alert and rotates a servo motor to 90°. Once the sensor is dry again, the buzzer turns off and the servo returns to its original 0° position.

This project demonstrates basic sensor monitoring, servo motor control, and event-based automation using an Arduino.

## Upload

1. Open the Arduino IDE.
2. Install the **Servo** library (included with the Arduino IDE).
3. Connect your Arduino.
4. Upload the sketch.
5. Open the Serial Monitor (9600 baud) to view sensor readings.

## Applications

- Automatic rain cover
- Smart window closer
- Rain alarm
- Weather monitoring
- DIY automation projects

## License

This project is open source and available under the MIT License.

## Demo

- **Try it:** [https://breadboard.hackclub.com/share/80](https://breadboard.hackclub.com/share/80)


*Made in [Breadboard](https://breadboard.hackclub.com) — 1h of work*



<p align="center"><img src="https://cdn.hackclub.com/019efae7-6857-75a2-8bc1-2618087b4eae/a%20bred%20tanuki%20(3).png" width="64" alt="Breadboard mascot" /></p>
