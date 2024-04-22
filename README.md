# Transforming Finger Movements Into Written Words

## Overview
The "Transforming Finger Movements Into Written Words" project is aimed at developing a wearable device that enables users to input text by making finger movements. This innovative system utilizes flex sensors, an Arduino microcontroller, and a display to interpret finger gestures and display the corresponding text on the screen in real-time.

## Purpose
The primary purpose of this project is to provide an alternative input method for individuals with disabilities or those who find traditional keyboard inputs challenging. By leveraging intuitive finger movements, users can effortlessly input text without relying on conventional keyboards or touchscreens.

## How It Works
The system consists of several key components:

- **Flex Sensors**: These sensors are attached to a glove worn on the user's hand. They detect the bending of the user's fingers, which is used to interpret different gestures.
- **Arduino Microcontroller**: The Arduino board processes the sensor data and translates it into text input commands.
- **Display**: A display module is used to visually present the text input as the user makes finger movements.
- **Battery**: A power source is required to run the Arduino and display components.
- **Jumper Wires**: These are used to connect the components together and create the circuit.

The flex sensors measure the degree of bending in each finger, and the Arduino microcontroller interprets these measurements to determine the corresponding letters or words. The text input is then displayed on the screen in real-time, allowing the user to see their input as they make gestures with their fingers.

## Setting Up
To set up the system, follow these steps:
1. Attach the flex sensors to the glove, ensuring they are positioned on each finger to accurately measure bending.
2. Connect the flex sensors, Arduino board, display, and power source using jumper wires according to the provided schematic.
3. Upload the Arduino code (`main.ino`) to the microcontroller.
4. Power on the system and calibrate the flex sensors as needed.
5. Once calibrated, the system is ready for use.

## Usage
To use the system, wear the glove with the flex sensors and make finger movements corresponding to the desired letters or words. The text input will be displayed on the screen in real-time as you make gestures with your fingers.
