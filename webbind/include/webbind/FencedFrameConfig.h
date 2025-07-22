#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(FencedFrameConfig, em_Val);

FencedFrameConfig FencedFrameConfig_new(jb_USVString * url);

jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , jb_DOMString * contextString);
