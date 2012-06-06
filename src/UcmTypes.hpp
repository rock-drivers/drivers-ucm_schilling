#ifndef UCM_SCHILLING_UCMTYPES_HPP
#define UCM_SCHILLING_UCMTYPES_HPP

#include <base/time.h>

namespace ucm_schilling {
    // namespace ctd_seabird

    struct UcmData {
        base::Time  time;
        uint  percentage; 
    };
    
}


#endif 
