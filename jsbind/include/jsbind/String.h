#pragma once

#include <emlite/emlite.h>
#include "utils.h"

#define DOMSTR(x) ((jb_DOMString){.inner = em_Val_from(x)})

#define CSStr(x) ((jb_CSSOMString){.inner = em_Val_from(x)})

DECLARE_EMLITE_TYPE(jb_DOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_CSSOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_USVString, em_Val);

DECLARE_EMLITE_TYPE(jb_ByteString, em_Val);