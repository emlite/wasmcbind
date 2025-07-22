#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStreamDefaultWriter.h"
#include "enums.h"


typedef struct {
  WritableStreamDefaultWriter inner;
} WebTransportWriter;


DECLARE_EMLITE_TYPE(WebTransportWriter, WritableStreamDefaultWriter);

jb_Promise WebTransportWriter_atomicWrite(WebTransportWriter* self );

jb_Promise WebTransportWriter_atomicWrite(WebTransportWriter* self , const jb_Any* chunk);

jb_Undefined WebTransportWriter_commit(WebTransportWriter* self );
