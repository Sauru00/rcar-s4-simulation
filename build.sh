#!/bin/bash
# Ensure the script stops on errors
set -e

# Update submodules
git submodule update --init --recursive

# Install dependencies
sudo apt-get update
sudo apt-get install -y build-essential cmake

# Build the simulation
mkdir -p build
cd build
cmake ..
make -j$(nproc)

echo "Build completed successfully"
