/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   GPIO_Driver
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/


#include "GPIO.h"    
/* Private define ------------------------------------------------------------*/
   
int main()
{
 // GPIO_Clock_Enable( (uint32_t*) 0x40020401);
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config (GPIOD, PIN12, OUTPUT, OUTPUT_PUSH_PULL);
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
