#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Element.h"
#include "SVGElement.h"
#include "enums.h"

typedef struct ElementInternals ElementInternals;
typedef struct ShowPopoverOptions ShowPopoverOptions;
typedef struct EditContext EditContext;
typedef struct CSSStyleDeclaration CSSStyleDeclaration;
typedef struct DOMStringMap DOMStringMap;
typedef struct HTMLElement HTMLElement;


typedef struct {
  em_Val inner;
} ShowPopoverOptions;


DECLARE_EMLITE_TYPE(ShowPopoverOptions, em_Val);

HTMLElement ShowPopoverOptions_source( const ShowPopoverOptions *self);

void ShowPopoverOptions_set_source(ShowPopoverOptions* self, const HTMLElement* value);
typedef struct {
  Element inner;
} HTMLElement;


DECLARE_EMLITE_TYPE(HTMLElement, Element);

HTMLElement HTMLElement_new();

jb_DOMString HTMLElement_title( const HTMLElement *self);

void HTMLElement_set_title(HTMLElement* self, const jb_DOMString* value);

jb_DOMString HTMLElement_lang( const HTMLElement *self);

void HTMLElement_set_lang(HTMLElement* self, const jb_DOMString* value);

bool HTMLElement_translate( const HTMLElement *self);

void HTMLElement_set_translate(HTMLElement* self, bool value);

jb_DOMString HTMLElement_dir( const HTMLElement *self);

void HTMLElement_set_dir(HTMLElement* self, const jb_DOMString* value);

jb_Any HTMLElement_hidden( const HTMLElement *self);

void HTMLElement_set_hidden(HTMLElement* self, const jb_Any* value);

bool HTMLElement_inert( const HTMLElement *self);

void HTMLElement_set_inert(HTMLElement* self, bool value);

jb_Undefined HTMLElement_click(HTMLElement* self );

jb_DOMString HTMLElement_accessKey( const HTMLElement *self);

void HTMLElement_set_accessKey(HTMLElement* self, const jb_DOMString* value);

jb_DOMString HTMLElement_accessKeyLabel( const HTMLElement *self);

bool HTMLElement_draggable( const HTMLElement *self);

void HTMLElement_set_draggable(HTMLElement* self, bool value);

bool HTMLElement_spellcheck( const HTMLElement *self);

void HTMLElement_set_spellcheck(HTMLElement* self, bool value);

jb_DOMString HTMLElement_writingSuggestions( const HTMLElement *self);

void HTMLElement_set_writingSuggestions(HTMLElement* self, const jb_DOMString* value);

jb_DOMString HTMLElement_autocapitalize( const HTMLElement *self);

void HTMLElement_set_autocapitalize(HTMLElement* self, const jb_DOMString* value);

bool HTMLElement_autocorrect( const HTMLElement *self);

void HTMLElement_set_autocorrect(HTMLElement* self, bool value);

jb_DOMString HTMLElement_innerText( const HTMLElement *self);

void HTMLElement_set_innerText(HTMLElement* self, const jb_DOMString* value);

jb_DOMString HTMLElement_outerText( const HTMLElement *self);

void HTMLElement_set_outerText(HTMLElement* self, const jb_DOMString* value);

ElementInternals HTMLElement_attachInternals(HTMLElement* self );

jb_Undefined HTMLElement_showPopover(HTMLElement* self );

jb_Undefined HTMLElement_showPopover(HTMLElement* self , const ShowPopoverOptions* options);

jb_Undefined HTMLElement_hidePopover(HTMLElement* self );

bool HTMLElement_togglePopover(HTMLElement* self );

bool HTMLElement_togglePopover(HTMLElement* self , const jb_Any* options);

jb_DOMString HTMLElement_popover( const HTMLElement *self);

void HTMLElement_set_popover(HTMLElement* self, const jb_DOMString* value);

Element HTMLElement_scrollParent( const HTMLElement *self);

Element HTMLElement_offsetParent( const HTMLElement *self);

long HTMLElement_offsetTop( const HTMLElement *self);

long HTMLElement_offsetLeft( const HTMLElement *self);

long HTMLElement_offsetWidth( const HTMLElement *self);

long HTMLElement_offsetHeight( const HTMLElement *self);

EditContext HTMLElement_editContext( const HTMLElement *self);

void HTMLElement_set_editContext(HTMLElement* self, const EditContext* value);

CSSStyleProperties HTMLElement_style( const HTMLElement *self);

jb_Any HTMLElement_onbeforexrselect( const HTMLElement *self);

void HTMLElement_set_onbeforexrselect(HTMLElement* self, const jb_Any* value);

jb_DOMString HTMLElement_virtualKeyboardPolicy( const HTMLElement *self);

void HTMLElement_set_virtualKeyboardPolicy(HTMLElement* self, const jb_DOMString* value);

DOMStringMap HTMLElement_dataset( const HTMLElement *self);

jb_DOMString HTMLElement_nonce( const HTMLElement *self);

void HTMLElement_set_nonce(HTMLElement* self, const jb_DOMString* value);

bool HTMLElement_autofocus( const HTMLElement *self);

void HTMLElement_set_autofocus(HTMLElement* self, bool value);

long HTMLElement_tabIndex( const HTMLElement *self);

void HTMLElement_set_tabIndex(HTMLElement* self, long value);

jb_Undefined HTMLElement_focus(HTMLElement* self );

jb_Undefined HTMLElement_focus(HTMLElement* self , const FocusOptions* options);

jb_Undefined HTMLElement_blur(HTMLElement* self );
