#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CookieChangeEventInit CookieChangeEventInit;
typedef struct CookieListItem CookieListItem;

DECLARE_EMLITE_TYPE(CookieChangeEvent, Event);

CookieChangeEvent CookieChangeEvent_new0(jb_String * type);

CookieChangeEvent CookieChangeEvent_new1(jb_String * type, CookieChangeEventInit * eventInitDict);

jb_Array CookieChangeEvent_changed(const CookieChangeEvent *self);

jb_Array CookieChangeEvent_deleted(const CookieChangeEvent *self);

#ifdef __cplusplus
}
#endif
