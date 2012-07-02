#ifndef UCM_SCHILLING_UCMTYPES_HPP
#define UCM_SCHILLING_UCMTYPES_HPP

#include <base/time.h>

namespace ucm_schilling {
    // namespace ctd_seabird

    struct UcmData {
        base::Time  time;
        uint  percentage;
	UcmData()
	  : time(base::Time::now()), percentage(0)
	{}
    };
    
    struct UcmStatus {
	base::Time  time;
	uint8_t status;
	UcmStatus()
	  : time(base::Time::now()), status(0)
	{}
    };
    
}


#endif 
