#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ReadableStreamBYOBRequest;


DECLARE_EMLITE_TYPE(ReadableStreamBYOBRequest, em_Val);

jb_Any ReadableStreamBYOBRequest_view( const ReadableStreamBYOBRequest *self);

jb_Undefined ReadableStreamBYOBRequest_respond(ReadableStreamBYOBRequest* self , long long bytesWritten);

jb_Undefined ReadableStreamBYOBRequest_respondWithNewView(ReadableStreamBYOBRequest* self , const jb_Any* view);
