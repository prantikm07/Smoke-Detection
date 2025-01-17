# Smoke Monitoring and Detection System

This project demonstrates a smoke monitoring and detection system built using an Arduino Uno, MQ-135 gas sensor, 16x2 LCD display, buzzer, and LEDs. The system detects smoke levels in the environment and provides a warning through visual and auditory alerts when the smoke concentration exceeds a certain threshold.

---

## Features

- **Real-time Smoke Level Monitoring:** Displays smoke concentration on the 16x2 LCD in PPM (parts per million).
- **Audible and Visual Alerts:** Activates a buzzer and red LED when smoke levels exceed the threshold.
- **Safe Indicator:** Green LED lights up when smoke levels are within the safe range.
- **User-friendly Interface:** Provides real-time feedback through the LCD display.
- **I2C Communication Protocol:** Utilized to interface the 16x2 LCD with fewer connections, simplifying the wiring process.

---

## Components Used

1. **Arduino Uno** - Microcontroller for managing sensors and outputs.
2. **MQ-135 Gas Sensor** - Measures smoke concentration.
3. **16x2 I2C LCD Display** - Displays smoke values and system messages.
4. **Buzzer** - Emits audible alerts for high smoke levels.
5. **LEDs (Red and Green)** - Visual indicators for smoke level status.
6. **Breadboard** - For easy circuit connections.
7. **Jumper Wires** - Connects the components.

---

## Installation and Usage

1. **Clone the Repository:**
    ```bash
    git clone https://github.com/prantikm07/Smoke-Detection
    ```

2. **Set Up the Hardware:**
    - Connect the components as per the circuit diagram.
    - Upload the code to the Arduino Uno using the Arduino IDE.

3. **Calibrate the Sensor:**
    - Allow the MQ-135 sensor to warm up for 24-48 hours before use for accurate readings.

4. **Run the System:**
    - Power on the Arduino Uno.
    - Observe the LCD for smoke levels and corresponding alerts.

---

## Code Explanation

- **Setup Section:**
  - Initializes the LCD display and serial communication.
  - Displays introductory messages.
- **Loop Section:**
  - Reads smoke levels from the MQ-135 sensor.
  - Displays smoke levels on the LCD.
  - Triggers the buzzer and LEDs based on the smoke concentration.

---

## Demo Video

[Click Here!](Demo_Video)

---

## Output Preview

- **LCD Messages:**
  - "SMOKE_VALUE: <value> PPM"
  - Alerts like "WARNING!" when thresholds are exceeded.

- **Buzzer and LEDs:**
  - Buzzer and red LED activate for dangerous smoke levels.
  - Green LED indicates safe smoke levels.

---

## Threshold Values

- **Safe Range:** Below 100 PPM.
- **Warning Range:** 100 PPM and above.

You can adjust the threshold values in the code based on the specific application.

---

## Enhancements

- Add support for logging smoke concentration levels to an SD card.
- Implement Wi-Fi or Bluetooth for remote monitoring.
- Integrate a rechargeable battery for portability.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
