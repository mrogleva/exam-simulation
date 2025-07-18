#include "../include/places-distributor.h"
#include <iostream>

int main() {
    unsigned N = 5; // Number of rows
    unsigned M = 10; // Number of columns
    unsigned B = 2; // Number of broken seats
    unsigned b_i[] = {3, 7}; // Indices of broken seats
    try {
        PlacesDistributor distributor(N, M, B, b_i);
        distributor.printRoomLayout();
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}