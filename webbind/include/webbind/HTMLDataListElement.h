#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCollection HTMLCollection;

DECLARE_EMLITE_TYPE(HTMLDataListElement, HTMLElement);

HTMLDataListElement HTMLDataListElement_new();

HTMLCollection HTMLDataListElement_options(const HTMLDataListElement *self);

#ifdef __cplusplus
}
#endif
