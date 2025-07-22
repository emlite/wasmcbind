#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;


DECLARE_EMLITE_TYPE(ClipboardItem, em_Val);

ClipboardItem ClipboardItem_new0(jb_Record * items);

ClipboardItem ClipboardItem_new1(jb_Record * items, jb_Any * options);

PresentationStyle ClipboardItem_presentationStyle( const ClipboardItem *self);

jb_FrozenArray ClipboardItem_types( const ClipboardItem *self);

jb_Promise ClipboardItem_getType(ClipboardItem* self , jb_DOMString * type);

bool ClipboardItem_supports(ClipboardItem* self , jb_DOMString * type);
