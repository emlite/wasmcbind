#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLDialogElement;


DECLARE_EMLITE_TYPE(HTMLDialogElement, HTMLElement);

HTMLDialogElement HTMLDialogElement_new();

bool HTMLDialogElement_open( const HTMLDialogElement *self);

void HTMLDialogElement_set_open(HTMLDialogElement* self, bool value);

jb_DOMString HTMLDialogElement_returnValue( const HTMLDialogElement *self);

void HTMLDialogElement_set_returnValue(HTMLDialogElement* self, const jb_DOMString* value);

jb_DOMString HTMLDialogElement_closedBy( const HTMLDialogElement *self);

void HTMLDialogElement_set_closedBy(HTMLDialogElement* self, const jb_DOMString* value);

jb_Undefined HTMLDialogElement_show(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_showModal(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_close(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_close(HTMLDialogElement* self , const jb_DOMString* returnValue);

jb_Undefined HTMLDialogElement_requestClose(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_requestClose(HTMLDialogElement* self , const jb_DOMString* returnValue);
