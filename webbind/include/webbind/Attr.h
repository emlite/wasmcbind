#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

typedef struct Element Element;


DECLARE_EMLITE_TYPE(Attr, Node);

jb_DOMString Attr_namespaceURI(const Attr *self);

jb_DOMString Attr_prefix(const Attr *self);

jb_DOMString Attr_localName(const Attr *self);

jb_DOMString Attr_name(const Attr *self);

jb_DOMString Attr_value(const Attr *self);

void Attr_set_value(Attr* self, jb_DOMString * value);

Element Attr_ownerElement(const Attr *self);

bool Attr_specified(const Attr *self);
