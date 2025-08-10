#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardItemOptions ClipboardItemOptions;
typedef struct Blob Blob;

DECLARE_EMLITE_TYPE(ClipboardItem, em_Val);

ClipboardItem ClipboardItem_new0(jb_Object * items);

ClipboardItem ClipboardItem_new1(jb_Object * items, ClipboardItemOptions * options);

PresentationStyle ClipboardItem_presentationStyle(const ClipboardItem *self);

jb_Array ClipboardItem_types(const ClipboardItem *self);

jb_Promise ClipboardItem_getType(ClipboardItem* self , jb_String * type);

bool ClipboardItem_supports(ClipboardItem* self , jb_String * type);

#ifdef __cplusplus
}
#endif
