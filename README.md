[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
![Project](https://img.shields.io/badge/Project-Obstacle%20Avoidance%20Robot-light.svg?style=flat&logo=arduino&logoColor=white&color=25A18E)
![Arduino](https://img.shields.io/badge/Arduino-light.svg?&style=flat&logo=arduino&logoColor=white&color=2db83d)

# Obstacle-Avoidance-Arduino-Robot
This robot moves using wheels and when the robot moves, the ultrasonic sensor will detect whether the area to be passed by the robot is safe or not. If there are obstacles in the way, then the robot will avoid them and find another way.

<br><br>

## Features / Framework / Tools
| Media | Description |
| --- | --- |
| Board Development | Arduino Uno R3 |
| Software (Tools) | Arduino IDE |
| Arduino Library | Adafruit Motor Shield, Servo |
| Actuators | Servo Motor SG90 180°, Gear Motor / Motor DC |
| Sensor | Ultrasonic Sensor (HC-SR04) |
| Other Components | Jumper cable, USB cable type A/B, Li-ion battery (x2), Battery holder, Robot wheels (x4), Motor driver shield L293D |

<br><br>

## Download & Install Arduino IDE
   ```
   https://www.arduino.cc/en/software
   ```

<br><br>

## Project Requirements
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/168fadce-b7fe-482e-8f20-cc923b72a8aa" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/8106ab05-8aaf-46c7-bf56-a49b3eda044a" alt="Pictorial-Diagram"></td>
</tr>
</table>

<br><br>

## Get Started
1. Make sure you have the necessary electronic components.<br><br>
   
2. Make sure your components are designed according to the diagram.<br><br>
   
3. Open the ``` Arduino IDE ``` first, then open the Obstacle Avoidance Arduino Robot project by clicking: ``` File ``` -> ``` Open ``` -> ``` obstacle_avoidance_robot.ino ```.<br><br>
   
4. ``` Board Setup ``` in Arduino IDE<br><br>
   Method: click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Uno ```.
   <br><br>
   
5. ``` Install Library ``` in Arduino IDE<br><br>
   • Method: Download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.
   <br><br>

6. ``` Port Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```.
   <br><br>

7. Before uploading the program please click: ``` Verify ```.<br><br>

8. If there is no error in the program code, then please click: ``` Upload ```.<br><br>
   
9. Please enjoy [Done].

<br><br>

## Highlights
<table>
<tr>
<th width="840">Hardware View</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Obstacle-Avoidance-Arduino-Robot/assets/54527592/2b46645e-b216-4f0d-b232-9af827822ded" alt="IMG"></td>
</tr>
</table>

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright (c) 2023 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
