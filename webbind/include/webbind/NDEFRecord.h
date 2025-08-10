#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFRecordInit NDEFRecordInit;

DECLARE_EMLITE_TYPE(NDEFRecord, em_Val);

NDEFRecord NDEFRecord_new(NDEFRecordInit * recordInit);

jb_String NDEFRecord_recordType(const NDEFRecord *self);

jb_String NDEFRecord_mediaType(const NDEFRecord *self);

jb_String NDEFRecord_id(const NDEFRecord *self);

jb_DataView NDEFRecord_data(const NDEFRecord *self);

jb_String NDEFRecord_encoding(const NDEFRecord *self);

jb_String NDEFRecord_lang(const NDEFRecord *self);

jb_Array NDEFRecord_toRecords(NDEFRecord* self );

#ifdef __cplusplus
}
#endif
