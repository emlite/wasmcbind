#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PermissionStatus, EventTarget);

PermissionState PermissionStatus_state(const PermissionStatus *self);

jb_DOMString PermissionStatus_name(const PermissionStatus *self);

jb_Any PermissionStatus_onchange(const PermissionStatus *self);

void PermissionStatus_set_onchange(PermissionStatus* self, jb_Any * value);
