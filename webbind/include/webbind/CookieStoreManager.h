#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CookieStore.h"
#include "enums.h"


typedef struct {
  em_Val inner;
} CookieStoreManager;


DECLARE_EMLITE_TYPE(CookieStoreManager, em_Val);

jb_Promise CookieStoreManager_subscribe(CookieStoreManager* self , const jb_Sequence* subscriptions);

jb_Promise CookieStoreManager_getSubscriptions(CookieStoreManager* self );

jb_Promise CookieStoreManager_unsubscribe(CookieStoreManager* self , const jb_Sequence* subscriptions);
