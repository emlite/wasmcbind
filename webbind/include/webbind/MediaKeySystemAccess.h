#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Navigator.h"
#include "enums.h"

typedef struct MediaKeys MediaKeys;


DECLARE_EMLITE_TYPE(MediaKeySystemAccess, em_Val);

jb_DOMString MediaKeySystemAccess_keySystem( const MediaKeySystemAccess *self);

MediaKeySystemConfiguration MediaKeySystemAccess_getConfiguration(MediaKeySystemAccess* self );

jb_Promise MediaKeySystemAccess_createMediaKeys(MediaKeySystemAccess* self );
