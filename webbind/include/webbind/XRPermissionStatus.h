#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PermissionStatus.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(XRPermissionStatus, PermissionStatus);

jb_FrozenArray XRPermissionStatus_granted( const XRPermissionStatus *self);

void XRPermissionStatus_set_granted(XRPermissionStatus* self, jb_FrozenArray * value);
