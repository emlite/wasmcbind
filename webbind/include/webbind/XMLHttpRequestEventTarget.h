#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} XMLHttpRequestEventTarget;


DECLARE_EMLITE_TYPE(XMLHttpRequestEventTarget, EventTarget);

jb_Any XMLHttpRequestEventTarget_onloadstart( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onloadstart(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_onprogress( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onprogress(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_onabort( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onabort(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_onerror( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onerror(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_onload( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onload(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_ontimeout( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_ontimeout(XMLHttpRequestEventTarget* self, const jb_Any* value);

jb_Any XMLHttpRequestEventTarget_onloadend( const XMLHttpRequestEventTarget *self);

void XMLHttpRequestEventTarget_set_onloadend(XMLHttpRequestEventTarget* self, const jb_Any* value);
