#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRSpace XRSpace;


typedef struct {
  em_Val inner;
} XRAnchor;


DECLARE_EMLITE_TYPE(XRAnchor, em_Val);

XRSpace XRAnchor_anchorSpace( const XRAnchor *self);

jb_Promise XRAnchor_requestPersistentHandle(XRAnchor* self );

jb_Undefined XRAnchor_delete_(XRAnchor* self );
