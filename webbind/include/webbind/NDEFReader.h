#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFScanOptions NDEFScanOptions;
typedef struct NDEFWriteOptions NDEFWriteOptions;
typedef struct NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions;

DECLARE_EMLITE_TYPE(NDEFReader, EventTarget);

NDEFReader NDEFReader_new();

jb_Any NDEFReader_onreading(const NDEFReader *self);

void NDEFReader_set_onreading(NDEFReader* self, jb_Any * value);

jb_Any NDEFReader_onreadingerror(const NDEFReader *self);

void NDEFReader_set_onreadingerror(NDEFReader* self, jb_Any * value);

jb_Promise NDEFReader_scan0(NDEFReader* self );

jb_Promise NDEFReader_scan1(NDEFReader* self , NDEFScanOptions * options);

jb_Promise NDEFReader_write0(NDEFReader* self , jb_Any * message);

jb_Promise NDEFReader_write1(NDEFReader* self , jb_Any * message, NDEFWriteOptions * options);

jb_Promise NDEFReader_makeReadOnly0(NDEFReader* self );

jb_Promise NDEFReader_makeReadOnly1(NDEFReader* self , NDEFMakeReadOnlyOptions * options);

#ifdef __cplusplus
}
#endif
