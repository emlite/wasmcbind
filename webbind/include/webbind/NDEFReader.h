#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct NDEFScanOptions NDEFScanOptions;
typedef struct NDEFWriteOptions NDEFWriteOptions;
typedef struct NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} NDEFScanOptions;


DECLARE_EMLITE_TYPE(NDEFScanOptions, em_Val);

AbortSignal NDEFScanOptions_signal( const NDEFScanOptions *self);

void NDEFScanOptions_set_signal(NDEFScanOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} NDEFWriteOptions;


DECLARE_EMLITE_TYPE(NDEFWriteOptions, em_Val);

bool NDEFWriteOptions_overwrite( const NDEFWriteOptions *self);

void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value);

AbortSignal NDEFWriteOptions_signal( const NDEFWriteOptions *self);

void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} NDEFMakeReadOnlyOptions;


DECLARE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);

AbortSignal NDEFMakeReadOnlyOptions_signal( const NDEFMakeReadOnlyOptions *self);

void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, const AbortSignal* value);
typedef struct {
  EventTarget inner;
} NDEFReader;


DECLARE_EMLITE_TYPE(NDEFReader, EventTarget);

NDEFReader NDEFReader_new();

jb_Any NDEFReader_onreading( const NDEFReader *self);

void NDEFReader_set_onreading(NDEFReader* self, const jb_Any* value);

jb_Any NDEFReader_onreadingerror( const NDEFReader *self);

void NDEFReader_set_onreadingerror(NDEFReader* self, const jb_Any* value);

jb_Promise NDEFReader_scan(NDEFReader* self );

jb_Promise NDEFReader_scan(NDEFReader* self , const NDEFScanOptions* options);

jb_Promise NDEFReader_write(NDEFReader* self , const jb_Any* message);

jb_Promise NDEFReader_write(NDEFReader* self , const jb_Any* message, const NDEFWriteOptions* options);

jb_Promise NDEFReader_makeReadOnly(NDEFReader* self );

jb_Promise NDEFReader_makeReadOnly(NDEFReader* self , const NDEFMakeReadOnlyOptions* options);
