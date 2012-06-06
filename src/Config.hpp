#ifndef _UCM_SCHILLING_CONFIG_HPP_
#define _UCM_SCHILLING_CONFIG_HPP_

namespace ucm_schilling
{

struct Config
{
        int count0;
	int count50;
	int count100;

        Config()
            : count0(0),
            count50(50),
            count100(100)
        {   
        }   

};

}
#endif