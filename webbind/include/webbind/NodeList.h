#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;


typedef struct {
  em_Val inner;
} NodeList;


DECLARE_EMLITE_TYPE(NodeList, em_Val);

Node NodeList_item(NodeList* self , unsigned long index);

unsigned long NodeList_length( const NodeList *self);
