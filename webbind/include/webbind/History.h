#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} History;


DECLARE_EMLITE_TYPE(History, em_Val);

unsigned long History_length( const History *self);

ScrollRestoration History_scrollRestoration( const History *self);

void History_set_scrollRestoration(History* self, const ScrollRestoration* value);

jb_Any History_state( const History *self);

jb_Undefined History_go(History* self );

jb_Undefined History_go(History* self , long delta);

jb_Undefined History_back(History* self );

jb_Undefined History_forward(History* self );

jb_Undefined History_pushState(History* self , const jb_Any* data, const jb_DOMString* unused);

jb_Undefined History_pushState(History* self , const jb_Any* data, const jb_DOMString* unused, const jb_USVString* url);

jb_Undefined History_replaceState(History* self , const jb_Any* data, const jb_DOMString* unused);

jb_Undefined History_replaceState(History* self , const jb_Any* data, const jb_DOMString* unused, const jb_USVString* url);
