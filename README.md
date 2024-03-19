# Chicken Coop Automation

This GitHub repository contains the source code and documentation for an Arduino UNO-based chicken coop automation system. </br>
The project integrates a temperature and humidity sensor for climate control, a camera with AI for predator detection, and an ultrasonic sound emitter to deter potential threats to wild animals. It is designed to enhance the safety and comfort of chickens by maintaining optimal living conditions and deterring predators or unwanted animals.

## Features

- **Climate Control**: for this project the ideal temperature is considered between 15°C to 25°C. A temperature lower than 15°C or higher than 25°C will activate the system. The same for the humidity that is consider idel between 40% and 70%. The system automatically adjusts ventilation or heating to maintain the ideal conditions for the chickens' health and comfort using the DHT11 sensor. The climate conditions will be checked every 30min and the information will be stored in a local server for future analyses between climate conditions and egg production. 
  
- **Predator Detection**: Integrates a camera with AI capabilities to monitor the coop for potential predators. When a threat is detected, the system alerts the owner via notifications.
  
- **Ultrasonic Deterrent**: The system includes an ultrasonic sound emitter that produces a loud, pulsating, and aggressive sound at approximately 21 kHz. While generally inaudible to humans, this sound acts as a significant annoyance to wild animals, causing them to avoid the area. This feature is effective against wild animals such as martens, rodents, wild boars, deer, and in some cases, dogs and cats that are not accustomed to human environments.

Abstract
We determined the absolute hearing sensitivity of the red fox (Vulpes vulpes) using an adapted standard psychoacoustic procedure. The animals were tested in a reward-based go/no-go procedure in a semi-anechoic chamber. At 60 dB sound pressure level (SPL) (re 20 μPa) red foxes perceive pure tones between 51 Hz and 48 kHz, spanning 9.84 octaves with a single peak sensitivity of -15 dB at 4 kHz. The red foxes' high-frequency cutoff is comparable to that of the domestic dog while the low-frequency cutoff is comparable to that of the domestic cat and the absolute sensitivity is between both species. The maximal absolute sensitivity of the red fox is among the best found to date in any mammal. The procedure used here allows for assessment of animal auditory thresholds using positive reinforcement outside the laboratory.

Copyright © 2014 Elsevier B.V. All rights reserved.

How Well Do Dogs and Other Animals Hear?
Reporting the frequency range for hearing in dogs and other species is not a straightforward task - the "how" of determining hearing frequency ranges must first be explained. Testing in animals differs from the method commonly used with humans of voluntarily reporting if a sound is heard. When determining the frequency range in animals, an investigator usually must first train the animal to respond to a presented sound stimulus by selecting between two actions using rewards. Often this response is to try to drink or eat from one of two dispensers when a sound is heard. The sounds are randomly presented from one side or the other, and the subject must select the right dispenser (on the same side as the stimulus) to get the reward; otherwise no food or drink is dispensed. This is done with the animal hungry or thirsty to motivate responding. Stimuli are different pure tones at varied frequencies (units of Hertz [Hz] - or kilohertz [kHz]) and at different loudness intensities (units of decibels [dB] - a logarithmic measure). The investigator then plots the responses on an audiogram, a graph of the softest intensity at which the subject was able to detect a specific. The plot of responses is a bowl-shaped curve, steeper on the high frequency end. A series of five typical audiograms for different dogs (Canis canis) is shown in the figure below.
(right click image to see it more clearly)
These audiograms are from a book compiling thousands of published references into a single difficult to find source (Fay, 1988). This particular audiogram compiles data on the dog from two published sources: one reporting an average from 11 dogs of unspecified breeds (Lipman & Grassi, 1942) and one reporting results from single dogs of four breeds (Heffner, 1983). Frequency is displayed on a logarithmic scale from 10 Hz to 100,000 Hz (100 kHz), while stimulus intensity is displayed (in dB sound pressure level) from -30 to 80 dB. Curve 1 was from the Lipman study, while curve 2 (Poodle), curve 3 (Dachshund), curve 4 (Saint Bernard) and curve 5 (Chihuahua) were from the Heffner study. In general, dogs had slightly greater sound sensitivity (detected lower intensity sounds) than humans, and cats had greater sensitivity than dogs, indicated by how low on the y-axis points were located.

It can be seen that the lowest intensity detected differs between the two studies; I place greater reliance on the Heffner study because it is more current and because he is a widely published and respected audiology researcher. It can also be seen that the greatest sensitivity (i.e. the frequencies that can be detected at the lowest intensities) is in the frequency range of 4-10 kHz. One dog (the Poodle) heard a tone at the low frequency of 40 Hz, but an intensity of 59 dB was required for it to be detected; most of the other dogs didn't respond until the stimulus frequency reached 62.5 Hz. Three dogs (the Poodle, Saint Bernard, and Chihuahua) heard a tone at the highest frequency of 46 kHz, requiring intensities of 64-73 dB. On the other hand, the Poodle heard a 4 kHz tone when it was -4 dB (since dB are logarithmic units based on a ratio of the stimulus intensity compared to a standard intensity, any stimulus smaller than the standard results in a ratio less than one, and the logarithm of a number smaller than one is a negative number; therefore a -4 dB stimulus intensity is a VERY soft one!) and an 8 kHz tone when it was -3.5 dB. There was no systemic relation seen among the four breeds between high frequency hearing sensitivity and head size, body weight, or tympanic membrane area.

From the figure it can be seen that choosing the frequencies for reporting the frequency range for dogs is hard - presumably lower frequencies could have been detected if a loud enough stimulus was used, and likewise for high frequencies. Nevertheless, the following table reports the approximate hearing range for different species with an attempt to apply the same cut-off criteria to all, using data from Fay (1988) and Warfield (1973). Since different experimental methods were used in these different studies, too much value should not be placed on comparing species.
![image](https://github.com/DanZech/ChickenCoopAutomation/assets/117987793/1e883664-9233-4c71-bbb4-aac98724ec86)

## Getting Started

### Prerequisites

- Arduino UNO
- Temperature and Humidity Sensor (DHT22 or similar)
- Camera module compatible with Arduino
- Ultrasonic speaker capable of emitting sounds at 21 kHz
- Basic understanding of Arduino programming



### Installation

1. Clone this repository to your local machine.  
`git clone https://github.com/yourusername/chicken-coop-automation.git`
2. Connect the hardware components per the schematic in the `schematics` folder.
3. Open the Arduino IDE and load the provided `.ino` files from the `src` folder.
4. Compile and upload the code to your Arduino UNO.

## Usage

Once the system is up and running, it will automatically monitor the chicken coop's environment and adjust the climate control settings accordingly. The predator detection system remains active at all times, with the ultrasonic deterrent activating upon detection of a potential threat.

## Contributing

We welcome contributions to this project! If you have suggestions for improvements or have identified bugs, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details.

## Acknowledgments

- Thanks to the Arduino community for providing an extensive library and resources that made this project possible.
- Special thanks to those who contributed to the development of AI algorithms for predator detection.
