cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Famicom VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the required packages
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Add the source files
set(SOURCES
        olc6502.cpp
        Bus.cpp
        olcNes_Video1_6502.cpp
        olc2C02.cpp
        Cartridge.h
        Cartridge.cpp
        Mapper.h
        Mapper.h
        Mapper.cpp
        Mapper_000.h
        Mapper_000.cpp
        Mapper_001.cpp
        Mapper_002.cpp
        Mapper_003.cpp
        Mapper_004.cpp
        Mapper_066.cpp
        olc2A03.cpp
        olcPGEX_Sound.h
)

# Create the executable target
add_executable(Famicom ${SOURCES})

# Link libraries and frameworks
target_link_libraries(Famicom
        ${OPENGL_LIBRARIES}
        ${GLUT_LIBRARIES}
        "-framework Carbon"
        "-framework OpenGL"
        "-framework GLUT"
        "/usr/local/lib/libpng.dylib"  # Ensure this path points to the correct libpng library
)

# Include directories
target_include_directories(Famicom PRIVATE
        ${OPENGL_INCLUDE_DIR}
        ${GLUT_INCLUDE_DIR}
        "/usr/local/Cellar/libpng/1.6.44/include"  # Path to the libpng include directory # Update this path if necessary
)

# Specify the path to the libraries
link_directories("/usr/local/lib")