/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __uart_printf_H
#define __uart_printf_H
#ifdef __cplusplus
 extern "C" {
#endif

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNU_C__ */

#define hDEBUG huart1

#ifdef __cplusplus
}
#endif
#endif /*__uart_printf_H */