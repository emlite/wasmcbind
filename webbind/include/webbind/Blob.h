#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;
typedef struct ReadableStream ReadableStream;


typedef struct {
  em_Val inner;
} Blob;


DECLARE_EMLITE_TYPE(Blob, em_Val);

Blob Blob_new();

Blob Blob_new(const jb_Sequence* blobParts);

Blob Blob_new(const jb_Sequence* blobParts, const jb_Any* options);

long long Blob_size( const Blob *self);

jb_DOMString Blob_type( const Blob *self);

Blob Blob_slice(Blob* self );

Blob Blob_slice(Blob* self , long long start);

Blob Blob_slice(Blob* self , long long start, long long end);

Blob Blob_slice(Blob* self , long long start, long long end, const jb_DOMString* contentType);

ReadableStream Blob_stream(Blob* self );

jb_Promise Blob_text(Blob* self );

jb_Promise Blob_arrayBuffer(Blob* self );

jb_Promise Blob_bytes(Blob* self );
