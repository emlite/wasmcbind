#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;


/**
 * @brief Interface PushMessageData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData)
 */
DECLARE_EMLITE_TYPE(PushMessageData, em_Val);

/**
 * @brief Calls the `arrayBuffer` method. 
*/
jb_ArrayBuffer PushMessageData_arrayBuffer(PushMessageData* self );

/**
 * @brief Calls the `blob` method. 
*/
Blob PushMessageData_blob(PushMessageData* self );

/**
 * @brief Calls the `bytes` method. 
*/
jb_Uint8Array PushMessageData_bytes(PushMessageData* self );

/**
 * @brief Calls the `json` method. 
*/
jb_Any PushMessageData_json(PushMessageData* self );

/**
 * @brief Calls the `text` method. 
*/
jb_String PushMessageData_text(PushMessageData* self );

#ifdef __cplusplus
}
#endif
