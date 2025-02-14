# Parking Lot Management System

## Overview

The **Parking Lot Management System** is a C-based program that calculates parking fees based on various parameters, including the vehicle's country of registration, brand, weight, and parking duration. The system supports Ugandan and Kenyan vehicles with different pricing structures.

## Features

- Collects customer information, including name and plate number
- Calculates parking charges based on:
  - Vehicle's country of registration (Uganda or Kenya)
  - Vehicle brand
  - Weight of the vehicle
  - Parking duration (hours)
  - Time of the day (day/night rates)
- Uses `time.h` to register parking time

## Technologies Used

- **Programming Language**: C
- **Libraries**: `stdio.h`, `stdlib.h`, `string.h`, `time.h`

## Installation & Usage

### Prerequisites

- A C compiler (GCC, MinGW, or any compatible compiler)
- A terminal or command prompt

### How to Compile and Run

1. **Clone the Repository**
   ```sh
   git clone https://github.com/PROMISE256/Parking-lot-in-C.git
   cd Parking-lot-in-C
   ```
2. **Compile the program**
   ```sh
   gcc main.c -o parking_lot
   ```
3. **Run the program**
   ```sh
   ./parking_lot
   ```

## Code Structure

- **main.c**: Contains the program logic and function calls
- **Functions:**
  - `CUSTOMERINFO()`: Collects customer details
  - `STATUSOFPARKING()`: Prompts for parking duration
  - `PRICEOFPARKING()`: Determines parking charges
  - `UGANDANVEHICLE()`: Calculates pricing for Ugandan vehicles
  - `KENYANVEHICLE()`: Calculates pricing for Kenyan vehicles

## Example Usage

```
ENTER CUSTOMER'S NAME
John Doe

PARKING TIME IS Mon Feb 12 10:30:00 2025

ENTER PLATE NUMBER
UG1234XYZ

ENTER NUMBER PLATE COUNTRY INITIAL
UG

WHAT IS THE CAR BRAND?
NISSAN

WHAT TIME OF THE DAY WILL YOU PARK?
DAY

HOW MANY HOURS WILL THE CUSTOMER PARK FOR?
2

THE CUSTOMER SHOULD PAY UGX 5000
```

## Future Improvements

- Add support for more countries and vehicle types
- Implement a database for storing parking records
- Introduce a graphical user interface (GUI)

## License

This project is open-source 

## Author

**Promise Archangel**


