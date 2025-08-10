#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SanitizerConfig SanitizerConfig;

DECLARE_EMLITE_TYPE(Sanitizer, em_Val);

Sanitizer Sanitizer_new0();

Sanitizer Sanitizer_new1(jb_Any * configuration);

SanitizerConfig Sanitizer_get(Sanitizer* self );

jb_Undefined Sanitizer_allowElement(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_removeElement(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , jb_Any * attribute);

jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , jb_Any * attribute);

jb_Undefined Sanitizer_setComments(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_setDataAttributes(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_removeUnsafe(Sanitizer* self );

#ifdef __cplusplus
}
#endif
