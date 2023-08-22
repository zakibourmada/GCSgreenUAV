#pragma once

#include <string>
#include <cstdint>

// Define data structures for user interface elements
struct UserInput {
    // Define user input data structure
    // For example: throttle, pitch, roll, yaw, etc.
    int throttle;
    int pitch;
    int roll;
    int yaw;
};

// Define the user interface elements interface
class UserInterfaceElements {
public:
    UserInterfaceElements();
    ~UserInterfaceElements();

    void setupUI(); // Initialize user interface elements

    UserInput readInput(); // Read user input from UI elements

private:
    // Private members and methods for UI elements handling
};
