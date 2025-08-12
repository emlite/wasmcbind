#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFRecordInit NDEFRecordInit;


/**
 * @brief Interface NDEFRecord
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NDEFRecord)
 */
DECLARE_EMLITE_TYPE(NDEFRecord, em_Val);

/**
 * @brief Creates a new `NDEFRecord` object. 
*/
NDEFRecord NDEFRecord_new(NDEFRecordInit * recordInit);

/**
 * @brief Gets the `recordType` property. 
*/
jb_String NDEFRecord_recordType(const NDEFRecord *self);

/**
 * @brief Gets the `mediaType` property. 
*/
jb_String NDEFRecord_mediaType(const NDEFRecord *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String NDEFRecord_id(const NDEFRecord *self);

/**
 * @brief Gets the `data` property. 
*/
jb_DataView NDEFRecord_data(const NDEFRecord *self);

/**
 * @brief Gets the `encoding` property. 
*/
jb_String NDEFRecord_encoding(const NDEFRecord *self);

/**
 * @brief Gets the `lang` property. 
*/
jb_String NDEFRecord_lang(const NDEFRecord *self);

/**
 * @brief Calls the `toRecords` method. 
*/
jb_Array NDEFRecord_toRecords(NDEFRecord* self );

#ifdef __cplusplus
}
#endif
