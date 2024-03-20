# 🐓 Chicken Coop Automation

## 🚧 UNDER CONSTRUCTION 🚧

![C++](https://img.shields.io/badge/C/C++-v1.19.8+-green.svg)  ![Python](https://img.shields.io/badge/python-v3.7+-blue.svg)  ![AWS](https://img.shields.io/badge/AWS-yellow.svg)

This GitHub repository contains the source code and documentation for an Arduino UNO-based chicken coop automation system. The project starts integrating a temperature and humidity sensor for climate control to enhance confort of chickens by mainting optimal living conditions. A second stage of this project will be the integration of cameras and AI to analyze chickens behavior and detect predator or unwanted animals.  

## Features

- **❄️ ☀️ Climate Control**: for this project the ideal temperature is considered between 15°C to 25°C (Green_Zone). A temperature between 5°C till 15°C and between 25°C and 30°C will be consider 'moderate zone', and the system will be monitoring clima variations slightly closely. In case of temperatures below ❄️ 5°C or higher than ☀️ 30°C the system will act to heat or refresh the enviroment and keep monitoring the temperate very closely. The air humidity will be tracked just for data information (no actions) but for this project the ideal air humidity is between 40% and 70%.

- **🚧 🐔 Chicken Behavior**:
  
- **🚧 🐺 Predator Detection**: Integrates a camera with AI capabilities to monitor the coop for potential predators. When a threat is detected, the system alerts the owner via notifications.
  
- **🚧 📣 Ultrasonic Deterrent**: The system will include an ultrasonic sound emitter that produces a loud, pulsating, and aggressive sound at approximately 21 kHz. While generally inaudible to humans, this sound acts as a significant annoyance to wild animals. This feature is effective against wild animals and in some cases, dogs and cats that are not accustomed to human environments.

## Getting Started

### Prerequisites

- 1x Arduino UNO microcontroller
- 1x Temperature and Humidity Sensor (DHT 11, DHT22 or similar);
- Arduino Traffic LED Lights;
- 2x PC fan cooler (5V);
- 1x USB Eletric heating  
- Camera module compatible with Arduino
- Ultrasonic speaker capable of emitting sounds at 21 kHz;

### Installation

1. Clone this repository to your local machine.  
`git clone https://github.com/yourusername/chicken-coop-automation.git`
2. Connect the hardware components per the schematic in the `schematics` folder.
3. Open the Arduino IDE and load the provided `.ino` files from the `src` folder.
4. Compile and upload the code to your Arduino UNO.

## Usage

Once the system is up and running, it will automatically monitor the chicken coop's environment and adjust the climate control settings accordingly. The predator detection system is a second step in this project and still needs some more research. 

## Contributing

We welcome contributions to this project! If you have suggestions for improvements or have identified bugs, please open an issue or submit a pull request.

## 🔖 License

This project is licensed under the MIT License - see the LICENSE.md file for details.

## 🗿 Acknowledgments

- Thanks to the Arduino community for providing an extensive library and resources that made this project possible.
  
- Special thanks to those who contributed to the development of AI algorithms for predator detection.
