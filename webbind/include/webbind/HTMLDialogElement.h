#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(HTMLDialogElement, HTMLElement);

HTMLDialogElement HTMLDialogElement_new();

bool HTMLDialogElement_open( const HTMLDialogElement *self);

void HTMLDialogElement_set_open(HTMLDialogElement* self, bool value);

jb_DOMString HTMLDialogElement_returnValue( const HTMLDialogElement *self);

void HTMLDialogElement_set_returnValue(HTMLDialogElement* self, jb_DOMString * value);

jb_DOMString HTMLDialogElement_closedBy( const HTMLDialogElement *self);

void HTMLDialogElement_set_closedBy(HTMLDialogElement* self, jb_DOMString * value);

jb_Undefined HTMLDialogElement_show(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_showModal(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_close0(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_close1(HTMLDialogElement* self , jb_DOMString * returnValue);

jb_Undefined HTMLDialogElement_requestClose0(HTMLDialogElement* self );

jb_Undefined HTMLDialogElement_requestClose1(HTMLDialogElement* self , jb_DOMString * returnValue);
