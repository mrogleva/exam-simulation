#include "../include/places-distributor.h"
#include <iostream>

PlacesDistributor::PlacesDistributor(unsigned roomDimensionN, unsigned roomDimensionM, unsigned numberOfBrokenSeats, const unsigned * const brokenSeatsIndices) 
    : roomDimensionN(roomDimensionN), roomDimensionM(roomDimensionM), numberOfBrokenSeats(numberOfBrokenSeats)
{
    unsigned totalSeats = roomDimensionN * roomDimensionM;
    if (totalSeats == 0 || totalSeats > 50) {
        throw std::invalid_argument("Invalid room dimensions. N * M must be between 1 and 50.");
    }
    if (numberOfBrokenSeats > totalSeats) {
        throw std::invalid_argument("Number of broken seats cannot exceed total number of seats.");
    }
    if (brokenSeatsIndices == nullptr && numberOfBrokenSeats > 0) {
        throw std::invalid_argument("Please, provide the indices of the broken seats.");
    }
    for (unsigned i = 0; i < numberOfBrokenSeats; ++i) {
        if (brokenSeatsIndices[i] >= totalSeats) {
            throw std::out_of_range("Broken seat index out of range.");
        }
    }
    if (brokenSeatsIndices != nullptr)
    {
        this->brokenSeatsIndices.assign(brokenSeatsIndices, brokenSeatsIndices + numberOfBrokenSeats);
    }
}

void PlacesDistributor::printRoomLayout() const
{
    std::cout << "PlacesDistributor::printRoomLayout()" << std::endl;
}

void PlacesDistributor::calculatePlacement()
{

}
