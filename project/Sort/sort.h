#ifndef  __SORT_H__
#define  __SORT_H__



#include  <stdint.h>



/**
 *************************************
 * @brief  ѡ�����򷨣���������С����
 * @param  *data ��Ҫ������������飬lenΪ�������Ԫ�ظ���
 * @return	
 * @ps     
 *		    
********************************
**/
void  selectsort(uint8_t *data, uint8_t len);



/**
 *************************************
 * @brief  ð�����򷨣���������С����
 * @param  *data ��Ҫ������������飬lenΪ�������Ԫ�ظ���
 * @return	
 * @ps     
 *		    
********************************
**/
void  bubblesort(uint8_t *data, uint8_t len);



/**
 *************************************
 * @brief  �������򷨣���������С����
 * @param  *data ��Ҫ������������飬lenΪ�������Ԫ�ظ���
 * @return	
 * @ps     
 *		    
********************************
**/
void  swapsort(uint8_t *data,uint8_t len);



#endif
