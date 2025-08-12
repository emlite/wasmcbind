#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFMessageInit NDEFMessageInit;
typedef struct NDEFRecord NDEFRecord;


/**
 * @brief Interface NDEFMessage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NDEFMessage)
 */
DECLARE_EMLITE_TYPE(NDEFMessage, em_Val);

/**
 * @brief Creates a new `NDEFMessage` object. 
*/
NDEFMessage NDEFMessage_new(NDEFMessageInit * messageInit);

/**
 * @brief Gets the `records` property. 
*/
jb_Array NDEFMessage_records(const NDEFMessage *self);

#ifdef __cplusplus
}
#endif
