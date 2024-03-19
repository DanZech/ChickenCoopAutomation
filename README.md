# Chicken Coop Automation Project

This GitHub repository contains the source code and documentation for an Arduino UNO-based chicken coop automation system. The project integrates a temperature and humidity sensor for climate control, a camera with AI for predator detection, and an ultrasonic sound emitter to deter potential threats such as wild animals. It is designed to enhance the safety and comfort of chickens by maintaining optimal living conditions and deterring predators or unwanted animals.

## Features

- **Climate Control**: Utilizes a temperature and humidity sensor to monitor the coop's environment. The system automatically adjusts ventilation or heating to maintain the ideal conditions for the chickens' health and comfort.
  
- **Predator Detection**: Integrates a camera with AI capabilities to monitor the coop for potential predators. When a threat is detected, the system alerts the owner via notifications.
  
- **Ultrasonic Deterrent**: The system includes an ultrasonic sound emitter that produces a loud, pulsating, and aggressive sound at approximately 21 kHz. While generally inaudible to humans, this sound acts as a significant annoyance to wild animals, causing them to avoid the area. This feature is effective against wild animals such as martens, rodents, wild boars, deer, and in some cases, dogs and cats that are not accustomed to human environments.

## Getting Started

### Prerequisites

- Arduino UNO
- Temperature and Humidity Sensor (DHT22 or similar)
- Camera module compatible with Arduino
- Ultrasonic speaker capable of emitting sounds at 21 kHz
- Basic understanding of Arduino programming



### Installation

1. Clone this repository to your local machine.
'git clone https://github.com/yourusername/chicken-coop-automation.git'
3. Connect the hardware components per the schematic in the `schematics` folder.
4. Open the Arduino IDE and load the provided `.ino` files from the `src` folder.
5. Compile and upload the code to your Arduino UNO.

## Usage

Once the system is up and running, it will automatically monitor the chicken coop's environment and adjust the climate control settings accordingly. The predator detection system remains active at all times, with the ultrasonic deterrent activating upon detection of a potential threat.

## Contributing

We welcome contributions to this project! If you have suggestions for improvements or have identified bugs, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details.

## Acknowledgments

- Thanks to the Arduino community for providing an extensive library and resources that made this project possible.
- Special thanks to those who contributed to the development of AI algorithms for predator detection.
