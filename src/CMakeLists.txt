rock_library(ucm_schilling
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(ucm_schilling_bin Main.cpp
    DEPS ucm_schilling)

