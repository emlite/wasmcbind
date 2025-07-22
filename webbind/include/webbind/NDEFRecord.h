#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NDEFRecord NDEFRecord;


DECLARE_EMLITE_TYPE(NDEFRecord, em_Val);

NDEFRecord NDEFRecord_new(jb_Any * recordInit);

jb_USVString NDEFRecord_recordType( const NDEFRecord *self);

jb_USVString NDEFRecord_mediaType( const NDEFRecord *self);

jb_USVString NDEFRecord_id( const NDEFRecord *self);

jb_DataView NDEFRecord_data( const NDEFRecord *self);

jb_USVString NDEFRecord_encoding( const NDEFRecord *self);

jb_USVString NDEFRecord_lang( const NDEFRecord *self);

jb_Sequence NDEFRecord_toRecords(NDEFRecord* self );
