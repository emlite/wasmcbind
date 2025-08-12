#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ProgressEventInit ProgressEventInit;


/**
 * @brief Interface ProgressEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEvent)
 */
DECLARE_EMLITE_TYPE(ProgressEvent, Event);

/**
 * @brief Creates a new `ProgressEvent` object. 
*/
ProgressEvent ProgressEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ProgressEvent` object. 
*/
ProgressEvent ProgressEvent_new1(jb_String * type, ProgressEventInit * eventInitDict);

/**
 * @brief Gets the `lengthComputable` property. 
*/
bool ProgressEvent_lengthComputable(const ProgressEvent *self);

/**
 * @brief Gets the `loaded` property. 
*/
double ProgressEvent_loaded(const ProgressEvent *self);

/**
 * @brief Gets the `total` property. 
*/
double ProgressEvent_total(const ProgressEvent *self);

#ifdef __cplusplus
}
#endif
