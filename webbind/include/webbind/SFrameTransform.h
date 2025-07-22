#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct CryptoKey CryptoKey;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


typedef struct {
  EventTarget inner;
} SFrameTransform;


DECLARE_EMLITE_TYPE(SFrameTransform, EventTarget);

SFrameTransform SFrameTransform_new();

SFrameTransform SFrameTransform_new(const jb_Any* options);

jb_Promise SFrameTransform_setEncryptionKey(SFrameTransform* self , const CryptoKey* key);

jb_Promise SFrameTransform_setEncryptionKey(SFrameTransform* self , const CryptoKey* key, const jb_Any* keyID);

jb_Any SFrameTransform_onerror( const SFrameTransform *self);

void SFrameTransform_set_onerror(SFrameTransform* self, const jb_Any* value);

ReadableStream SFrameTransform_readable( const SFrameTransform *self);

WritableStream SFrameTransform_writable( const SFrameTransform *self);
