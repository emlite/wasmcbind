#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ValidityState
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState)
 */
DECLARE_EMLITE_TYPE(ValidityState, em_Val);

/**
 * @brief Gets the `valueMissing` property. 
*/
bool ValidityState_valueMissing(const ValidityState *self);

/**
 * @brief Gets the `typeMismatch` property. 
*/
bool ValidityState_typeMismatch(const ValidityState *self);

/**
 * @brief Gets the `patternMismatch` property. 
*/
bool ValidityState_patternMismatch(const ValidityState *self);

/**
 * @brief Gets the `tooLong` property. 
*/
bool ValidityState_tooLong(const ValidityState *self);

/**
 * @brief Gets the `tooShort` property. 
*/
bool ValidityState_tooShort(const ValidityState *self);

/**
 * @brief Gets the `rangeUnderflow` property. 
*/
bool ValidityState_rangeUnderflow(const ValidityState *self);

/**
 * @brief Gets the `rangeOverflow` property. 
*/
bool ValidityState_rangeOverflow(const ValidityState *self);

/**
 * @brief Gets the `stepMismatch` property. 
*/
bool ValidityState_stepMismatch(const ValidityState *self);

/**
 * @brief Gets the `badInput` property. 
*/
bool ValidityState_badInput(const ValidityState *self);

/**
 * @brief Gets the `customError` property. 
*/
bool ValidityState_customError(const ValidityState *self);

/**
 * @brief Gets the `valid` property. 
*/
bool ValidityState_valid(const ValidityState *self);

#ifdef __cplusplus
}
#endif
