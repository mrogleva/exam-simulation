#include <gtest/gtest.h>
#include "../include/places-distributor.h"

// Test for PlacesDistributor constructor with valid parameters
TEST(PlacesDistributorTest, ConstructorValidParameters) {
  unsigned brokenSeats[] = {2, 5, 8};
    
  EXPECT_NO_THROW(PlacesDistributor distributor(5, 6, 3, brokenSeats));
  EXPECT_NO_THROW(PlacesDistributor distributor(1, 1));
  EXPECT_NO_THROW(PlacesDistributor distributor(10, 5, 0, nullptr));
}

TEST(PlacesDistributorTest, ConstructorInvalidParameters) {
  unsigned brokenSeats[] = {2, 5, 8};

  // Invalid room dimension N
  EXPECT_THROW(PlacesDistributor distributor(0, 6), std::invalid_argument);
  // Invalid room dimension M
  EXPECT_THROW(PlacesDistributor distributor(5, 0), std::invalid_argument);
  // Too many seats
  EXPECT_THROW(PlacesDistributor distributor(5, 11), std::invalid_argument);
  // More broken seats than total seats
  EXPECT_THROW(PlacesDistributor distributor(2, 3, 7, brokenSeats), std::invalid_argument);
  // Null broken seats indices with non-zero number of broken seats
  EXPECT_THROW(PlacesDistributor distributor(5, 6, 3, nullptr), std::invalid_argument);
}

// "OFOFOFO
// FFBFFFF
// OFOFOBO
// FFFFFFF
// OBOFOFO
// FFFFFFF"