#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WriterCreateOptions WriterCreateOptions;
typedef struct WriterCreateCoreOptions WriterCreateCoreOptions;
typedef struct WriterWriteOptions WriterWriteOptions;
typedef struct ReadableStream ReadableStream;

DECLARE_EMLITE_TYPE(Writer, em_Val);

jb_Promise Writer_create0(Writer* self );

jb_Promise Writer_create1(Writer* self , WriterCreateOptions * options);

jb_Promise Writer_availability0(Writer* self );

jb_Promise Writer_availability1(Writer* self , WriterCreateCoreOptions * options);

jb_Promise Writer_write0(Writer* self , jb_String * input);

jb_Promise Writer_write1(Writer* self , jb_String * input, WriterWriteOptions * options);

ReadableStream Writer_writeStreaming0(Writer* self , jb_String * input);

ReadableStream Writer_writeStreaming1(Writer* self , jb_String * input, WriterWriteOptions * options);

jb_String Writer_sharedContext(const Writer *self);

WriterTone Writer_tone(const Writer *self);

WriterFormat Writer_format(const Writer *self);

WriterLength Writer_length(const Writer *self);

jb_Array Writer_expectedInputLanguages(const Writer *self);

jb_Array Writer_expectedContextLanguages(const Writer *self);

jb_String Writer_outputLanguage(const Writer *self);

jb_Promise Writer_measureInputUsage0(Writer* self , jb_String * input);

jb_Promise Writer_measureInputUsage1(Writer* self , jb_String * input, WriterWriteOptions * options);

double Writer_inputQuota(const Writer *self);

jb_Undefined Writer_destroy(Writer* self );

#ifdef __cplusplus
}
#endif
