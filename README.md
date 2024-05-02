# Carwash Management System

This is a simple carwash management system implemented in C++.

## Overview

The Carwash Management System allows users to register cars for washing and calculates the time required and payment based on the price. It keeps track of the cars washed and prevents washing if the daily limit is reached or if the price is insufficient.

## Features

- Register cars for washing.
- Calculate payment and time required based on the price.
- Prevent washing if the daily limit is reached or if the price is insufficient.

## Usage

To use the Carwash Management System, follow these steps:

1. Clone the repository:

    ```bash
    https://github.com/DaviDM2005/CarWashOOP.git
    ```

2. Compile the source code:

    ```bash
    g++ main.cpp -o carwash
    ```

3. Run the program:

    ```bash
    ./carwash
    ```

4. Follow the prompts to register cars for washing and view the results.

## Example

```cpp
#include <iostream>
#include "Carwash.h"

int main() {
    Carwash carwash;

  carwash.washCar("AB-123-BA", 21);
  carwash.washCar("AB-123-BA", 21);
  
  carwash.washCar("AC-123-CA", 21);
  
  
  carwash.washCar("DC-123-CA", -21);

    return 0;
}
```
## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
