#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;


typedef struct {
  em_Val inner;
} NodeIterator;


DECLARE_EMLITE_TYPE(NodeIterator, em_Val);

Node NodeIterator_root( const NodeIterator *self);

Node NodeIterator_referenceNode( const NodeIterator *self);

bool NodeIterator_pointerBeforeReferenceNode( const NodeIterator *self);

unsigned long NodeIterator_whatToShow( const NodeIterator *self);

jb_Function NodeIterator_filter( const NodeIterator *self);

Node NodeIterator_nextNode(NodeIterator* self );

Node NodeIterator_previousNode(NodeIterator* self );

jb_Undefined NodeIterator_detach(NodeIterator* self );
