#include <stdio.h>
#include "ARMCM4.h"   
#include <stdint.h>
#include <string.h>
#include  "sort.h"



struct __FILE { int handle; /* Add whatever needed */ };
FILE __stdout;
FILE __stdin;
 
int fputc(int ch, FILE *f) 
{
    return ITM_SendChar(ch);
}

volatile int32_t ITM_RxBuffer = ITM_RXBUFFER_EMPTY;
int fgetc(FILE *f) 
{
    while(ITM_CheckChar() != 1)
	      __NOP();
    return (ITM_ReceiveChar());
}
int ferror(FILE *f) 
{
  /* Your implementation of ferror */
  return EOF;
}

void _ttywrch(int ch) 
{
	fputc(ch, &__stdout);
}

//int __backspace()
//{
//	return 0;
//}
void _sys_exit(int return_code) 
{
  while (1);    /* endless loop */
}
	


//#define  use_strlen_and_sizeof_test		//strlen∫Õsizeof∫Ø ˝≤‚ ‘
#define  use_select_sort_test				//—°‘Ò≈≈–Ú∑®≤‚ ‘


int main(void)
{
	

#ifdef	use_strlen_and_sizeof_test
	
	char  str1[] = { '1','0','0','\0','a','\0','0' };
	
	char  str2[6] = { '1','0','0','0','0','0' };
	
	printf("%d, %d, %d, %d ",strlen(str1), sizeof(str1), strlen(str2), sizeof(str2) );

#endif
	
	
	
#ifdef  use_select_sort_test
	
	uint8_t  a[10] = {2,8,3,6,7,9,4,1,10,5};
	
	selectsort(a, sizeof(a) / sizeof(a[0]) );
	
	for(uint8_t i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	
#endif
	
	
	
	return 0;
	
	
}


