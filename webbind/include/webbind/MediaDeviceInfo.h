#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MediaDeviceInfo;


DECLARE_EMLITE_TYPE(MediaDeviceInfo, em_Val);

jb_DOMString MediaDeviceInfo_deviceId( const MediaDeviceInfo *self);

MediaDeviceKind MediaDeviceInfo_kind( const MediaDeviceInfo *self);

jb_DOMString MediaDeviceInfo_label( const MediaDeviceInfo *self);

jb_DOMString MediaDeviceInfo_groupId( const MediaDeviceInfo *self);

jb_Object MediaDeviceInfo_toJSON(MediaDeviceInfo* self );
