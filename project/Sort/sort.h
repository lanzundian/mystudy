#ifndef  __SORT_H__
#define  __SORT_H__



#include  <stdint.h>



/**
 *************************************
 * @brief  选择排序法（排序结果从小到大）
 * @param  *data 是要进行排序的数组，len为该数组的元素个数
 * @return	
 * @ps     
 *		    
********************************
**/
void  selectsort(uint8_t *data, uint8_t len);



/**
 *************************************
 * @brief  冒泡排序法（排序结果从小到大）
 * @param  *data 是要进行排序的数组，len为该数组的元素个数
 * @return	
 * @ps     
 *		    
********************************
**/
void  bubblesort(uint8_t *data, uint8_t len);



/**
 *************************************
 * @brief  交换排序法（排序结果从小到大）
 * @param  *data 是要进行排序的数组，len为该数组的元素个数
 * @return	
 * @ps     
 *		    
********************************
**/
void  swapsort(uint8_t *data,uint8_t len);



#endif
