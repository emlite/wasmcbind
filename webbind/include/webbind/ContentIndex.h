#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentDescription ContentDescription;

DECLARE_EMLITE_TYPE(ContentIndex, em_Val);

jb_Promise ContentIndex_add(ContentIndex* self , ContentDescription * description);

jb_Promise ContentIndex_delete_(ContentIndex* self , jb_String * id);

jb_Promise ContentIndex_getAll(ContentIndex* self );

#ifdef __cplusplus
}
#endif
