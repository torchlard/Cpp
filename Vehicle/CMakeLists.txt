cmake_minimum_required(VERSION 2.6)
project(Vehicle)

include_directories(
  .
)

add_executable(main main.cpp Vehicle.cpp Bus.cpp Car.cpp Person.cpp)