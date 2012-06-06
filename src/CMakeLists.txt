rock_library(ucm_schilling
    SOURCES Driver.cpp 
    HEADERS Driver.hpp UcmTypes.hpp UcmRaw.hpp Config.hpp
    DEPS_PKGCONFIG base-types base_schilling)

rock_executable(ucm_schilling_bin Main.cpp
    DEPS ucm_schilling)

