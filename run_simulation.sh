#!/bin/bash
# Ensure the script stops on errors
set -e

# Navigate to the build directory
cd build

# Run the simulation binary
./rcar_s4_simulation_executable

echo "Simulation completed"
