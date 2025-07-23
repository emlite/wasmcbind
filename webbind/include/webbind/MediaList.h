#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(MediaList, em_Val);

jb_CSSOMString MediaList_mediaText(const MediaList *self);

void MediaList_set_mediaText(MediaList* self, jb_CSSOMString * value);

unsigned long MediaList_length(const MediaList *self);

jb_CSSOMString MediaList_item(MediaList* self , unsigned long index);

jb_Undefined MediaList_appendMedium(MediaList* self , jb_CSSOMString * medium);

jb_Undefined MediaList_deleteMedium(MediaList* self , jb_CSSOMString * medium);
