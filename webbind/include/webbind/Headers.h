#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} Headers;


DECLARE_EMLITE_TYPE(Headers, em_Val);

Headers Headers_new();

Headers Headers_new(const jb_Any* init);

jb_Undefined Headers_append(Headers* self , const jb_ByteString* name, const jb_ByteString* value);

jb_Undefined Headers_delete_(Headers* self , const jb_ByteString* name);

jb_ByteString Headers_get(Headers* self , const jb_ByteString* name);

jb_Sequence Headers_getSetCookie(Headers* self );

bool Headers_has(Headers* self , const jb_ByteString* name);

jb_Undefined Headers_set(Headers* self , const jb_ByteString* name, const jb_ByteString* value);
