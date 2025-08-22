#include <webcbind/CharacterData.h>

#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(CharacterData, Node);


jb_String CharacterData_data(const CharacterData *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("data")));
}


void CharacterData_set_data(CharacterData* self, jb_String * value) {
    em_Val_set(Node_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


unsigned long CharacterData_length(const CharacterData *self) {
    return em_Val_as(unsigned long, em_Val_get(Node_as_val(self->inner), em_Val_from("length")));
}


jb_String CharacterData_substringData(CharacterData* self , unsigned long offset, unsigned long count) {
    return em_Val_as(jb_String, em_Val_call(Node_as_val(self->inner), "substringData", em_Val_from(offset), em_Val_from(count)));
}


jb_Undefined CharacterData_appendData(CharacterData* self , jb_String * data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "appendData", em_Val_from(data)));
}


jb_Undefined CharacterData_insertData(CharacterData* self , unsigned long offset, jb_String * data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "insertData", em_Val_from(offset), em_Val_from(data)));
}


jb_Undefined CharacterData_deleteData(CharacterData* self , unsigned long offset, unsigned long count) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "deleteData", em_Val_from(offset), em_Val_from(count)));
}


jb_Undefined CharacterData_replaceData(CharacterData* self , unsigned long offset, unsigned long count, jb_String * data) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceData", em_Val_from(offset), em_Val_from(count), em_Val_from(data)));
}


Element CharacterData_previousElementSibling(const CharacterData *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("previousElementSibling")));
}


Element CharacterData_nextElementSibling(const CharacterData *self) {
    return em_Val_as(Element, em_Val_get(Node_as_val(self->inner), em_Val_from("nextElementSibling")));
}


jb_Undefined CharacterData_before(CharacterData* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined CharacterData_after(CharacterData* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined CharacterData_replaceWith(CharacterData* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined CharacterData_remove(CharacterData* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}

