#pragma once

#include <string>
#include <cstdint>

// Define data structures for visualization elements
struct Map {
    // Define map data structure
    // For example: latitude, longitude, markers, etc.
};

struct Graph {
    // Define graph data structure
    // For example: x-axis, y-axis, data points, etc.
};

// Define the visualization elements interface
class VisualizationElements {
public:
    VisualizationElements();
    ~VisualizationElements();

    void setupVisualization(); // Initialize visualization elements

    void renderMap(const Map& mapData); // Render map on display
    void renderGraph(const Graph& graphData); // Render graph on display

private:
    // Private members and methods for visualization elements handling
};
