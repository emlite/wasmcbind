#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PermissionsPolicy;


DECLARE_EMLITE_TYPE(PermissionsPolicy, em_Val);

bool PermissionsPolicy_allowsFeature(PermissionsPolicy* self , const jb_DOMString* feature);

bool PermissionsPolicy_allowsFeature(PermissionsPolicy* self , const jb_DOMString* feature, const jb_DOMString* origin);

jb_Sequence PermissionsPolicy_features(PermissionsPolicy* self );

jb_Sequence PermissionsPolicy_allowedFeatures(PermissionsPolicy* self );

jb_Sequence PermissionsPolicy_getAllowlistForFeature(PermissionsPolicy* self , const jb_DOMString* feature);
