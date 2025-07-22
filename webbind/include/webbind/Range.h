#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbstractRange.h"
#include "enums.h"

typedef struct Node Node;
typedef struct Range Range;
typedef struct DocumentFragment DocumentFragment;
typedef struct DOMRectList DOMRectList;
typedef struct DOMRect DOMRect;


typedef struct {
  AbstractRange inner;
} Range;


DECLARE_EMLITE_TYPE(Range, AbstractRange);

Range Range_new();

Node Range_commonAncestorContainer( const Range *self);

jb_Undefined Range_setStart(Range* self , const Node* node, unsigned long offset);

jb_Undefined Range_setEnd(Range* self , const Node* node, unsigned long offset);

jb_Undefined Range_setStartBefore(Range* self , const Node* node);

jb_Undefined Range_setStartAfter(Range* self , const Node* node);

jb_Undefined Range_setEndBefore(Range* self , const Node* node);

jb_Undefined Range_setEndAfter(Range* self , const Node* node);

jb_Undefined Range_collapse(Range* self );

jb_Undefined Range_collapse(Range* self , bool toStart);

jb_Undefined Range_selectNode(Range* self , const Node* node);

jb_Undefined Range_selectNodeContents(Range* self , const Node* node);

short Range_compareBoundaryPoints(Range* self , unsigned short how, const Range* sourceRange);

jb_Undefined Range_deleteContents(Range* self );

DocumentFragment Range_extractContents(Range* self );

DocumentFragment Range_cloneContents(Range* self );

jb_Undefined Range_insertNode(Range* self , const Node* node);

jb_Undefined Range_surroundContents(Range* self , const Node* newParent);

Range Range_cloneRange(Range* self );

jb_Undefined Range_detach(Range* self );

bool Range_isPointInRange(Range* self , const Node* node, unsigned long offset);

short Range_comparePoint(Range* self , const Node* node, unsigned long offset);

bool Range_intersectsNode(Range* self , const Node* node);

DOMRectList Range_getClientRects(Range* self );

DOMRect Range_getBoundingClientRect(Range* self );

DocumentFragment Range_createContextualFragment(Range* self , const jb_Any* string);
