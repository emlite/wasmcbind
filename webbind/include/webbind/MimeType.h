#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Plugin Plugin;


DECLARE_EMLITE_TYPE(MimeType, em_Val);

jb_DOMString MimeType_type(const MimeType *self);

jb_DOMString MimeType_description(const MimeType *self);

jb_DOMString MimeType_suffixes(const MimeType *self);

Plugin MimeType_enabledPlugin(const MimeType *self);
