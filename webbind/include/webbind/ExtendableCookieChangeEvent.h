#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit;
typedef struct CookieListItem CookieListItem;

DECLARE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_String * type);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_String * type, ExtendableCookieChangeEventInit * eventInitDict);

jb_Array ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self);

jb_Array ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self);

#ifdef __cplusplus
}
#endif
