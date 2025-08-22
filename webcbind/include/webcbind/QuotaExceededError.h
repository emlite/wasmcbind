#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QuotaExceededErrorOptions QuotaExceededErrorOptions;


/**
 * @brief Interface QuotaExceededError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError)
 */
DECLARE_EMLITE_TYPE(QuotaExceededError, DOMException);

/**
 * @brief Creates a new `QuotaExceededError` object. 
*/
QuotaExceededError QuotaExceededError_new0();

/**
 * @brief Creates a new `QuotaExceededError` object. 
*/
QuotaExceededError QuotaExceededError_new1(jb_String * message);

/**
 * @brief Creates a new `QuotaExceededError` object. 
*/
QuotaExceededError QuotaExceededError_new2(jb_String * message, QuotaExceededErrorOptions * options);

/**
 * @brief Gets the `quota` property. 
*/
double QuotaExceededError_quota(const QuotaExceededError *self);

/**
 * @brief Gets the `requested` property. 
*/
double QuotaExceededError_requested(const QuotaExceededError *self);

#ifdef __cplusplus
}
#endif
