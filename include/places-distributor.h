#pragma once
#include <vector>

/// @brief Class for distributing places in a room.
/// It manages the distribution of usable places in a room, taking into account broken seats.
class PlacesDistributor
{
public:
    PlacesDistributor(unsigned roomDimensionN, unsigned roomDimensionM, unsigned numberOfBrokenSeats = 0, const unsigned * const brokenSeatsIndices = nullptr);
    PlacesDistributor(const PlacesDistributor &other) = delete;
    PlacesDistributor(PlacesDistributor &&other) = delete;
    PlacesDistributor &operator=(const PlacesDistributor &other) = delete;
    PlacesDistributor &operator=(PlacesDistributor &&other) = delete;
    ~PlacesDistributor() = default;

    // const std::vector<unsigned> getPlacement() const;
    void printRoomLayout() const;

private:
    unsigned roomDimensionN;                          ///< Number of rows in the room.
    unsigned roomDimensionM;                          ///< Number of columns in the room.
    unsigned numberOfBrokenSeats;                     ///< Number of broken seats in the room.
    std::vector<unsigned> brokenSeatsIndices;         ///< Indices of broken seats in the room.
    std::vector<std::vector<char>> roomPlacement;     ///< Vector representing the layout of the room, where each index corresponds to a seat.

    void calculatePlacement();
};