# Arduino Smart Toothbrush

## Overview
This project is a DIY smart toothbrush powered by Arduino. It aims to improve brushing habits with features like:
- **Brushing Timer**: Ensures users brush for the recommended 2 minutes.
- **Pressure Feedback**: Alerts if too much or too little pressure is applied.
- **Movement Tracking**: Tracks angles and movement for optimal brushing.
- **Bluetooth Sync (optional)**: Sends brushing data to a mobile app.

## Features
1. **Brushing Timer**
   - A 2-minute timer with buzzer or LED indicators.
2. **Pressure Feedback**
   - Uses a pressure sensor to detect brushing intensity.
3. **Movement Tracking**
   - An accelerometer tracks brushing angles and movement.
4. **Bluetooth Sync**
   - Integrates with a smartphone app to track progress.

## Hardware Components
- **Arduino Board** (e.g., Nano or Pro Mini)
- **Vibration Motor**
- **Piezo Buzzer**
- **LEDs** (optional)
- **Pressure Sensor**
- **Accelerometer (e.g., MPU6050)**
- **Bluetooth Module (e.g., HC-05)** (optional)
- **Battery (3.7V Li-Po)** with a charging module
- **3D-Printed Case** (to house components)

## Software Requirements
- **Arduino IDE** or **PlatformIO**
- Required Libraries:
  - `Adafruit_Sensor`
  - `TimerOne`
  - `BluetoothSerial`

## How to Use
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/zakmorrison2024/arduino-smart-toothbrush.git
   ```
2. **Upload the Code**:
   - Open the `toothbrush.ino` file in Arduino IDE.
   - Select the correct board and port.
   - Upload the code.
3. **Assemble the Hardware**:
   - Connect all components as per the circuit diagram in the `docs/` folder.
4. **Test the Toothbrush**:
   - Power it on and test features like the timer and pressure alerts.

## License
This project is licensed under the MIT License. See `LICENSE` for more details.

## Contributing
Contributions are welcome! Feel free to fork the repository and submit a pull request.

## Contact
For questions or suggestions, please contact:
**Zak Morrison**  
[GitHub Profile](https://github.com/zakmorrison2024)  
