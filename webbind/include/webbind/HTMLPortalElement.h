#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "MessagePort.h"
#include "enums.h"

typedef struct PortalActivateOptions PortalActivateOptions;


typedef struct {
  em_Val inner;
} PortalActivateOptions;


DECLARE_EMLITE_TYPE(PortalActivateOptions, em_Val);

jb_Any PortalActivateOptions_data( const PortalActivateOptions *self);

void PortalActivateOptions_set_data(PortalActivateOptions* self, const jb_Any* value);
typedef struct {
  HTMLElement inner;
} HTMLPortalElement;


DECLARE_EMLITE_TYPE(HTMLPortalElement, HTMLElement);

HTMLPortalElement HTMLPortalElement_new();

jb_USVString HTMLPortalElement_src( const HTMLPortalElement *self);

void HTMLPortalElement_set_src(HTMLPortalElement* self, const jb_USVString* value);

jb_DOMString HTMLPortalElement_referrerPolicy( const HTMLPortalElement *self);

void HTMLPortalElement_set_referrerPolicy(HTMLPortalElement* self, const jb_DOMString* value);

jb_Promise HTMLPortalElement_activate(HTMLPortalElement* self );

jb_Promise HTMLPortalElement_activate(HTMLPortalElement* self , const PortalActivateOptions* options);

jb_Undefined HTMLPortalElement_postMessage(HTMLPortalElement* self , const jb_Any* message);

jb_Undefined HTMLPortalElement_postMessage(HTMLPortalElement* self , const jb_Any* message, const StructuredSerializeOptions* options);

jb_Any HTMLPortalElement_onmessage( const HTMLPortalElement *self);

void HTMLPortalElement_set_onmessage(HTMLPortalElement* self, const jb_Any* value);

jb_Any HTMLPortalElement_onmessageerror( const HTMLPortalElement *self);

void HTMLPortalElement_set_onmessageerror(HTMLPortalElement* self, const jb_Any* value);
