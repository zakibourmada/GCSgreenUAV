#pragma once

#include <cstdint>
#include <vector>

// Define data structures for communication protocol
struct UserInput {
    // Define user input data structure
    // For example: throttle, pitch, roll, yaw, etc.
};

struct TelemetryData {
    // Define telemetry data structure
    // For example: GPS coordinates, altitude, battery status, etc.
};

// Define the communication protocol interface
class CommunicationProtocol {
public:
    CommunicationProtocol();
    ~CommunicationProtocol();

    bool openConnection(const std::string& port);
    bool closeConnection();

    bool send(const UserInput& userInput);
    bool receive(TelemetryData& telemetryData);

private:
    // Private members and methods for communication protocol handling
};
