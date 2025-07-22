#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct Element Element;
typedef struct CSSPseudoElement CSSPseudoElement;
typedef struct DOMQuad DOMQuad;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;


typedef struct {
  EventTarget inner;
} CSSPseudoElement;


DECLARE_EMLITE_TYPE(CSSPseudoElement, EventTarget);

jb_CSSOMString CSSPseudoElement_type( const CSSPseudoElement *self);

Element CSSPseudoElement_element( const CSSPseudoElement *self);

jb_Any CSSPseudoElement_parent( const CSSPseudoElement *self);

CSSPseudoElement CSSPseudoElement_pseudo(CSSPseudoElement* self , const jb_CSSOMString* type);

jb_Sequence CSSPseudoElement_getBoxQuads(CSSPseudoElement* self );

jb_Sequence CSSPseudoElement_getBoxQuads(CSSPseudoElement* self , const BoxQuadOptions* options);

DOMQuad CSSPseudoElement_convertQuadFromNode(CSSPseudoElement* self , const DOMQuadInit* quad, const jb_Any* from);

DOMQuad CSSPseudoElement_convertQuadFromNode(CSSPseudoElement* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMQuad CSSPseudoElement_convertRectFromNode(CSSPseudoElement* self , const DOMRectReadOnly* rect, const jb_Any* from);

DOMQuad CSSPseudoElement_convertRectFromNode(CSSPseudoElement* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMPoint CSSPseudoElement_convertPointFromNode(CSSPseudoElement* self , const DOMPointInit* point, const jb_Any* from);

DOMPoint CSSPseudoElement_convertPointFromNode(CSSPseudoElement* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options);
