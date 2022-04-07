#ifndef _GETTER_SETTER_H_
#define _GETTER_SETTER_H_

//---------------------------------------------------------
//			Includes
//---------------------------------------------------------

#include <stdint.h>

//---------------------------------------------------------
//			Definitions
//---------------------------------------------------------

typedef enum
{
    OK,
    ERR,
    ERR2
} tErr;
/** Error types returned by fuctions
*/

/** \defgroup getter_setter
 * @{
 * @file getter_setter.h
 * @brief Contains getters and setters
 */

//-----------------------
//  Functions
//-----------------------

/**
 * @brief Set value
 * @param[in] val: Value to set
 * @return value in:
 * 		- OK
 * 		- ERR: something went wrong
 */
tErr set_value(
    uint32_t val
);

/**
 * @brief Get value
 * @param[out] val: Value to set
 * @return value in:
 * 		- OK
 * 		- ERR: something went wrong
 */
tErr get_value(
    uint32_t* val
);

#endif //_GETTER_SETTER_H_
