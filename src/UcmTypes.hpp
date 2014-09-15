#ifndef UCM_SCHILLING_UCMTYPES_HPP
#define UCM_SCHILLING_UCMTYPES_HPP

#include <base/time.h>
#include <vector>

namespace ucm_schilling {

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

	struct UcmInitData{
        base::Time  time;
        int	bufferTimeMin;	//time of buffer in Minutes
        int bufferFrequency;
        std::vector<UcmData> data;
        UcmInitData()
        : time(base::Time::now()),bufferTimeMin(0),bufferFrequency(0),data(0)
        {}
        UcmInitData(int iBufferTimeSec, int iBufferFrequency,std::vector<UcmData> iData)
        : time(base::Time::now()),bufferTimeMin(iBufferTimeSec),bufferFrequency(iBufferFrequency),data(iData)
        {}
	};
}

#endif 
