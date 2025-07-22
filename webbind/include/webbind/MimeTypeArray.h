#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MimeType MimeType;


DECLARE_EMLITE_TYPE(MimeTypeArray, em_Val);

unsigned long MimeTypeArray_length( const MimeTypeArray *self);

MimeType MimeTypeArray_item(MimeTypeArray* self , unsigned long index);

MimeType MimeTypeArray_namedItem(MimeTypeArray* self , jb_DOMString * name);
