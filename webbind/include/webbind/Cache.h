#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BackgroundFetchRegistration.h"
#include "enums.h"

typedef struct Response Response;
typedef struct Request Request;


typedef struct {
  em_Val inner;
} Cache;


DECLARE_EMLITE_TYPE(Cache, em_Val);

jb_Promise Cache_match(Cache* self , const jb_Any* request);

jb_Promise Cache_match(Cache* self , const jb_Any* request, const CacheQueryOptions* options);

jb_Promise Cache_matchAll(Cache* self );

jb_Promise Cache_matchAll(Cache* self , const jb_Any* request);

jb_Promise Cache_matchAll(Cache* self , const jb_Any* request, const CacheQueryOptions* options);

jb_Promise Cache_add(Cache* self , const jb_Any* request);

jb_Promise Cache_addAll(Cache* self , const jb_Sequence* requests);

jb_Promise Cache_put(Cache* self , const jb_Any* request, const Response* response);

jb_Promise Cache_delete_(Cache* self , const jb_Any* request);

jb_Promise Cache_delete_(Cache* self , const jb_Any* request, const CacheQueryOptions* options);

jb_Promise Cache_keys(Cache* self );

jb_Promise Cache_keys(Cache* self , const jb_Any* request);

jb_Promise Cache_keys(Cache* self , const jb_Any* request, const CacheQueryOptions* options);
