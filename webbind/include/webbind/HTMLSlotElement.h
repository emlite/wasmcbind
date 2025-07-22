#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct Node Node;
typedef struct AssignedNodesOptions AssignedNodesOptions;
typedef struct Element Element;


typedef struct {
  em_Val inner;
} AssignedNodesOptions;


DECLARE_EMLITE_TYPE(AssignedNodesOptions, em_Val);

bool AssignedNodesOptions_flatten( const AssignedNodesOptions *self);

void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value);
typedef struct {
  HTMLElement inner;
} HTMLSlotElement;


DECLARE_EMLITE_TYPE(HTMLSlotElement, HTMLElement);

HTMLSlotElement HTMLSlotElement_new();

jb_DOMString HTMLSlotElement_name( const HTMLSlotElement *self);

void HTMLSlotElement_set_name(HTMLSlotElement* self, const jb_DOMString* value);

jb_Sequence HTMLSlotElement_assignedNodes(HTMLSlotElement* self );

jb_Sequence HTMLSlotElement_assignedNodes(HTMLSlotElement* self , const AssignedNodesOptions* options);

jb_Sequence HTMLSlotElement_assignedElements(HTMLSlotElement* self );

jb_Sequence HTMLSlotElement_assignedElements(HTMLSlotElement* self , const AssignedNodesOptions* options);

jb_Undefined HTMLSlotElement_assign(HTMLSlotElement* self , const jb_Any* nodes);
