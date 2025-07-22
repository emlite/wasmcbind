#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DocumentFragment DocumentFragment;


typedef struct {
  HTMLElement inner;
} HTMLTemplateElement;


DECLARE_EMLITE_TYPE(HTMLTemplateElement, HTMLElement);

HTMLTemplateElement HTMLTemplateElement_new();

DocumentFragment HTMLTemplateElement_content( const HTMLTemplateElement *self);

jb_DOMString HTMLTemplateElement_shadowRootMode( const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootMode(HTMLTemplateElement* self, const jb_DOMString* value);

bool HTMLTemplateElement_shadowRootDelegatesFocus( const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootDelegatesFocus(HTMLTemplateElement* self, bool value);

bool HTMLTemplateElement_shadowRootClonable( const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootClonable(HTMLTemplateElement* self, bool value);

bool HTMLTemplateElement_shadowRootSerializable( const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootSerializable(HTMLTemplateElement* self, bool value);

jb_DOMString HTMLTemplateElement_shadowRootCustomElementRegistry( const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootCustomElementRegistry(HTMLTemplateElement* self, const jb_DOMString* value);
