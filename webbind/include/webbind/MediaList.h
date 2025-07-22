#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MediaList;


DECLARE_EMLITE_TYPE(MediaList, em_Val);

jb_CSSOMString MediaList_mediaText( const MediaList *self);

void MediaList_set_mediaText(MediaList* self, const jb_CSSOMString* value);

unsigned long MediaList_length( const MediaList *self);

jb_CSSOMString MediaList_item(MediaList* self , unsigned long index);

jb_Undefined MediaList_appendMedium(MediaList* self , const jb_CSSOMString* medium);

jb_Undefined MediaList_deleteMedium(MediaList* self , const jb_CSSOMString* medium);
