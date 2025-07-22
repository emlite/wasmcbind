#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableCellElement HTMLTableCellElement;


typedef struct {
  HTMLElement inner;
} HTMLTableRowElement;


DECLARE_EMLITE_TYPE(HTMLTableRowElement, HTMLElement);

HTMLTableRowElement HTMLTableRowElement_new();

long HTMLTableRowElement_rowIndex( const HTMLTableRowElement *self);

long HTMLTableRowElement_sectionRowIndex( const HTMLTableRowElement *self);

HTMLCollection HTMLTableRowElement_cells( const HTMLTableRowElement *self);

HTMLTableCellElement HTMLTableRowElement_insertCell(HTMLTableRowElement* self );

HTMLTableCellElement HTMLTableRowElement_insertCell(HTMLTableRowElement* self , long index);

jb_Undefined HTMLTableRowElement_deleteCell(HTMLTableRowElement* self , long index);

jb_DOMString HTMLTableRowElement_align( const HTMLTableRowElement *self);

void HTMLTableRowElement_set_align(HTMLTableRowElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableRowElement_ch( const HTMLTableRowElement *self);

void HTMLTableRowElement_set_ch(HTMLTableRowElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableRowElement_chOff( const HTMLTableRowElement *self);

void HTMLTableRowElement_set_chOff(HTMLTableRowElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableRowElement_vAlign( const HTMLTableRowElement *self);

void HTMLTableRowElement_set_vAlign(HTMLTableRowElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableRowElement_bgColor( const HTMLTableRowElement *self);

void HTMLTableRowElement_set_bgColor(HTMLTableRowElement* self, const jb_DOMString* value);
