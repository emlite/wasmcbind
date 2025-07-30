#include <webbind/Text.h>
#include <webbind/DOMQuad.h>
#include <webbind/Document.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/HTMLSlotElement.h>


DEFINE_EMLITE_TYPE(Text, CharacterData);


Text Text_new0() {
        em_Val vv = em_Val_new(em_Val_global("Text") );
        return Text_from_val(&vv);
      }


Text Text_new1(jb_String * data) {
        em_Val vv = em_Val_new(em_Val_global("Text") , em_Val_from(data));
        return Text_from_val(&vv);
      }


Text Text_splitText(Text* self , unsigned long offset) {
    return em_Val_as(Text, em_Val_call(CharacterData_as_val(self->inner), "splitText", em_Val_from(offset)));
}


jb_String Text_wholeText(const Text *self) {
    return em_Val_as(jb_String, em_Val_get(CharacterData_as_val(self->inner), em_Val_from("wholeText")));
}


jb_Array Text_getBoxQuads0(Text* self ) {
    return em_Val_as(jb_Array, em_Val_call(CharacterData_as_val(self->inner), "getBoxQuads"));
}


jb_Array Text_getBoxQuads1(Text* self , BoxQuadOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(CharacterData_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Text_convertQuadFromNode0(Text* self , DOMQuadInit * quad, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Text_convertQuadFromNode1(Text* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Text_convertRectFromNode0(Text* self , DOMRectReadOnly * rect, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Text_convertRectFromNode1(Text* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Text_convertPointFromNode0(Text* self , DOMPointInit * point, jb_Any * from) {
    return em_Val_as(DOMPoint, em_Val_call(CharacterData_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Text_convertPointFromNode1(Text* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMPoint, em_Val_call(CharacterData_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


HTMLSlotElement Text_assignedSlot(const Text *self) {
    return em_Val_as(HTMLSlotElement, em_Val_get(CharacterData_as_val(self->inner), em_Val_from("assignedSlot")));
}

