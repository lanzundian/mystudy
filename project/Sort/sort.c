#include  "sort.h"



/**
 *************************************
 * @brief  ѡ�����򷨣���������С����
 * @param  *data ��Ҫ������������飬lenΪ�������Ԫ�ظ���
 * @return	
 * @ps     
 *		    
********************************
**/
void  selectsort(uint8_t *data, uint8_t len)
{
	uint8_t i,j;
	uint8_t temp, pos;
	
	for( i = 0; i < len - 1; i++)
	{
		pos = i;
		
		for( j = i+1; j < len; j++)
		{
			if( data[j] < data[pos] )
			{
				pos = j;
			}
			
		}
		
		temp = data[i];
		data[i] = data[pos];
		data[pos] = temp;
		
	}

}
