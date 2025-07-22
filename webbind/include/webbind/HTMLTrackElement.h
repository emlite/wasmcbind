#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct TextTrack TextTrack;


typedef struct {
  HTMLElement inner;
} HTMLTrackElement;


DECLARE_EMLITE_TYPE(HTMLTrackElement, HTMLElement);

HTMLTrackElement HTMLTrackElement_new();

jb_DOMString HTMLTrackElement_kind( const HTMLTrackElement *self);

void HTMLTrackElement_set_kind(HTMLTrackElement* self, const jb_DOMString* value);

jb_USVString HTMLTrackElement_src( const HTMLTrackElement *self);

void HTMLTrackElement_set_src(HTMLTrackElement* self, const jb_USVString* value);

jb_DOMString HTMLTrackElement_srclang( const HTMLTrackElement *self);

void HTMLTrackElement_set_srclang(HTMLTrackElement* self, const jb_DOMString* value);

jb_DOMString HTMLTrackElement_label( const HTMLTrackElement *self);

void HTMLTrackElement_set_label(HTMLTrackElement* self, const jb_DOMString* value);

bool HTMLTrackElement_default_( const HTMLTrackElement *self);

void HTMLTrackElement_set_default_(HTMLTrackElement* self, bool value);

unsigned short HTMLTrackElement_readyState( const HTMLTrackElement *self);

TextTrack HTMLTrackElement_track( const HTMLTrackElement *self);
