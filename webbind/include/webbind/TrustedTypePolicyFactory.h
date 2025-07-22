#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TrustedTypePolicy TrustedTypePolicy;
typedef struct TrustedTypePolicyOptions TrustedTypePolicyOptions;
typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;


DECLARE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);

jb_Function TrustedTypePolicyOptions_createHTML( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScript( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScriptURL( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value);
DECLARE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy0(TrustedTypePolicyFactory* self , jb_DOMString * policyName);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy1(TrustedTypePolicyFactory* self , jb_DOMString * policyName, TrustedTypePolicyOptions * policyOptions);

bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , jb_Any * value);

bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , jb_Any * value);

bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , jb_Any * value);

TrustedHTML TrustedTypePolicyFactory_emptyHTML( const TrustedTypePolicyFactory *self);

TrustedScript TrustedTypePolicyFactory_emptyScript( const TrustedTypePolicyFactory *self);

jb_DOMString TrustedTypePolicyFactory_getAttributeType0(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute);

jb_DOMString TrustedTypePolicyFactory_getAttributeType1(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute, jb_DOMString * elementNs);

jb_DOMString TrustedTypePolicyFactory_getAttributeType2(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * attribute, jb_DOMString * elementNs, jb_DOMString * attrNs);

jb_DOMString TrustedTypePolicyFactory_getPropertyType0(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * property);

jb_DOMString TrustedTypePolicyFactory_getPropertyType1(TrustedTypePolicyFactory* self , jb_DOMString * tagName, jb_DOMString * property, jb_DOMString * elementNs);

TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy( const TrustedTypePolicyFactory *self);
