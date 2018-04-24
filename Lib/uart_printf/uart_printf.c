#include <stdint.h>
#include "uart_printf.h"

/**
 * @brief Printf redirect to UART
 * @param None
 * @retval None
 */
PUTCHAR_PROTOTYPE
{
  HAL_UART_Transmit(&hDEBUG, (uint8_t *)&ch, 1, 0xFFFF);
  return ch;
}