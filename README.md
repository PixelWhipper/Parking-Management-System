# SpotTracker: Parking Management System

## Project Description

SpotTracker is a lightweight desktop application designed to provide a simple, manual tracking solution for parking spot availability in small-scale environments such as residential properties, small businesses, or schools. It allows owners to quickly update the number of available and occupied parking spaces with minimal interaction.

## Technologies Used

* **Qt:** A cross-platform application development framework.
* **C++:** The primary programming language used for development.

## Features

* **Real-time Spot Counter:** Displays the current number of available and occupied parking spots on a dedicated Home screen.
* **Intuitive Controls:** Provides simple button interfaces ("Parked a car", "Car left") to increment and decrement spot counts.
* **Optional Parking Log:** Includes an optional screen to log parking events, recording entry and exit times, and optionally a vehicle identifier.

## Workflow

The application follows a straightforward manual tracking process:

1.  **Initial Setup:** The owner configures the total number of parking spots available.
2.  **Tracking Arrivals:** Upon a vehicle entering, the owner taps the "Parked a car" button on the Home screen.
3.  **Tracking Departures:** Upon a vehicle exiting, the owner taps the "Car left" button.

The system updates the spot counts instantly based on these inputs.
