#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(SVGStyleElement, SVGElement);

jb_DOMString SVGStyleElement_type(const SVGStyleElement *self);

void SVGStyleElement_set_type(SVGStyleElement* self, jb_DOMString * value);

jb_DOMString SVGStyleElement_media(const SVGStyleElement *self);

void SVGStyleElement_set_media(SVGStyleElement* self, jb_DOMString * value);

jb_DOMString SVGStyleElement_title(const SVGStyleElement *self);

void SVGStyleElement_set_title(SVGStyleElement* self, jb_DOMString * value);

CSSStyleSheet SVGStyleElement_sheet(const SVGStyleElement *self);
