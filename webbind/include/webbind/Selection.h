#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;
typedef struct Range Range;
typedef struct StaticRange StaticRange;
typedef struct GetComposedRangesOptions GetComposedRangesOptions;
typedef struct ShadowRoot ShadowRoot;


typedef struct {
  em_Val inner;
} GetComposedRangesOptions;


DECLARE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);

jb_Sequence GetComposedRangesOptions_shadowRoots( const GetComposedRangesOptions *self);

void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} Selection;


DECLARE_EMLITE_TYPE(Selection, em_Val);

Node Selection_anchorNode( const Selection *self);

unsigned long Selection_anchorOffset( const Selection *self);

Node Selection_focusNode( const Selection *self);

unsigned long Selection_focusOffset( const Selection *self);

bool Selection_isCollapsed( const Selection *self);

unsigned long Selection_rangeCount( const Selection *self);

jb_DOMString Selection_type( const Selection *self);

jb_DOMString Selection_direction( const Selection *self);

Range Selection_getRangeAt(Selection* self , unsigned long index);

jb_Undefined Selection_addRange(Selection* self , const Range* range);

jb_Undefined Selection_removeRange(Selection* self , const Range* range);

jb_Undefined Selection_removeAllRanges(Selection* self );

jb_Undefined Selection_empty(Selection* self );

jb_Sequence Selection_getComposedRanges(Selection* self );

jb_Sequence Selection_getComposedRanges(Selection* self , const GetComposedRangesOptions* options);

jb_Undefined Selection_collapse(Selection* self , const Node* node);

jb_Undefined Selection_collapse(Selection* self , const Node* node, unsigned long offset);

jb_Undefined Selection_setPosition(Selection* self , const Node* node);

jb_Undefined Selection_setPosition(Selection* self , const Node* node, unsigned long offset);

jb_Undefined Selection_collapseToStart(Selection* self );

jb_Undefined Selection_collapseToEnd(Selection* self );

jb_Undefined Selection_extend(Selection* self , const Node* node);

jb_Undefined Selection_extend(Selection* self , const Node* node, unsigned long offset);

jb_Undefined Selection_setBaseAndExtent(Selection* self , const Node* anchorNode, unsigned long anchorOffset, const Node* focusNode, unsigned long focusOffset);

jb_Undefined Selection_selectAllChildren(Selection* self , const Node* node);

jb_Undefined Selection_modify(Selection* self );

jb_Undefined Selection_modify(Selection* self , const jb_DOMString* alter);

jb_Undefined Selection_modify(Selection* self , const jb_DOMString* alter, const jb_DOMString* direction);

jb_Undefined Selection_modify(Selection* self , const jb_DOMString* alter, const jb_DOMString* direction, const jb_DOMString* granularity);

jb_Undefined Selection_deleteFromDocument(Selection* self );

bool Selection_containsNode(Selection* self , const Node* node);

bool Selection_containsNode(Selection* self , const Node* node, bool allowPartialContainment);
