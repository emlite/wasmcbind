#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CookieListItem CookieListItem;
typedef struct CookieStoreGetOptions CookieStoreGetOptions;
typedef struct CookieInit CookieInit;
typedef struct CookieStoreDeleteOptions CookieStoreDeleteOptions;

DECLARE_EMLITE_TYPE(CookieStore, EventTarget);

jb_Promise CookieStore_get0(CookieStore* self );

jb_Promise CookieStore_get1(CookieStore* self , CookieStoreGetOptions * options);

jb_Promise CookieStore_getAll0(CookieStore* self );

jb_Promise CookieStore_getAll1(CookieStore* self , CookieStoreGetOptions * options);

jb_Promise CookieStore_set(CookieStore* self , CookieInit * options);

jb_Promise CookieStore_delete_(CookieStore* self , CookieStoreDeleteOptions * options);

jb_Any CookieStore_onchange(const CookieStore *self);

void CookieStore_set_onchange(CookieStore* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
