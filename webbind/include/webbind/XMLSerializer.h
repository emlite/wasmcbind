#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;


typedef struct {
  em_Val inner;
} XMLSerializer;


DECLARE_EMLITE_TYPE(XMLSerializer, em_Val);

XMLSerializer XMLSerializer_new();

jb_DOMString XMLSerializer_serializeToString(XMLSerializer* self , const Node* root);
