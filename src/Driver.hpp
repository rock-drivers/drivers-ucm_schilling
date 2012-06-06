#ifndef _UCM_SCHILLING_DRIVER_HPP_
#define _UCM_SCHILLING_DRIVER_HPP_

#include <base_schilling/Driver.hpp>
#include "UcmTypes.hpp"
#include "Config.hpp"

namespace ucm_schilling
{
    class Driver : public base_schilling::Driver
    {
    public:
        Driver(const Config& config = Config());
		
        /** Tries to access the Ucm at the provided URI
         *
         */
        
        /** sends Register Read command
         */
        void collectData();

        ucm_schilling::UcmData getData() const;

        void dumpData() const;
	

    protected:
       
    private:
        ucm_schilling::UcmData mData;
	Config mConfig;
    };

} // end namespace 

#endif 
