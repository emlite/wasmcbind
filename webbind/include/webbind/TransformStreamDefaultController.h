#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TransformStreamDefaultController
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TransformStreamDefaultController)
 */
DECLARE_EMLITE_TYPE(TransformStreamDefaultController, em_Val);

/**
 * @brief Gets the `desiredSize` property. 
*/
double TransformStreamDefaultController_desiredSize(const TransformStreamDefaultController *self);

/**
 * @brief Calls the `enqueue` method. 
*/
jb_Undefined TransformStreamDefaultController_enqueue0(TransformStreamDefaultController* self );

/**
 * @brief Calls the `enqueue` method. 
*/
jb_Undefined TransformStreamDefaultController_enqueue1(TransformStreamDefaultController* self , jb_Any * chunk);

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined TransformStreamDefaultController_error0(TransformStreamDefaultController* self );

/**
 * @brief Calls the `error` method. 
*/
jb_Undefined TransformStreamDefaultController_error1(TransformStreamDefaultController* self , jb_Any * reason);

/**
 * @brief Calls the `terminate` method. 
*/
jb_Undefined TransformStreamDefaultController_terminate(TransformStreamDefaultController* self );

#ifdef __cplusplus
}
#endif
