#include  "sort.h"



/**
 *************************************
 * @brief  选择排序法（排序结果从小到大）
 * @param  *data 是要进行排序的数组，len为该数组的元素个数
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
