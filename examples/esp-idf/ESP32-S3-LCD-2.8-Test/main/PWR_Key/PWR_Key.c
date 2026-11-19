#include "PWR_Key.h"

void PWR_Loop(void)
{
  if(PWR_KEY_State == LONG_PRESS_START){   
    PWR_KEY_State = NONE_PRESS
;
    Shutdown(); 
  }
}

void Shutdown(void)
{
  gpio_set_level(PWR_Control_PIN, false);
  LCD_Backlight = 0;        
}
void configure_GPIO(int pin, gpio_mode_t Mode)
{
    gpio_reset_pin(pin);                                     
    gpio_set_direction(pin, Mode);                          
    
}
void PWR_Init(void) { 
  configure_GPIO(PWR_Control_PIN, GPIO_MODE_OUTPUT);
  gpio_set_level(PWR_Control_PIN, false);
  vTaskDelay(100);
  if(!gpio_get_level(PWR_KEY_Input_PIN)) {              
    gpio_set_level(PWR_Control_PIN, true);
  }
}
