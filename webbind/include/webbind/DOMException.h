#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(DOMException, em_Val);

DOMException DOMException_new0();

DOMException DOMException_new1(jb_DOMString * message);

DOMException DOMException_new2(jb_DOMString * message, jb_DOMString * name);

jb_DOMString DOMException_name(const DOMException *self);

jb_DOMString DOMException_message(const DOMException *self);

unsigned short DOMException_code(const DOMException *self);
