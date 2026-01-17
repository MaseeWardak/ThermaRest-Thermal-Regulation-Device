# ThermaRest - Thermal Regulation Device

<p align="center">
  <img src="https://github.com/user-attachments/assets/2b3fd891-1f66-4e96-b2f4-4d3577a0d931" 
       alt="Title Slide" 
       width="70%"/>
</p>

## Project overview
This project is an Arduino-based thermal regulation system prototype that uses Peltier plates to automatically cool patients and intends to help reduce hospital-induced delirium. It monitors body temperature and galvanic skin reponse (GSR), activates cooling when temperature rises above a calibrated threshold, and displays real-time data on an LCD. The main goal was to explore sensor fusion, actuator control (Peltier + relay), safety in medical prototypes, and how simple temperature regulation can improve patient comfort and sleep quality in a hospital setting.

## Features
- **Automatic cooling activation**: Peltier module cools when body temperature exceeds the calibrated threshold (controlled via relay).
- **Body temperature & GSR monitoring**: Uses sensors to track core temp and skin conductivity in real time.
- **Calibration button**: Press to set a patient baseline temperature threshold.
- **Real-time LCD display**: Shows current temperature and GSR values with startup backlight.
- **User-friendly operation**: Place pad under matress, power on, calibrate — safe to reposition/remove anytime.

## Components
- **Microcontroller**: Arduino R4
- **Cooling**: Two peltier modules
- **Sensors**:
  - Temperature sensor (A0, Si7051 type) for °C conversion
  - GSR sensor (A1) for skin conductivity
- **Input**: Calibration button (D8)
- **Display**: I²C LCD (shows temp + GSR live)
- **Power**: USB Powered.
- **Additional**: Relay module (isolated), cloth/insulating layer for Peltier, wires & prototyping setup

## Development timeline
- **Initial setup & sensor integration**:
  - Connected temperature (Si7051), GSR, humidity/light sensors, button, LCD, and relay.
  - Wrote basic analog reading code for temp conversion and GSR voltage.
- **Cooling system**:
  - Added Peltier module
- **Calibration & logic**:
  - Built main loop: read sensors → convert → display on LCD → compare to threshold → activate cooling if needed.
  - Added 200ms loop delay for smooth, non-blocking operation.
- **Testing & validation**:
  - GSR dry vs. moist finger tests: consistent ~10–13mV jump direction across multiple people.
  - Temperature threshold triggering: relay/motor activates reliably.
  - Safety checks: low-voltage, isolated relay, no exposed conductors.
- **Documentation**:
  - Created block diagram, code logic flow, and captured photos/videos of prototype in action.

## Media
- **Full setup ("Chill Guy")**: Prototype in bed context with cooling pad, Arduino, and nightlight vibe:
  <p align="center">
    <img src="https://github.com/user-attachments/assets/cb0f8753-f4be-4d03-9d30-c197a81c4500" 
         alt="Chill guy under pillow" 
         width="60%"/>
  </p>

- **Hardware wiring & whiteboard diagram**:
  <p align="center">
    <img src="https://github.com/user-attachments/assets/2f615e29-8769-4b06-b062-f0c816fbf8a6" 
         alt="Hardware Overview" 
         width="600"/>
  </p>

- **Project Progress** (sensors close-up):
  <p align="center">
    <img src="https://github.com/user-attachments/assets/YOUR_SENSOR_PROGRESS_IMAGE_ID_HERE"  <!-- replace with actual if different; this is placeholder for the hand-holding-sensors one -->
         alt="Sensors connected" 
         width="500"/>
  </p>

## Code
The full Arduino sketch (sensor reading, conversion, threshold logic, LCD updates, relay control) is available in this repository:
- [Main Sketch](https://github.com/yourusername/ThermaRest-Thermal-Regulation-Device/blob/main/Code/ThermaRest.ino)

## Future improvements
- Upgrade cooling module with proper heat sink for stable, long-duration cooling
- Add wireless alerts (Bluetooth/WiFi) to notify nurses in real time
- Implement data logging & trend analysis to track nighttime temperature and GSR patterns
- Refine sensor accuracy with better calibration and ambient compensation

## Contact
For questions, collaboration, or just to chat about medical tech prototypes — hit me up at mwardak@uwaterloo.ca or [LinkedIn](https://www.linkedin.com/in/maseehullah-wardak-8244ba319)
