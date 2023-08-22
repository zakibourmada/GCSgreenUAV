#pragma once

#include <cstdint>

// Define data structure for telemetry data
struct TelemetryData {
    // Define telemetry data structure
    // For example: GPS coordinates, altitude, battery status, etc.
    double latitude;
    double longitude;
    double altitude;
    uint8_t batteryStatus;
};

// Define the telemetry data interface
class TelemetryDataProvider {
public:
    TelemetryDataProvider();
    ~TelemetryDataProvider();

    TelemetryData readTelemetry(); // Read telemetry data from source

private:
    // Private members and methods for telemetry data handling
};
