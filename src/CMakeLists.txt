# Create executable target
add_executable(exam-simulation
    main.cpp
    places-distributor.cpp
)

# Include header files directory
target_include_directories(exam-simulation PRIVATE ../include)