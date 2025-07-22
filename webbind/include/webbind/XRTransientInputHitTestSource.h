#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(XRTransientInputHitTestSource, em_Val);

jb_Undefined XRTransientInputHitTestSource_cancel(XRTransientInputHitTestSource* self );
