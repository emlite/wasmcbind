#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FetchEventInit FetchEventInit;
typedef struct Request Request;
typedef struct Response Response;

DECLARE_EMLITE_TYPE(FetchEvent, ExtendableEvent);

FetchEvent FetchEvent_new(jb_String * type, FetchEventInit * eventInitDict);

Request FetchEvent_request(const FetchEvent *self);

jb_Promise FetchEvent_preloadResponse(const FetchEvent *self);

jb_String FetchEvent_clientId(const FetchEvent *self);

jb_String FetchEvent_resultingClientId(const FetchEvent *self);

jb_String FetchEvent_replacesClientId(const FetchEvent *self);

jb_Promise FetchEvent_handled(const FetchEvent *self);

jb_Undefined FetchEvent_respondWith(FetchEvent* self , jb_Promise * r);

#ifdef __cplusplus
}
#endif
