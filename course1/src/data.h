/**
 * @file data.h
 * @brief embedded course 1 final assesment source code
 *
 *  
 * See data.h for function documentation
 *
 * @author Joel Louis
 * @date 2019-06-21
 *
 */


#ifndef __DATA_H__
#define __DATA_H__
#include <stdint.h>
#include "platform.h"
#include "memory.h"


/**
 * convert data from a standard integer type into an ASCII string.
 * @param data
 * @param ptr
 * @param base
 * @return 
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);
/**
 * convert data back from an ASCII represented string into an integer type.
 * @param ptr
 * @param digits
 * @param base
 * @return 
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __DATA_H__ */