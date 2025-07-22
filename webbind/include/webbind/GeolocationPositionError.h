#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GeolocationPositionError;


DECLARE_EMLITE_TYPE(GeolocationPositionError, em_Val);

unsigned short GeolocationPositionError_code( const GeolocationPositionError *self);

jb_DOMString GeolocationPositionError_message( const GeolocationPositionError *self);
