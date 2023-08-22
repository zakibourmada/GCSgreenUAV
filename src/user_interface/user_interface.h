#pragma once

#include "user_interface_elements.h" // Include necessary user interface elements header

class UserInterfaceModule {
public:
    UserInterfaceModule();
    ~UserInterfaceModule();

    void initialize();
    UserInput readUserInput();

private:
    // Private members and methods for user interface handling
};
