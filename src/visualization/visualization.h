#pragma once

#include "visualization_elements.h" // Include necessary visualization elements header
#include "telemetry_data.h"         // Include header for telemetry data structure

class VisualizationModule {
public:
    VisualizationModule();
    ~VisualizationModule();

    void initialize();
    void updateTelemetry(const TelemetryData& telemetryData);

private:
    // Private members and methods for visualization handling
};
