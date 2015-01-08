#include <LPC17xx.h>
#include "printf.h"
#include "stdefs.h"
#include "uart_polling.h"

void putc(void* p, char c) {
    uart_put_char(0, c);
}

int main() {
    SystemInit();
    uart0_init();
    uart0_put_string("------------\n\r");
    uart0_put_string("Hello World!\n\r");
	
	  init_printf(NULL, putc);
    printf("Hello from printf!\n\r");
    return 0;
}
