#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct HTMLTableCaptionElement HTMLTableCaptionElement;
typedef struct HTMLTableSectionElement HTMLTableSectionElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableRowElement HTMLTableRowElement;


typedef struct {
  HTMLElement inner;
} HTMLTableElement;


DECLARE_EMLITE_TYPE(HTMLTableElement, HTMLElement);

HTMLTableElement HTMLTableElement_new();

HTMLTableCaptionElement HTMLTableElement_caption( const HTMLTableElement *self);

void HTMLTableElement_set_caption(HTMLTableElement* self, const HTMLTableCaptionElement* value);

HTMLTableCaptionElement HTMLTableElement_createCaption(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteCaption(HTMLTableElement* self );

HTMLTableSectionElement HTMLTableElement_tHead( const HTMLTableElement *self);

void HTMLTableElement_set_tHead(HTMLTableElement* self, const HTMLTableSectionElement* value);

HTMLTableSectionElement HTMLTableElement_createTHead(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteTHead(HTMLTableElement* self );

HTMLTableSectionElement HTMLTableElement_tFoot( const HTMLTableElement *self);

void HTMLTableElement_set_tFoot(HTMLTableElement* self, const HTMLTableSectionElement* value);

HTMLTableSectionElement HTMLTableElement_createTFoot(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteTFoot(HTMLTableElement* self );

HTMLCollection HTMLTableElement_tBodies( const HTMLTableElement *self);

HTMLTableSectionElement HTMLTableElement_createTBody(HTMLTableElement* self );

HTMLCollection HTMLTableElement_rows( const HTMLTableElement *self);

HTMLTableRowElement HTMLTableElement_insertRow(HTMLTableElement* self );

HTMLTableRowElement HTMLTableElement_insertRow(HTMLTableElement* self , long index);

jb_Undefined HTMLTableElement_deleteRow(HTMLTableElement* self , long index);

jb_DOMString HTMLTableElement_align( const HTMLTableElement *self);

void HTMLTableElement_set_align(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_border( const HTMLTableElement *self);

void HTMLTableElement_set_border(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_frame( const HTMLTableElement *self);

void HTMLTableElement_set_frame(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_rules( const HTMLTableElement *self);

void HTMLTableElement_set_rules(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_summary( const HTMLTableElement *self);

void HTMLTableElement_set_summary(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_width( const HTMLTableElement *self);

void HTMLTableElement_set_width(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_bgColor( const HTMLTableElement *self);

void HTMLTableElement_set_bgColor(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_cellPadding( const HTMLTableElement *self);

void HTMLTableElement_set_cellPadding(HTMLTableElement* self, const jb_DOMString* value);

jb_DOMString HTMLTableElement_cellSpacing( const HTMLTableElement *self);

void HTMLTableElement_set_cellSpacing(HTMLTableElement* self, const jb_DOMString* value);
