#ifndef UCM_SCHILLING_UCMRAW_HPP
#define UCM_SCHILLING_UCMRAW_HPP


namespace ucm_schilling {
  namespace raw {
    
#define ADDR_UCM 0x60

    enum UCM_REGISTER {
      UCM_STATUS          = 0x00,
      UCM_AD1_HIGH        = 0x01,
      UCM_AD1_LOW         = 0x02,
      UCM_AD2_HIGH        = 0x03,
      UCM_AD2_LOW         = 0x04,
      UCM_GPIO_READ       = 0x05,
      UCM_GPIO_WRITE      = 0x06,
      UCM_GPIO_DIR        = 0x07,
      UCM_HE_CONFIG       = 0x08,
      UCM_HE_CNT_HIGH     = 0x09,
      UCM_HE_CNT_MID      = 0x0A,
      UCM_HE_CNT_LOW      = 0x0B,
      UCM_HE_SPEED_HIGH   = 0x0C,
      UCM_HE_SPEED_LOW    = 0x0D,
      UCM_HE_DA1_HIGH     = 0x0E,
      UCM_HE_DA1_LOW      = 0x0F,
      UCM_HE_DA2_HIGH     = 0x10,
      UCM_HE_DA2_LOW      = 0x11,
      UCM_HE_DA3_HIGH     = 0x12,
      UCM_HE_DA3_LOW      = 0x13,
      UCM_FIRM_VER        = 0x14
    };    
  }
}
  




#endif
