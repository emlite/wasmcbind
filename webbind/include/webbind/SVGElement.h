#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Element.h"
#include "enums.h"

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGSVGElement SVGSVGElement;
typedef struct SVGUseElement SVGUseElement;
typedef struct DOMStringMap DOMStringMap;
typedef struct FocusOptions FocusOptions;
typedef struct CSSStyleDeclaration CSSStyleDeclaration;


typedef struct {
  em_Val inner;
} FocusOptions;


DECLARE_EMLITE_TYPE(FocusOptions, em_Val);

bool FocusOptions_preventScroll( const FocusOptions *self);

void FocusOptions_set_preventScroll(FocusOptions* self, bool value);

bool FocusOptions_focusVisible( const FocusOptions *self);

void FocusOptions_set_focusVisible(FocusOptions* self, bool value);
typedef struct {
  Element inner;
} SVGElement;


DECLARE_EMLITE_TYPE(SVGElement, Element);

SVGAnimatedString SVGElement_className( const SVGElement *self);

SVGSVGElement SVGElement_ownerSVGElement( const SVGElement *self);

SVGElement SVGElement_viewportElement( const SVGElement *self);

jb_Any SVGElement_onbeforexrselect( const SVGElement *self);

void SVGElement_set_onbeforexrselect(SVGElement* self, const jb_Any* value);

SVGElement SVGElement_correspondingElement( const SVGElement *self);

SVGUseElement SVGElement_correspondingUseElement( const SVGElement *self);

DOMStringMap SVGElement_dataset( const SVGElement *self);

jb_DOMString SVGElement_nonce( const SVGElement *self);

void SVGElement_set_nonce(SVGElement* self, const jb_DOMString* value);

bool SVGElement_autofocus( const SVGElement *self);

void SVGElement_set_autofocus(SVGElement* self, bool value);

long SVGElement_tabIndex( const SVGElement *self);

void SVGElement_set_tabIndex(SVGElement* self, long value);

jb_Undefined SVGElement_focus(SVGElement* self );

jb_Undefined SVGElement_focus(SVGElement* self , const FocusOptions* options);

jb_Undefined SVGElement_blur(SVGElement* self );

CSSStyleProperties SVGElement_style( const SVGElement *self);
