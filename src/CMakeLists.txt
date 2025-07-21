# Add library
add_library(exam-simulation
    places-distributor.cpp
)
target_include_directories(exam-simulation PRIVATE ../include)

# Create executable target
add_executable(exam-simulation-main
    main.cpp
)
target_link_libraries(exam-simulation-main exam-simulation)