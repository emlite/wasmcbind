#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FragmentResultOptions FragmentResultOptions;


/**
 * @brief Interface FragmentResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FragmentResult)
 */
DECLARE_EMLITE_TYPE(FragmentResult, em_Val);

/**
 * @brief Creates a new `FragmentResult` object. 
*/
FragmentResult FragmentResult_new0();

/**
 * @brief Creates a new `FragmentResult` object. 
*/
FragmentResult FragmentResult_new1(FragmentResultOptions * options);

/**
 * @brief Gets the `inlineSize` property. 
*/
double FragmentResult_inlineSize(const FragmentResult *self);

/**
 * @brief Gets the `blockSize` property. 
*/
double FragmentResult_blockSize(const FragmentResult *self);

#ifdef __cplusplus
}
#endif
