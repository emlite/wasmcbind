#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLTableCellElement;


DECLARE_EMLITE_TYPE(HTMLTableCellElement, HTMLElement);

HTMLTableCellElement HTMLTableCellElement_new();

unsigned long HTMLTableCellElement_colSpan( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_colSpan(HTMLTableCellElement* self, unsigned long value);

unsigned long HTMLTableCellElement_rowSpan( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_rowSpan(HTMLTableCellElement* self, unsigned long value);

jb_DOMString HTMLTableCellElement_headers( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_headers(HTMLTableCellElement* self, const jb_DOMString* value);

long HTMLTableCellElement_cellIndex( const HTMLTableCellElement *self);

jb_DOMString HTMLTableCellElement_scope( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_scope(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_abbr( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_abbr(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_align( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_align(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_axis( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_axis(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_height( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_height(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_width( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_width(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_ch( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_ch(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_chOff( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_chOff(HTMLTableCellElement* self, const jb_DOMString* value);

bool HTMLTableCellElement_noWrap( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_noWrap(HTMLTableCellElement* self, bool value);

jb_DOMString HTMLTableCellElement_vAlign( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_vAlign(HTMLTableCellElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableCellElement_bgColor( const HTMLTableCellElement *self);

void HTMLTableCellElement_set_bgColor(HTMLTableCellElement* self, const jb_DOMString* value);
