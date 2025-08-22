#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ViewTransitionTypeSet ViewTransitionTypeSet;


/**
 * @brief Interface ViewTransition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition)
 */
DECLARE_EMLITE_TYPE(ViewTransition, em_Val);

/**
 * @brief Gets the `updateCallbackDone` property. 
*/
jb_Promise ViewTransition_updateCallbackDone(const ViewTransition *self);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise ViewTransition_ready(const ViewTransition *self);

/**
 * @brief Gets the `finished` property. 
*/
jb_Promise ViewTransition_finished(const ViewTransition *self);

/**
 * @brief Calls the `skipTransition` method. 
*/
jb_Undefined ViewTransition_skipTransition(ViewTransition* self );

/**
 * @brief Gets the `types` property. 
*/
ViewTransitionTypeSet ViewTransition_types(const ViewTransition *self);

/**
 * @brief Sets the `types` property. 
*/
void ViewTransition_set_types(ViewTransition* self, ViewTransitionTypeSet * value);

#ifdef __cplusplus
}
#endif
