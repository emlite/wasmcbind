#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MediaKeyStatusMap;


DECLARE_EMLITE_TYPE(MediaKeyStatusMap, em_Val);

unsigned long MediaKeyStatusMap_size( const MediaKeyStatusMap *self);

bool MediaKeyStatusMap_has(MediaKeyStatusMap* self , const jb_Any* keyId);

jb_Any MediaKeyStatusMap_get(MediaKeyStatusMap* self , const jb_Any* keyId);
