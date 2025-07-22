#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MultiCacheQueryOptions MultiCacheQueryOptions;
typedef struct Cache Cache;


typedef struct {
  em_Val inner;
} MultiCacheQueryOptions;


DECLARE_EMLITE_TYPE(MultiCacheQueryOptions, em_Val);

jb_DOMString MultiCacheQueryOptions_cacheName( const MultiCacheQueryOptions *self);

void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} CacheStorage;


DECLARE_EMLITE_TYPE(CacheStorage, em_Val);

jb_Promise CacheStorage_match(CacheStorage* self , const jb_Any* request);

jb_Promise CacheStorage_match(CacheStorage* self , const jb_Any* request, const MultiCacheQueryOptions* options);

jb_Promise CacheStorage_has(CacheStorage* self , const jb_DOMString* cacheName);

jb_Promise CacheStorage_open(CacheStorage* self , const jb_DOMString* cacheName);

jb_Promise CacheStorage_delete_(CacheStorage* self , const jb_DOMString* cacheName);

jb_Promise CacheStorage_keys(CacheStorage* self );
