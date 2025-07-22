#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Writer Writer;
typedef struct WriterCreateOptions WriterCreateOptions;
typedef struct WriterCreateCoreOptions WriterCreateCoreOptions;
typedef struct WriterWriteOptions WriterWriteOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} WriterCreateOptions;


DECLARE_EMLITE_TYPE(WriterCreateOptions, em_Val);

AbortSignal WriterCreateOptions_signal( const WriterCreateOptions *self);

void WriterCreateOptions_set_signal(WriterCreateOptions* self, const AbortSignal* value);

jb_Function WriterCreateOptions_monitor( const WriterCreateOptions *self);

void WriterCreateOptions_set_monitor(WriterCreateOptions* self, const jb_Function* value);

jb_DOMString WriterCreateOptions_sharedContext( const WriterCreateOptions *self);

void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} WriterCreateCoreOptions;


DECLARE_EMLITE_TYPE(WriterCreateCoreOptions, em_Val);

WriterTone WriterCreateCoreOptions_tone( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_tone(WriterCreateCoreOptions* self, const WriterTone* value);

WriterFormat WriterCreateCoreOptions_format( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_format(WriterCreateCoreOptions* self, const WriterFormat* value);

WriterLength WriterCreateCoreOptions_length( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_length(WriterCreateCoreOptions* self, const WriterLength* value);

jb_Sequence WriterCreateCoreOptions_expectedInputLanguages( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedInputLanguages(WriterCreateCoreOptions* self, const jb_Sequence* value);

jb_Sequence WriterCreateCoreOptions_expectedContextLanguages( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_expectedContextLanguages(WriterCreateCoreOptions* self, const jb_Sequence* value);

jb_DOMString WriterCreateCoreOptions_outputLanguage( const WriterCreateCoreOptions *self);

void WriterCreateCoreOptions_set_outputLanguage(WriterCreateCoreOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} WriterWriteOptions;


DECLARE_EMLITE_TYPE(WriterWriteOptions, em_Val);

jb_DOMString WriterWriteOptions_context( const WriterWriteOptions *self);

void WriterWriteOptions_set_context(WriterWriteOptions* self, const jb_DOMString* value);

AbortSignal WriterWriteOptions_signal( const WriterWriteOptions *self);

void WriterWriteOptions_set_signal(WriterWriteOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} Writer;


DECLARE_EMLITE_TYPE(Writer, em_Val);

jb_Promise Writer_create(Writer* self );

jb_Promise Writer_create(Writer* self , const WriterCreateOptions* options);

jb_Promise Writer_availability(Writer* self );

jb_Promise Writer_availability(Writer* self , const WriterCreateCoreOptions* options);

jb_Promise Writer_write(Writer* self , const jb_DOMString* input);

jb_Promise Writer_write(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options);

ReadableStream Writer_writeStreaming(Writer* self , const jb_DOMString* input);

ReadableStream Writer_writeStreaming(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options);

jb_DOMString Writer_sharedContext( const Writer *self);

WriterTone Writer_tone( const Writer *self);

WriterFormat Writer_format( const Writer *self);

WriterLength Writer_length( const Writer *self);

jb_FrozenArray Writer_expectedInputLanguages( const Writer *self);

jb_FrozenArray Writer_expectedContextLanguages( const Writer *self);

jb_DOMString Writer_outputLanguage( const Writer *self);

jb_Promise Writer_measureInputUsage(Writer* self , const jb_DOMString* input);

jb_Promise Writer_measureInputUsage(Writer* self , const jb_DOMString* input, const WriterWriteOptions* options);

double Writer_inputQuota( const Writer *self);

jb_Undefined Writer_destroy(Writer* self );
