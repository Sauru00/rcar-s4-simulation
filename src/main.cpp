#include "simulation.h"

int main() {
    std::cout << "RCAR S4 Simulation started..." << std::endl;

    // Using functions
    initializeSimulation();
    runSimulation();
    finalizeSimulation();

    // Using the Simulation class
    Simulation sim;
    sim.initialize();
    sim.run();
    sim.finalize();

    std::cout << "RCAR S4 Simulation completed." << std::endl;
    return 0;
}
