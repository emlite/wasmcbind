#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(PermissionsPolicy, em_Val);

bool PermissionsPolicy_allowsFeature0(PermissionsPolicy* self , jb_DOMString * feature);

bool PermissionsPolicy_allowsFeature1(PermissionsPolicy* self , jb_DOMString * feature, jb_DOMString * origin);

jb_Sequence PermissionsPolicy_features(PermissionsPolicy* self );

jb_Sequence PermissionsPolicy_allowedFeatures(PermissionsPolicy* self );

jb_Sequence PermissionsPolicy_getAllowlistForFeature(PermissionsPolicy* self , jb_DOMString * feature);
