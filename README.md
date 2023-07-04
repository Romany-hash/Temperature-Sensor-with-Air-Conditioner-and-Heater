# Temperature Sensor with Air Conditioner and Heater

## Description

The project is a temperature monitoring and control system using an ATmega32 microcontroller, an ADC module, an LCD display, an AC unit, and a heater.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description

The project utilizes an ATmega32 microcontroller to read temperature values from an analog temperature sensor using the built-in ADC module. The temperature values are then displayed on an LCD display. The system also controls an AC unit and a heater based on predefined temperature thresholds. When the temperature exceeds 30 degrees Celsius, the AC unit is activated to cool the environment. Similarly, when the temperature drops below 20 degrees Celsius, the heater is activated to warm the environment. The project includes drivers for the ADC module and the LCD display, as well as functions to control and manipulate digital I/O pins and ports for the AC unit and the heater.

## Features

- Reads temperature values from the analog temperature sensor using the ADC module
- Displays temperature readings on an LCD display
- Activates the AC unit when the temperature exceeds 30 degrees Celsius
- Activates the heater when the temperature drops below 20 degrees Celsius
- Supports both 4-bit and 8-bit modes of operation for the LCD display
- Provides functions to control and manipulate digital I/O pins and ports for the AC unit and the heater

## Installation

1. Clone the repository: `git clone [repository URL]`
2. Connect the ATmega32 microcontroller to the necessary hardware components (ADC module, LCD display, AC unit, and heater).
3. Configure the necessary settings in the project files (e.g., pin configurations, ADC reference voltage, AC and heater control pins).
4. Build the project using the appropriate toolchain (e.g., AVR-GCC).
5. Upload the compiled binary to the ATmega32 microcontroller using a suitable programmer (e.g., AVRISP, USBasp).

## Usage

1. Power on the system with the ATmega32 microcontroller connected to the ADC module, LCD display, AC unit, and heater.
2. The temperature readings will be displayed on the LCD screen.
3. If the temperature exceeds 30 degrees Celsius, the AC unit will be activated to cool the environment.
4. If the temperature drops below 20 degrees Celsius, the heater will be activated to warm the environment.
5. Monitor the temperature values displayed on the LCD screen and observe the AC and heater operations.

## Contributing

Contributions to the project are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix: `git checkout -b feature/your-feature` or `git checkout -b bugfix/your-bugfix`.
3. Make your changes and commit them: `git commit -m "Your detailed description of the changes"`.
4. Push to your branch: `git push origin feature/your-feature` or `git push origin bugfix/your-bugfix`.
5. Submit a pull request explaining your changes and their benefits.


