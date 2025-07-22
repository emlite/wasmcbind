#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLImageElement;


DECLARE_EMLITE_TYPE(HTMLImageElement, HTMLElement);

HTMLImageElement HTMLImageElement_new();

jb_DOMString HTMLImageElement_alt( const HTMLImageElement *self);

void HTMLImageElement_set_alt(HTMLImageElement* self, const jb_DOMString* value);

jb_USVString HTMLImageElement_src( const HTMLImageElement *self);

void HTMLImageElement_set_src(HTMLImageElement* self, const jb_USVString* value);

jb_USVString HTMLImageElement_srcset( const HTMLImageElement *self);

void HTMLImageElement_set_srcset(HTMLImageElement* self, const jb_USVString* value);

jb_DOMString HTMLImageElement_sizes( const HTMLImageElement *self);

void HTMLImageElement_set_sizes(HTMLImageElement* self, const jb_DOMString* value);

jb_DOMString HTMLImageElement_crossOrigin( const HTMLImageElement *self);

void HTMLImageElement_set_crossOrigin(HTMLImageElement* self, const jb_DOMString* value);

jb_DOMString HTMLImageElement_useMap( const HTMLImageElement *self);

void HTMLImageElement_set_useMap(HTMLImageElement* self, const jb_DOMString* value);

bool HTMLImageElement_isMap( const HTMLImageElement *self);

void HTMLImageElement_set_isMap(HTMLImageElement* self, bool value);

unsigned long HTMLImageElement_width( const HTMLImageElement *self);

void HTMLImageElement_set_width(HTMLImageElement* self, unsigned long value);

unsigned long HTMLImageElement_height( const HTMLImageElement *self);

void HTMLImageElement_set_height(HTMLImageElement* self, unsigned long value);

unsigned long HTMLImageElement_naturalWidth( const HTMLImageElement *self);

unsigned long HTMLImageElement_naturalHeight( const HTMLImageElement *self);

bool HTMLImageElement_complete( const HTMLImageElement *self);

jb_USVString HTMLImageElement_currentSrc( const HTMLImageElement *self);

jb_DOMString HTMLImageElement_referrerPolicy( const HTMLImageElement *self);

void HTMLImageElement_set_referrerPolicy(HTMLImageElement* self, const jb_DOMString* value);

jb_DOMString HTMLImageElement_decoding( const HTMLImageElement *self);

void HTMLImageElement_set_decoding(HTMLImageElement* self, const jb_DOMString* value);

jb_DOMString HTMLImageElement_loading( const HTMLImageElement *self);

void HTMLImageElement_set_loading(HTMLImageElement* self, const jb_DOMString* value);

jb_DOMString HTMLImageElement_fetchPriority( const HTMLImageElement *self);

void HTMLImageElement_set_fetchPriority(HTMLImageElement* self, const jb_DOMString* value);

jb_Promise HTMLImageElement_decode(HTMLImageElement* self );

long HTMLImageElement_x( const HTMLImageElement *self);

long HTMLImageElement_y( const HTMLImageElement *self);

jb_DOMString HTMLImageElement_name( const HTMLImageElement *self);

void HTMLImageElement_set_name(HTMLImageElement* self, const jb_DOMString* value);

jb_USVString HTMLImageElement_lowsrc( const HTMLImageElement *self);

void HTMLImageElement_set_lowsrc(HTMLImageElement* self, const jb_USVString* value);

jb_DOMString HTMLImageElement_align( const HTMLImageElement *self);

void HTMLImageElement_set_align(HTMLImageElement* self, const jb_DOMString* value);

unsigned long HTMLImageElement_hspace( const HTMLImageElement *self);

void HTMLImageElement_set_hspace(HTMLImageElement* self, unsigned long value);

unsigned long HTMLImageElement_vspace( const HTMLImageElement *self);

void HTMLImageElement_set_vspace(HTMLImageElement* self, unsigned long value);

jb_USVString HTMLImageElement_longDesc( const HTMLImageElement *self);

void HTMLImageElement_set_longDesc(HTMLImageElement* self, const jb_USVString* value);

jb_DOMString HTMLImageElement_border( const HTMLImageElement *self);

void HTMLImageElement_set_border(HTMLImageElement* self, const jb_DOMString* value);

jb_USVString HTMLImageElement_attributionSrc( const HTMLImageElement *self);

void HTMLImageElement_set_attributionSrc(HTMLImageElement* self, const jb_USVString* value);

bool HTMLImageElement_sharedStorageWritable( const HTMLImageElement *self);

void HTMLImageElement_set_sharedStorageWritable(HTMLImageElement* self, bool value);
