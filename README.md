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

## Components

- Arduino Uno/Nano
- Water Level Sensor
- SG90 Servo Motor
- Active Buzzer
- Jumper Wires
- USB Cable

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
