#include <webbind/CharacterData.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(CharacterData, Node);


jb_DOMString CharacterData_data(const CharacterData *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "data"));
}


void CharacterData_set_data(CharacterData* self, const jb_DOMString* value) {
    em_Val_set(Node_as_val(self->inner), "data", value);
}


unsigned long CharacterData_length(const CharacterData *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), "length"));
}


jb_DOMString CharacterData_substringData(CharacterData* self , unsigned long offset, unsigned long count) {
    return em_Val_as(jb_DOMString, em_Val_call(Node_as_val(self->inner), "substringData", em_Val_from(offset), em_Val_from(count)));
}


jb_Undefined CharacterData_appendData(CharacterData* self , const jb_DOMString* data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "appendData", em_Val_from(data)));
}


jb_Undefined CharacterData_insertData(CharacterData* self , unsigned long offset, const jb_DOMString* data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "insertData", em_Val_from(offset), em_Val_from(data)));
}


jb_Undefined CharacterData_deleteData(CharacterData* self , unsigned long offset, unsigned long count) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "deleteData", em_Val_from(offset), em_Val_from(count)));
}


jb_Undefined CharacterData_replaceData(CharacterData* self , unsigned long offset, unsigned long count, const jb_DOMString* data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceData", em_Val_from(offset), em_Val_from(count), em_Val_from(data)));
}


Element CharacterData_previousElementSibling(const CharacterData *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "previousElementSibling"));
}


Element CharacterData_nextElementSibling(const CharacterData *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), "nextElementSibling"));
}


jb_Undefined CharacterData_before(CharacterData* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined CharacterData_after(CharacterData* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined CharacterData_replaceWith(CharacterData* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined CharacterData_remove(CharacterData* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}

