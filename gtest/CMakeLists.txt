include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  places-distributor-test
  places-distributor-test.cpp
)
target_link_libraries(
  places-distributor-test
  GTest::gtest_main
  exam-simulation
)

include(GoogleTest)
gtest_discover_tests(places-distributor-test)
