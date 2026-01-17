# ThermaRest - Thermal Regulation Device

![Title Slide](https://github.com/user-attachments/assets/your-title-image-id-here)  <!-- Put your Nov 9 title image here -->

## Project overview
This project is an Arduino-based thermal regulation system nicknamed **"Chill Guy"** that uses Peltier plates to automatically cool patients and help reduce hospital-induced delirium. It monitors body temperature and galvanic skin response (GSR), activates cooling when temperature rises above a calibrated threshold, and displays real-time data on an LCD. The main goal was to explore sensor fusion, actuator control (Peltier + relay), safety in medical prototypes, and how simple temperature regulation can improve patient comfort and sleep quality in a hospital setting.

## Features
- **Automatic cooling activation**: Peltier module cools when body temperature exceeds the calibrated threshold (controlled via relay).
- **Body temperature & GSR monitoring**: Uses sensors to track core temp and skin conductivity in real time.
- **Calibration button**: Press to set a room/patient baseline temperature threshold.
- **Real-time LCD display**: Shows current temperature and GSR values with startup backlight.
- **Safety-focused design**: Low-voltage (5V), isolated relay, insulating layer on Peltier, and quick heat dissipation with isopropyl alcohol for demos.
- **User-friendly operation**: Place pad under back/shoulder, power on, calibrate — safe to reposition/remove anytime.

## Components
- **Microcontroller**: Arduino (R4 compatible)
- **Cooling**: Peltier module + cooling fan (controlled via relay)
- **Motor/Actuator**: DC motor/fan driver (D2) via relay module
- **Sensors**:
  - Temperature sensor (A0, Si7051 type) for °C conversion
  - GSR sensor (A1) for skin conductivity
  - Additional: Humidity, light sensors (optional monitoring)
- **Input**: Calibration button (D8)
- **Display**: I²C LCD (shows temp + GSR live)
- **Power**: 5V low-voltage system
- **Additional**: Relay module (isolated), cloth/insulating layer for Peltier, wires & prototyping setup

## Development timeline
- **Initial setup & sensor integration**:
  - Connected temperature (Si7051), GSR, humidity/light sensors, button, LCD, and relay.
  - Wrote basic analog reading code for temp conversion and GSR voltage.
- **Cooling system**:
  - Tested relay switching with a motor/fan to simulate Peltier control.
  - Added Peltier module with insulating cloth layer and isopropyl alcohol for safe, quick cooling demos.
- **Calibration & logic**:
  - Implemented button press to update temperature threshold (room baseline).
  - Built main loop: read sensors → convert → display on LCD → compare to threshold → activate cooling if needed.
  - Added 200ms loop delay for smooth, non-blocking operation.
- **Testing & validation**:
  - GSR dry vs. moist finger tests: consistent ~10–13mV jump direction across multiple people.
  - Temperature threshold triggering: relay/motor activates reliably.
  - Safety checks: low-voltage, isolated relay, no exposed conductors.
- **Documentation**:
  - Created block diagram, code logic flow, and captured photos/videos of prototype in action.

## Media
- **Full setup ("Chill Guy")**: Prototype in hospital bed context with cooling pad, Arduino, and nightlight vibe:
  - ![Chill Guy Setup](https://github.com/user-attachments/assets/your-chill-guy-image-id-here)
- **Hardware wiring & whiteboard diagram**:
  - ![Hardware Overview](https://github.com/user-attachments/assets/your-whiteboard-diagram-id-here)
- **Sensor close-up**:
  - ![Sensor Close-up](https://github.com/user-attachments/assets/your-sensor-hand-image-id-here)
- **Demo videos** (add when ready):
  - Calibration & cooling activation
  - GSR test (dry vs. moist finger)
  - Real-time LCD display

## Code
The full Arduino sketch (sensor reading, conversion, threshold logic, LCD updates, relay control) is available in this repository:
- [Main Sketch](https://github.com/yourusername/ThermaRest-Thermal-Regulation-Device/blob/main/Code/ThermaRest.ino)

## Future improvements
- Upgrade cooling module with proper heat sink for stable, long-duration cooling
- Add wireless alerts (Bluetooth/WiFi) to notify nurses in real time
- Implement data logging & trend analysis to track nighttime temperature and GSR patterns
- Enclose in a proper bedside casing for real-world use
- Refine sensor accuracy with better calibration and ambient compensation

## Contact
For questions, collaboration, or just to chat about medical tech prototypes — hit me up at maseehwardak5@gmail.com or [LinkedIn](https://www.linkedin.com/in/maseehullah-wardak-8244ba319)
