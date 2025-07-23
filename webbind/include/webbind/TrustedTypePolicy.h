#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;
typedef struct TrustedScriptURL TrustedScriptURL;


DECLARE_EMLITE_TYPE(TrustedTypePolicy, em_Val);

jb_DOMString TrustedTypePolicy_name(const TrustedTypePolicy *self);

TrustedHTML TrustedTypePolicy_createHTML(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments);

TrustedScript TrustedTypePolicy_createScript(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments);

TrustedScriptURL TrustedTypePolicy_createScriptURL(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments);
