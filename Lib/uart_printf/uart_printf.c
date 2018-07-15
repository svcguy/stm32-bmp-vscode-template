#include <stdint.h>
#include <stdarg.h>
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

/**
 * @brief A basic printf wrapper that can be #defined away
 * @param Printf-like parameters
 */
int printDEBUG( const char *format, ... )
{
#ifdef DEBUG
  int res;
  va_list args;

  va_start( args, format );
  res = vprintf( format, args );
  va_end( args );

  return res;
#else
  return 0;
#endif /* DEBUG */
}