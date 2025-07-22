#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} MediaQueryList;


DECLARE_EMLITE_TYPE(MediaQueryList, EventTarget);

jb_CSSOMString MediaQueryList_media( const MediaQueryList *self);

bool MediaQueryList_matches( const MediaQueryList *self);

jb_Undefined MediaQueryList_addListener(MediaQueryList* self , const jb_Function* callback);

jb_Undefined MediaQueryList_removeListener(MediaQueryList* self , const jb_Function* callback);

jb_Any MediaQueryList_onchange( const MediaQueryList *self);

void MediaQueryList_set_onchange(MediaQueryList* self, const jb_Any* value);
