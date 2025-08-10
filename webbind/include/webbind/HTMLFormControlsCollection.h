#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLCollection.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HTMLFormControlsCollection, HTMLCollection);

jb_Any HTMLFormControlsCollection_namedItem(HTMLFormControlsCollection* self , jb_String * name);

#ifdef __cplusplus
}
#endif
