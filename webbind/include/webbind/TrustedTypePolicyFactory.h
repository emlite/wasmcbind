#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct TrustedTypePolicy TrustedTypePolicy;
typedef struct TrustedTypePolicyOptions TrustedTypePolicyOptions;
typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;


typedef struct {
  em_Val inner;
} TrustedTypePolicyOptions;


DECLARE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);

jb_Function TrustedTypePolicyOptions_createHTML( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, const jb_Function* value);

jb_Function TrustedTypePolicyOptions_createScript( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, const jb_Function* value);

jb_Function TrustedTypePolicyOptions_createScriptURL( const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, const jb_Function* value);
typedef struct {
  em_Val inner;
} TrustedTypePolicyFactory;


DECLARE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy(TrustedTypePolicyFactory* self , const jb_DOMString* policyName);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy(TrustedTypePolicyFactory* self , const jb_DOMString* policyName, const TrustedTypePolicyOptions* policyOptions);

bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , const jb_Any* value);

bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , const jb_Any* value);

bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , const jb_Any* value);

TrustedHTML TrustedTypePolicyFactory_emptyHTML( const TrustedTypePolicyFactory *self);

TrustedScript TrustedTypePolicyFactory_emptyScript( const TrustedTypePolicyFactory *self);

jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute);

jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute, const jb_DOMString* elementNs);

jb_DOMString TrustedTypePolicyFactory_getAttributeType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* attribute, const jb_DOMString* elementNs, const jb_DOMString* attrNs);

jb_DOMString TrustedTypePolicyFactory_getPropertyType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* property);

jb_DOMString TrustedTypePolicyFactory_getPropertyType(TrustedTypePolicyFactory* self , const jb_DOMString* tagName, const jb_DOMString* property, const jb_DOMString* elementNs);

TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy( const TrustedTypePolicyFactory *self);
