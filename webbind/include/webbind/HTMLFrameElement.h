#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct Document Document;


typedef struct {
  HTMLElement inner;
} HTMLFrameElement;


DECLARE_EMLITE_TYPE(HTMLFrameElement, HTMLElement);

HTMLFrameElement HTMLFrameElement_new();

jb_DOMString HTMLFrameElement_name( const HTMLFrameElement *self);

void HTMLFrameElement_set_name(HTMLFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLFrameElement_scrolling( const HTMLFrameElement *self);

void HTMLFrameElement_set_scrolling(HTMLFrameElement* self, const jb_DOMString* value);

jb_USVString HTMLFrameElement_src( const HTMLFrameElement *self);

void HTMLFrameElement_set_src(HTMLFrameElement* self, const jb_USVString* value);

jb_DOMString HTMLFrameElement_frameBorder( const HTMLFrameElement *self);

void HTMLFrameElement_set_frameBorder(HTMLFrameElement* self, const jb_DOMString* value);

jb_USVString HTMLFrameElement_longDesc( const HTMLFrameElement *self);

void HTMLFrameElement_set_longDesc(HTMLFrameElement* self, const jb_USVString* value);

bool HTMLFrameElement_noResize( const HTMLFrameElement *self);

void HTMLFrameElement_set_noResize(HTMLFrameElement* self, bool value);

Document HTMLFrameElement_contentDocument( const HTMLFrameElement *self);

jb_Any HTMLFrameElement_contentWindow( const HTMLFrameElement *self);

jb_DOMString HTMLFrameElement_marginHeight( const HTMLFrameElement *self);

void HTMLFrameElement_set_marginHeight(HTMLFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLFrameElement_marginWidth( const HTMLFrameElement *self);

void HTMLFrameElement_set_marginWidth(HTMLFrameElement* self, const jb_DOMString* value);
