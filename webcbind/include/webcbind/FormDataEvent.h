#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FormDataEventInit FormDataEventInit;
typedef struct FormData FormData;


/**
 * @brief Interface FormDataEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent)
 */
DECLARE_EMLITE_TYPE(FormDataEvent, Event);

/**
 * @brief Creates a new `FormDataEvent` object. 
*/
FormDataEvent FormDataEvent_new(jb_String * type, FormDataEventInit * eventInitDict);

/**
 * @brief Gets the `formData` property. 
*/
FormData FormDataEvent_formData(const FormDataEvent *self);

#ifdef __cplusplus
}
#endif
