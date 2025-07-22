#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SubtleCrypto SubtleCrypto;


typedef struct {
  em_Val inner;
} Crypto;


DECLARE_EMLITE_TYPE(Crypto, em_Val);

SubtleCrypto Crypto_subtle( const Crypto *self);

jb_Any Crypto_getRandomValues(Crypto* self , const jb_Any* array);

jb_DOMString Crypto_randomUUID(Crypto* self );
