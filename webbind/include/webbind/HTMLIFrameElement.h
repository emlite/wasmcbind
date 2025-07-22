#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct DOMTokenList DOMTokenList;
typedef struct Document Document;
typedef struct PermissionsPolicy PermissionsPolicy;


typedef struct {
  HTMLElement inner;
} HTMLIFrameElement;


DECLARE_EMLITE_TYPE(HTMLIFrameElement, HTMLElement);

HTMLIFrameElement HTMLIFrameElement_new();

jb_USVString HTMLIFrameElement_src( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_src(HTMLIFrameElement* self, const jb_USVString* value);

jb_Any HTMLIFrameElement_srcdoc( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_srcdoc(HTMLIFrameElement* self, const jb_Any* value);

jb_DOMString HTMLIFrameElement_name( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_name(HTMLIFrameElement* self, const jb_DOMString* value);

DOMTokenList HTMLIFrameElement_sandbox( const HTMLIFrameElement *self);

jb_DOMString HTMLIFrameElement_allow( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_allow(HTMLIFrameElement* self, const jb_DOMString* value);

bool HTMLIFrameElement_allowFullscreen( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_allowFullscreen(HTMLIFrameElement* self, bool value);

jb_DOMString HTMLIFrameElement_width( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_width(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_height( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_height(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_referrerPolicy( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_referrerPolicy(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_loading( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_loading(HTMLIFrameElement* self, const jb_DOMString* value);

Document HTMLIFrameElement_contentDocument( const HTMLIFrameElement *self);

jb_Any HTMLIFrameElement_contentWindow( const HTMLIFrameElement *self);

Document HTMLIFrameElement_getSVGDocument(HTMLIFrameElement* self );

bool HTMLIFrameElement_credentialless( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_credentialless(HTMLIFrameElement* self, bool value);

jb_DOMString HTMLIFrameElement_csp( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_csp(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_align( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_align(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_scrolling( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_scrolling(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_frameBorder( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_frameBorder(HTMLIFrameElement* self, const jb_DOMString* value);

jb_USVString HTMLIFrameElement_longDesc( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_longDesc(HTMLIFrameElement* self, const jb_USVString* value);

jb_DOMString HTMLIFrameElement_marginHeight( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_marginHeight(HTMLIFrameElement* self, const jb_DOMString* value);

jb_DOMString HTMLIFrameElement_marginWidth( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_marginWidth(HTMLIFrameElement* self, const jb_DOMString* value);

PermissionsPolicy HTMLIFrameElement_permissionsPolicy( const HTMLIFrameElement *self);

jb_DOMString HTMLIFrameElement_privateToken( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_privateToken(HTMLIFrameElement* self, const jb_DOMString* value);

bool HTMLIFrameElement_adAuctionHeaders( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_adAuctionHeaders(HTMLIFrameElement* self, bool value);

bool HTMLIFrameElement_sharedStorageWritable( const HTMLIFrameElement *self);

void HTMLIFrameElement_set_sharedStorageWritable(HTMLIFrameElement* self, bool value);
