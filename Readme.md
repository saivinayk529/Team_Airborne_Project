#                                              QNX RTOS Powered Custom Flight Controller

##  Team: QNX_Airborne

         > Saathvik Vardhan
         > Sai Vinay
         > Rahul


##  Problem Statement

# Project Title: Open Hardware Real-World System

Design and build a physical system that solves a real-world problem using **QNX RTOS on Raspberry Pi**, focusing on deterministic real-time performance, fault handling, and modular architecture.


##  Objective

To develop an **open hardware flight controller** that demonstrates:

* Deterministic real-time control
* Reliable multi-task scheduling
* Modular and scalable system design
* Fault-tolerant behavior for safety-critical applications


##  Solution Overview

We propose a **QNX RTOS-based custom flight controller** for drones that overcomes limitations of traditional systems by offering:

* Open architecture
* Real-time deterministic control
* Easy customization for research and development



##  Technologies Used

* QNX RTOS
* Raspberry Pi 4
* Embedded C
* Sensors (IMU, GPS)
* Communication Interfaces (SPI, I²C, UART, GPIO)


##  System Architecture

The system is divided into modular components:

* Sensor Manager
* Sensor Fusion Module
* Flight Control Algorithm
* Motor Control Module
* Communication Manager

Each module runs as **independent processes/threads** in QNX RTOS, ensuring:

* Fault isolation
* Real-time scheduling
* Efficient debugging


##  Workflow

1. Sensors collect real-time data (IMU, GPS, etc.)
2. Sensor Fusion processes and filters data
3. Control Algorithm computes flight corrections
4. Motor Module generates control signals for actuators


##  RTOS Concepts Used

* Deterministic control loops
* Priority-based scheduling (Control loop = highest priority)
* Inter-process communication (Message passing, Shared memory)
* Multi-threading and process management
* Resource management (SPI, UART, I²C access)
* Periodic timers for control loops


##  Task Scheduling

* **High Priority:** Control Loop, IMU Data Processing
* **Medium Priority:** Sensor Fusion, GPS Processing
* **Low Priority:** Logging, Diagnostics, UI


##  Inter-Task Communication

* Message Passing
* Shared Memory


##  Results (Simulation)

* Deterministic execution of control loop
* Stable simulated sensor data processing
* Motor output generation based on control logic
* Efficient communication between modules


##  Test Cases

* Sensor data simulation validation
* Control loop timing verification
* Thread priority behavior testing
* IPC communication testing


## Logging & Visualization

* System logs for debugging
* Status indicators for module activity


## Interfaces Used

* GPIO
* SPI
* I²C
* UART


## Project Structure

* `/src` → Source code
* `/docs` → Architecture diagrams
* `/presentation` → PPT
* `/results` → Output screenshots

## Future Work

* Real hardware implementation with sensors
* Advanced sensor fusion (Kalman Filter)
* Autonomous navigation system
* Fault detection and recovery system
