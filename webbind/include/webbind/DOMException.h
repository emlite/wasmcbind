#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} DOMException;


DECLARE_EMLITE_TYPE(DOMException, em_Val);

DOMException DOMException_new();

DOMException DOMException_new(const jb_DOMString* message);

DOMException DOMException_new(const jb_DOMString* message, const jb_DOMString* name);

jb_DOMString DOMException_name( const DOMException *self);

jb_DOMString DOMException_message( const DOMException *self);

unsigned short DOMException_code( const DOMException *self);
