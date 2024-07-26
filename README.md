# Minimal RTOS for STM32 MCU

## Overview

This project demonstrates a minimal RTOS developed from scratch to run on STM32 microcontrollers. The RTOS offers basic services including:

- **Task Management**: Provides APIs to create and manage multiple tasks with different priorities.
- **Task Scheduling**: A scheduler that supports round-robin and priority-based scheduling

- **Synchronization**: Includes mechanisms to ensure mutual exclusion and synchronization between tasks using semaphores.
- **Timing Management**: Offers timing services for periodic task execution, task scheduling, delays, and timeouts.

This project was undertaken with the goal of learning **RTOS** concepts, mastering bare-metal C programming, and mastering Cortex-M and STM32 microcontrollers.


## Project Structure

The project includes an `examples` folder. Each example includes the following layers:

- **RTOS Layer**: Contains the RTOS source code (`examples/"example_project_name"/RTOS`).


- **CMSIS Headers**: Specific headers for the STM32 target (Cortex Microcontroller Software Interface Standard) provided by ARM, offering a standardized API for accessing the processor core and peripherals (`examples/"example_project_name"/CMSIS_headers_FX`).


- **BSP Layer**: Contains the peripherals' bare-metal drivers needed for the example application (`examples/"example_project_name"/BSP`).


- **Application Layer**:Contains the example application (`examples/"example_project_name"/App`).



### Setup

To set up the project, follow this instructions: 

1. Create a new folder on your local machine.
2. Clone this GitHub repo into this new folder.
3. In STM32CubeIDE open the examples folder included in the cloned repo as a workspace.
4. In the STM32CubeIDE empty Project Explorer, click on import projects.
5. In the Import window, select General > Existing Projects into Workspace.
6. Click on Browse in the "Select root directory" section and navigate to the desired example folder.
7. Select the folder and click "Select folder",the selected example will appear in the Project section.
8. Click Finish to complete the import.


#### Examples:
- `LED_Blinker`
Application for STM32F407VG disovery board to test the task managment services .It includes 4 tasks for toggling discovery board users LEDs with different delays and also managing periodic tasks.
   
- `SharedUart`
 Application for STM32F407VG disovery board to test the semaphore implementation of the developed RTOS. It includes 3 tasks that shares the same UART resource to sends a string message.A semaphore is used to manage UART access to ensure that messages are not corrupted due to simultaneous access.


