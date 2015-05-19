#include <config.h>
//#if define(CONFIG_UART0)
void uart_init(void)
{
    int i = 0;
    for (i = 0; i < 100; i++);

    return;
}
#if defined(CONFIG_GET_CHAR)
void uart_get_char()
{
    int ch;
    ch = 'r';
}
#endif
//#endif
