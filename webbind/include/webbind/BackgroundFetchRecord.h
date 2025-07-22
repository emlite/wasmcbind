#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Request Request;
typedef struct Response Response;


typedef struct {
  em_Val inner;
} BackgroundFetchRecord;


DECLARE_EMLITE_TYPE(BackgroundFetchRecord, em_Val);

Request BackgroundFetchRecord_request( const BackgroundFetchRecord *self);

jb_Promise BackgroundFetchRecord_responseReady( const BackgroundFetchRecord *self);
