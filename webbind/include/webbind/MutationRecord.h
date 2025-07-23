#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(MutationRecord, em_Val);

jb_DOMString MutationRecord_type(const MutationRecord *self);

Node MutationRecord_target(const MutationRecord *self);

NodeList MutationRecord_addedNodes(const MutationRecord *self);

NodeList MutationRecord_removedNodes(const MutationRecord *self);

Node MutationRecord_previousSibling(const MutationRecord *self);

Node MutationRecord_nextSibling(const MutationRecord *self);

jb_DOMString MutationRecord_attributeName(const MutationRecord *self);

jb_DOMString MutationRecord_attributeNamespace(const MutationRecord *self);

jb_DOMString MutationRecord_oldValue(const MutationRecord *self);
