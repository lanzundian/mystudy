#include <stdio.h>
#include "ARMCM4.h"   
#include <stdint.h>
#include <string.h>



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



#define  use_strlen_and_sizeof_test		//strlen和sizeof函数测试



int main(void)
{
	

	
#ifdef	use_strlen_and_sizeof_test
	
	char  str1[] = { '1','0','0','\0','a','\0','0' };	//定义一个字符数组str1，不指定数组大小，初始化赋值为7个字符常量
	
	char  str2[6] = { '1','0','0','0','0','0' };		//定义一个字符数组str2，指定数组大小为6，初始化赋值为6个字符常量
	
	printf("%d, %d, %d, %d",strlen(str1), sizeof(str1), strlen(str2), sizeof(str2) );

	//解析： strlen计算返回的长度是遇到'\0'之前的元素个数，不包含'\0'；
	//		 sizeof计算的是该数组所占用的内存空间大小，会包含'\0'在内一起计算；
	//		因此打印结果应为3，7，？，6， 因为str2元素中没有'\0'，所以strlen(str2)的计算结果应该是不确定的，故此处用 ？代替。
	//		如果在内存中的str2地址在前且紧挨着str1，那么strlen（str2）计算的值应该是6 + str1中'\0'之前的前3个元素，也就是 9，
	//		如果在内存中地址不是紧挨着，那结果可能是6，也可能是其他的值。
#endif
	
	
	
	return 0;
	
	
}


