# Traffic Light Control System

## Overview
This project demonstrates a traffic light control system using a GUI built with Qt and an ATmega32 microcontroller. The system allows users to control the traffic lights via a graphical interface, and it reflects the changes both on the GUI and on the actual hardware.

## Features
- **Graphical User Interface (GUI):** Built with Qt, featuring three push buttons to control the traffic light colors (Red, Yellow, Green).
- **LCD Display:** Shows a countdown timer for the active traffic light.
- **Color Label:** Indicates the current active color.
- **Serial Communication:** Uses USB to TTL converter for communication between the GUI and the ATmega32 microcontroller.
- **Real-time Control:** Pressing a button on the GUI starts a countdown and activates the corresponding LED on the hardware.

## Components
- Qt-based GUI application
- ATmega32 microcontroller
- USB to TTL converter
- LEDs (Red, Yellow, Green)
- LCD display

## Setup and Installation
1. **Hardware Setup:**
   - Connect the LEDs to the ATmega32 microcontroller.
   - Connect the USB to TTL converter to the microcontroller for serial communication.
   - Ensure the LCD display is connected and configured correctly.

2. **Software Setup:**
   - Install Qt and set up the development environment.
   - Clone this repository: 
     ```bash
     git clone https://github.com/yourusername/traffic-light-control.git
     ```
   - Open the Qt project file in Qt Creator.
   - Configure the serial port settings in the code to match your hardware configuration.
   - Build and run the project.

## Usage
1. Launch the Qt application.
2. Use the push buttons to select the traffic light color.
3. The LCD display will show a countdown timer.
4. The selected traffic light color will be activated on the GUI and the corresponding LED on the hardware.
