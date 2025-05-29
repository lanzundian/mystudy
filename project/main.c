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



#define  use_strlen_and_sizeof_test		//strlen��sizeof��������



int main(void)
{
	

	
#ifdef	use_strlen_and_sizeof_test
	
	char  str1[] = { '1','0','0','\0','a','\0','0' };	//����һ���ַ�����str1����ָ�������С����ʼ����ֵΪ7���ַ�����
	
	char  str2[6] = { '1','0','0','0','0','0' };		//����һ���ַ�����str2��ָ�������СΪ6����ʼ����ֵΪ6���ַ�����
	
	printf("%d, %d, %d, %d",strlen(str1), sizeof(str1), strlen(str2), sizeof(str2) );

	//������ strlen���㷵�صĳ���������'\0'֮ǰ��Ԫ�ظ�����������'\0'��
	//		 sizeof������Ǹ�������ռ�õ��ڴ�ռ��С�������'\0'����һ����㣻
	//		��˴�ӡ���ӦΪ3��7������6�� ��Ϊstr2Ԫ����û��'\0'������strlen(str2)�ļ�����Ӧ���ǲ�ȷ���ģ��ʴ˴��� �����档
	//		������ڴ��е�str2��ַ��ǰ�ҽ�����str1����ôstrlen��str2�������ֵӦ����6 + str1��'\0'֮ǰ��ǰ3��Ԫ�أ�Ҳ���� 9��
	//		������ڴ��е�ַ���ǽ����ţ��ǽ��������6��Ҳ������������ֵ��
#endif
	
	
	
	return 0;
	
	
}


