#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BlobEventInit BlobEventInit;
typedef struct Blob Blob;


/**
 * @brief Interface BlobEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent)
 */
DECLARE_EMLITE_TYPE(BlobEvent, Event);

/**
 * @brief Creates a new `BlobEvent` object. 
*/
BlobEvent BlobEvent_new(jb_String * type, BlobEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
Blob BlobEvent_data(const BlobEvent *self);

/**
 * @brief Gets the `timecode` property. 
*/
jb_Any BlobEvent_timecode(const BlobEvent *self);

#ifdef __cplusplus
}
#endif
