#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} FencedFrameConfig;


DECLARE_EMLITE_TYPE(FencedFrameConfig, em_Val);

FencedFrameConfig FencedFrameConfig_new(const jb_USVString* url);

jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , const jb_DOMString* contextString);
