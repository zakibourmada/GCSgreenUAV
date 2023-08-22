#pragma once

#include "communication_protocol.h" // Include necessary communication protocol header

class CommunicationModule {
public:
    CommunicationModule();
    ~CommunicationModule();

    void initialize();
    void sendCommand(const UserInput& userInput);
    TelemetryData receiveTelemetry();

private:
    // Private members and methods for communication handling
};
