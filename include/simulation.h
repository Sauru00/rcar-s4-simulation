#pragma once

#include <iostream>
#include <vector>

// Function declarations
void initializeSimulation();
void runSimulation();
void finalizeSimulation();

// Example of a class declaration
class Simulation {
public:
    Simulation();
    ~Simulation();

    void initialize();
    void run();
    void finalize();

private:
    std::vector<int> data;
    void loadData();
};
