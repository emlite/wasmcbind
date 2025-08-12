#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSUnitValue CSSUnitValue;
typedef struct CSSMathSum CSSMathSum;
typedef struct CSSNumericType CSSNumericType;


/**
 * @brief Interface CSSNumericValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericValue)
 */
DECLARE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);

/**
 * @brief Calls the `add` method. 
*/
CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `sub` method. 
*/
CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `mul` method. 
*/
CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `div` method. 
*/
CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `min` method. 
*/
CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `max` method. 
*/
CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , jb_Any * values);

/**
 * @brief Calls the `equals` method. 
*/
bool CSSNumericValue_equals(CSSNumericValue* self , jb_Any * value);

/**
 * @brief Calls the `to` method. 
*/
CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , jb_String * unit);

/**
 * @brief Calls the `toSum` method. 
*/
CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , jb_String * units);

/**
 * @brief Calls the `type` method. 
*/
CSSNumericType CSSNumericValue_type(CSSNumericValue* self );

/**
 * @brief Calls the `parse` method. 
*/
CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , jb_String * cssText);

#ifdef __cplusplus
}
#endif
