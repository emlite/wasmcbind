#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

typedef struct Element Element;
typedef struct HTMLCollection HTMLCollection;
typedef struct NodeList NodeList;


typedef struct {
  Node inner;
} DocumentFragment;


DECLARE_EMLITE_TYPE(DocumentFragment, Node);

DocumentFragment DocumentFragment_new();

Element DocumentFragment_getElementById(DocumentFragment* self , const jb_DOMString* elementId);

HTMLCollection DocumentFragment_children( const DocumentFragment *self);

Element DocumentFragment_firstElementChild( const DocumentFragment *self);

Element DocumentFragment_lastElementChild( const DocumentFragment *self);

unsigned long DocumentFragment_childElementCount( const DocumentFragment *self);

jb_Undefined DocumentFragment_prepend(DocumentFragment* self , const jb_Any* nodes);

jb_Undefined DocumentFragment_append(DocumentFragment* self , const jb_Any* nodes);

jb_Undefined DocumentFragment_replaceChildren(DocumentFragment* self , const jb_Any* nodes);

jb_Undefined DocumentFragment_moveBefore(DocumentFragment* self , const Node* node, const Node* child);

Element DocumentFragment_querySelector(DocumentFragment* self , const jb_DOMString* selectors);

NodeList DocumentFragment_querySelectorAll(DocumentFragment* self , const jb_DOMString* selectors);
