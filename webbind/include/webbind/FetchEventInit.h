#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Request Request;

DECLARE_EMLITE_TYPE(FetchEventInit, ExtendableEventInit);

Request FetchEventInit_request(const FetchEventInit *self);

void FetchEventInit_set_request(FetchEventInit* self, Request * value);

jb_Promise FetchEventInit_preloadResponse(const FetchEventInit *self);

void FetchEventInit_set_preloadResponse(FetchEventInit* self, jb_Promise * value);

jb_String FetchEventInit_clientId(const FetchEventInit *self);

void FetchEventInit_set_clientId(FetchEventInit* self, jb_String * value);

jb_String FetchEventInit_resultingClientId(const FetchEventInit *self);

void FetchEventInit_set_resultingClientId(FetchEventInit* self, jb_String * value);

jb_String FetchEventInit_replacesClientId(const FetchEventInit *self);

void FetchEventInit_set_replacesClientId(FetchEventInit* self, jb_String * value);

jb_Promise FetchEventInit_handled(const FetchEventInit *self);

void FetchEventInit_set_handled(FetchEventInit* self, jb_Promise * value);

FetchEventInit FetchEventInit_new();

#ifdef __cplusplus
}
#endif
