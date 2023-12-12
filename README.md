# IOT-Project

# CONTROLLED BOT FOR TEMP & HUMIDITY MEASUREMENT

## Abstract

The growth of technologies in the field of surveillance has been exponential ever since the development of the microprocessor. In contrast to the earlier days, when most search operations were conducted manually by trained professionals and wide-area surveillance was only possible with the help of manned aircraft, the developments in the fields of robotics and the Internet of Things (IoT) have made today’s surveillance systems almost entirely independent of human intervention. In this project, an innovative new robot employing IoT concepts is presented.

## Introduction

The use of robots to reach places inaccessible to humans has been in practice for quite some time. The best use-cases are the famous Mars exploration robots like Sojourner, Spirit, Opportunity, Curiosity, and Perseverance. Recent developments in the field of IoT have opened up many use-case scenarios for robot deployment in surveillance operations.

### Examples of Related Work:
- Kanwar et al. [1] proposed an IoT-based firefighting robot.
- Narvekar et al. [2] designed a Quadcopter robot for search and rescue operations.
- Kolambe et al. [3] developed an Android-based firefighting robot with thermal sensors.
- Raju et al. [4] designed an adaptable robotic frame with a wide array of sensors.
- Akhund et al. [5] proposed a robot for line following and obstacle avoidance in a restaurant setting.

## Scope and Objectives

1. To make an overall robotic design framework adaptable to different scenarios.
2. To expand the range of communication by integrating IoT.
3. To create a strong and robust frame to access disaster-prone and hazardous areas.
4. To provide versatility by allowing the addition of multiple sensors.
5. To allow for both secure operations by intranet and ease of control by common users through a mobile app.

## Proposed Model

### Components Used:
1. Motors: 2 DC Motors with 200 RPM.
2. Motor Driver: L293D, a dual H-bridge motor driver.
3. Battery: 2S Li-Ion Battery with a nominal voltage of 7.4 V.
4. NodeMCU: ESP8266-based microcontroller with an inbuilt WiFi module.
5. MQ-2: Gas and smoke sensor for detecting harmful gases.
6. DHT11: Sensor for measuring temperature and humidity.

## Working Methodology and Functionalities

### 1. Chassis and Mechanical Design
- For the mechanical framework of the robot, mount all equipment on a plastic chassis for demonstration purposes.
- Balance weight distribution to achieve a low center of gravity for stability.
- For actual implementation, consider replacing the plastic body with a steel body to withstand high-temperature and high-pressure environments.

### 2. Installation of Microcontroller
- Mount the NodeMCU microcontroller on the chassis.
- Connect the power supply, including batteries.
- Connect peripherals, including the motor driver and sensors.

### 3. Design of User Interface
- Use MIT App Inventor to create an app for controlling the robot's speed and orientation.
- Utilize the Arduino Cloud platform as a web-based platform to access sensor-fed data.
