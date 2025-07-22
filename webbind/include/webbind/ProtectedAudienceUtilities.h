#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(ProtectedAudienceUtilities, em_Val);

jb_Uint8Array ProtectedAudienceUtilities_encodeUtf8(ProtectedAudienceUtilities* self , jb_USVString * input);

jb_USVString ProtectedAudienceUtilities_decodeUtf8(ProtectedAudienceUtilities* self , jb_Uint8Array * bytes);
