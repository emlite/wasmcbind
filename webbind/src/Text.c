#include <webbind/Text.h>
#include <webbind/DOMQuad.h>
#include <webbind/Document.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/HTMLSlotElement.h>


DEFINE_EMLITE_TYPE(Text, CharacterData);


Text Text_new() : CharacterData(em_Val_global("Text").new_()) {
        return Text(em_Val_new(em_Val_global("Text", ));
      }


Text Text_new(const jb_DOMString* data) : CharacterData(em_Val_global("Text").new_(em_Val_from(data))) {
        return Text(em_Val_new(em_Val_global("Text", em_Val_from(data)));
      }


Text Text_splitText(Text* self , unsigned long offset) {
    return em_Val_as(Text, em_Val_call(CharacterData_as_val(self->inner), "splitText", em_Val_from(offset)));
}


jb_DOMString Text_wholeText(const Text *self) {
    return em_Val_as(jb_DOMString, em_Val_get(CharacterData_as_val(self->inner), "wholeText"));
}


jb_Sequence Text_getBoxQuads(Text* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(CharacterData_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence Text_getBoxQuads(Text* self , const BoxQuadOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(CharacterData_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad Text_convertQuadFromNode(Text* self , const DOMQuadInit* quad, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad Text_convertQuadFromNode(Text* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad Text_convertRectFromNode(Text* self , const DOMRectReadOnly* rect, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad Text_convertRectFromNode(Text* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(CharacterData_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint Text_convertPointFromNode(Text* self , const DOMPointInit* point, const jb_Any* from) {
    return em_Val_as(DOMPoint, em_Val_call(CharacterData_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint Text_convertPointFromNode(Text* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMPoint, em_Val_call(CharacterData_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}


HTMLSlotElement Text_assignedSlot(const Text *self) {
    return em_Val_as(HTMLSlotElement, em_Val_get(CharacterData_as_val(self->inner), "assignedSlot"));
}

