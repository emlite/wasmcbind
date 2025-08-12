#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IDBKeyRange
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBKeyRange)
 */
DECLARE_EMLITE_TYPE(IDBKeyRange, em_Val);

/**
 * @brief Gets the `lower` property. 
*/
jb_Any IDBKeyRange_lower(const IDBKeyRange *self);

/**
 * @brief Gets the `upper` property. 
*/
jb_Any IDBKeyRange_upper(const IDBKeyRange *self);

/**
 * @brief Gets the `lowerOpen` property. 
*/
bool IDBKeyRange_lowerOpen(const IDBKeyRange *self);

/**
 * @brief Gets the `upperOpen` property. 
*/
bool IDBKeyRange_upperOpen(const IDBKeyRange *self);

/**
 * @brief Calls the `only` method. 
*/
IDBKeyRange IDBKeyRange_only(IDBKeyRange* self , jb_Any * value);

/**
 * @brief Calls the `lowerBound` method. 
*/
IDBKeyRange IDBKeyRange_lowerBound0(IDBKeyRange* self , jb_Any * lower);

/**
 * @brief Calls the `lowerBound` method. 
*/
IDBKeyRange IDBKeyRange_lowerBound1(IDBKeyRange* self , jb_Any * lower, bool open);

/**
 * @brief Calls the `upperBound` method. 
*/
IDBKeyRange IDBKeyRange_upperBound0(IDBKeyRange* self , jb_Any * upper);

/**
 * @brief Calls the `upperBound` method. 
*/
IDBKeyRange IDBKeyRange_upperBound1(IDBKeyRange* self , jb_Any * upper, bool open);

/**
 * @brief Calls the `bound` method. 
*/
IDBKeyRange IDBKeyRange_bound0(IDBKeyRange* self , jb_Any * lower, jb_Any * upper);

/**
 * @brief Calls the `bound` method. 
*/
IDBKeyRange IDBKeyRange_bound1(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen);

/**
 * @brief Calls the `bound` method. 
*/
IDBKeyRange IDBKeyRange_bound2(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen, bool upperOpen);

/**
 * @brief Calls the `includes` method. 
*/
bool IDBKeyRange_includes(IDBKeyRange* self , jb_Any * key);

#ifdef __cplusplus
}
#endif
