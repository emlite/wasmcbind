#include <webbind/Selection.h>
#include <webbind/Node.h>
#include <webbind/Range.h>
#include <webbind/StaticRange.h>
#include <webbind/ShadowRoot.h>


DEFINE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);


jb_Array GetComposedRangesOptions_shadowRoots(const GetComposedRangesOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Selection, em_Val);


Node Selection_anchorNode(const Selection *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anchorNode")));
}


unsigned long Selection_anchorOffset(const Selection *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anchorOffset")));
}


Node Selection_focusNode(const Selection *self) {
    return em_Val_as(Node, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusNode")));
}


unsigned long Selection_focusOffset(const Selection *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusOffset")));
}


bool Selection_isCollapsed(const Selection *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isCollapsed")));
}


unsigned long Selection_rangeCount(const Selection *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeCount")));
}


jb_String Selection_type(const Selection *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_String Selection_direction(const Selection *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


Range Selection_getRangeAt(Selection* self , unsigned long index) {
    return em_Val_as(Range, em_Val_call(em_Val_as_val(self->inner), "getRangeAt", em_Val_from(index)));
}


jb_Undefined Selection_addRange(Selection* self , Range * range) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addRange", em_Val_from(range)));
}


jb_Undefined Selection_removeRange(Selection* self , Range * range) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeRange", em_Val_from(range)));
}


jb_Undefined Selection_removeAllRanges(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeAllRanges"));
}


jb_Undefined Selection_empty(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "empty"));
}


jb_Array Selection_getComposedRanges0(Selection* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getComposedRanges"));
}


jb_Array Selection_getComposedRanges1(Selection* self , GetComposedRangesOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getComposedRanges", em_Val_from(options)));
}


jb_Undefined Selection_collapse0(Selection* self , Node * node) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "collapse", em_Val_from(node)));
}


jb_Undefined Selection_collapse1(Selection* self , Node * node, unsigned long offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "collapse", em_Val_from(node), em_Val_from(offset)));
}


jb_Undefined Selection_setPosition0(Selection* self , Node * node) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPosition", em_Val_from(node)));
}


jb_Undefined Selection_setPosition1(Selection* self , Node * node, unsigned long offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPosition", em_Val_from(node), em_Val_from(offset)));
}


jb_Undefined Selection_collapseToStart(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "collapseToStart"));
}


jb_Undefined Selection_collapseToEnd(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "collapseToEnd"));
}


jb_Undefined Selection_extend0(Selection* self , Node * node) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "extend", em_Val_from(node)));
}


jb_Undefined Selection_extend1(Selection* self , Node * node, unsigned long offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "extend", em_Val_from(node), em_Val_from(offset)));
}


jb_Undefined Selection_setBaseAndExtent(Selection* self , Node * anchorNode, unsigned long anchorOffset, Node * focusNode, unsigned long focusOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBaseAndExtent", em_Val_from(anchorNode), em_Val_from(anchorOffset), em_Val_from(focusNode), em_Val_from(focusOffset)));
}


jb_Undefined Selection_selectAllChildren(Selection* self , Node * node) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "selectAllChildren", em_Val_from(node)));
}


jb_Undefined Selection_modify0(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "modify"));
}


jb_Undefined Selection_modify1(Selection* self , jb_String * alter) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "modify", em_Val_from(alter)));
}


jb_Undefined Selection_modify2(Selection* self , jb_String * alter, jb_String * direction) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "modify", em_Val_from(alter), em_Val_from(direction)));
}


jb_Undefined Selection_modify3(Selection* self , jb_String * alter, jb_String * direction, jb_String * granularity) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "modify", em_Val_from(alter), em_Val_from(direction), em_Val_from(granularity)));
}


jb_Undefined Selection_deleteFromDocument(Selection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteFromDocument"));
}


bool Selection_containsNode0(Selection* self , Node * node) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "containsNode", em_Val_from(node)));
}


bool Selection_containsNode1(Selection* self , Node * node, bool allowPartialContainment) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "containsNode", em_Val_from(node), em_Val_from(allowPartialContainment)));
}

