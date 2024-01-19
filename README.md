[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Obstacle-Avoidance-Arduino-Robot)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Obstacle-Avoidance-Arduino-Robot
This robot moves using wheels and when the robot moves, the ultrasonic sensor will detect whether the area to be passed by the robot is safe or not. If there are obstacles in the way, then the robot will avoid them and find another way.

<br><br>

## Project Requirements
| Media | Description |
| --- | --- |
| Board Development | Arduino Uno R3 |
| Code Editor | Arduino IDE |
| Driver | USB-Serial CH340 |
| Programming Language | C/C++ |
| Arduino Library | Adafruit Motor Shield, Servo |
| Actuators | Servo Motor SG90 180° (x1), Gear Motor / Motor DC (x4) |
| Sensor | HC-SR04: Ultrasonic Sensor (x1) |
| Other Components | USB type A-B cable (x1), Jumper cable (1 set), KCD11: Rocker Switch SPST (x1), Li-ion battery 18650 (x2), 2-Slot series battery holder (x1), Robot wheels (x4), Motor driver shield L293D (x1), Car robot frame (x1), Spicer bolts (1 set), Bolts plus (1 set), and Nuts (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. USB-Serial CH340

   ```
   https://bit.ly/CH340_Driver
   ```
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/168fadce-b7fe-482e-8f20-cc923b72a8aa" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/1f64599a-4a0f-4a24-932d-076fb98baf3b" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/67e99951-4168-43d3-a886-e7cf640d02aa" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Make sure you have the necessary electronic components.<br><br>
   
2. Make sure your components are designed according to the diagram.<br><br>
   
3. Open the ``` Arduino IDE ``` first, then open this project by clicking: ``` File ``` -> ``` Open ``` -> ``` obstacle_avoidance_robot.ino ```.<br><br>
   
4. ``` Board Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Uno ```.<br><br>
   
5. ``` Install Library ``` in Arduino IDE<br><br>
   • Method: download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.<br><br>

6. ``` Port Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```.<br><br>

7. Before uploading the program please click: ``` Verify ```.<br><br>

8. If there is no error in the program code, then please click: ``` Upload ```.<br><br>
   
9. Please enjoy [Done].

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
Coming Soon....

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright (c) 2023 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
