# 🌱 IoT-Based Smart Agriculture Monitoring System

## 📌 Overview
This project implements an IoT-based smart agriculture monitoring system using embedded systems and sensor simulation. The system monitors critical environmental parameters such as soil moisture, temperature, and humidity in real-time and supports decision-making for efficient irrigation and farming practices.

The design follows a modular embedded architecture, separating sensor acquisition and control logic to improve scalability and maintainability.

---

## 🚀 Features
- Real-time monitoring of environmental conditions
- Soil moisture, temperature, and humidity detection
- Sensor data simulation using modular architecture
- Automated irrigation control based on threshold values
- Structured and scalable system design

---

## 🛠️ Technologies Used
- C++ (Embedded-style programming)
- Modular System Design
- Sensor Data Simulation
- Basic Control Algorithms

---

## ⚙️ System Architecture

The system is designed in a modular architecture:

- **Sensor Module**
  - Handles environmental data acquisition (simulated)
  - Provides sensor readings (moisture, temperature, humidity)

- **Controller Module**
  - Processes incoming sensor data
  - Applies decision logic (e.g., irrigation ON/OFF)

- **Main Application**
  - Integrates all modules
  - Executes system flow and displays output

---

## 🔄 How It Works

1. Sensors generate environmental data (simulated values)
2. Data is passed to the controller module
3. Controller compares values with predefined thresholds
4. System triggers actions (e.g., irrigation control)
5. Output is displayed for monitoring and validation

---

## 📚 What I Learned
- Embedded system design principles
- Modular programming and code organization
- Sensor data acquisition and simulation
- Control logic implementation
- System-level thinking in IoT applications




## 📁 Project Structure

smart-agriculture-monitoring-system/
│
├── main.cpp           # Main application entry point
├── sensors.h          # Sensor interface definitions
├── sensors.cpp        # Sensor data simulation module
├── controller.h       # Control logic interface
├── controller.cpp     # Data processing and decision logic

## ▶️ How to Run

### Compile:
g++ main.cpp sensors.cpp controller.cpp -o agri_system

### Run:
./agri_system

## 📊 Example Output

Smart Agriculture Monitoring System

Soil Moisture: 35%
Temperature: 28 C
Humidity: 60%

[ACTION] Irrigation ON
----------------------------

## 🧠 Design Highlights

- Modular architecture separating sensing and control logic
- Simulation-based design for testing without physical hardware
- Scalable structure for future integration with real IoT devices
- Threshold-based decision system for automated control
