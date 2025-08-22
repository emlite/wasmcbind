#include <webcbind/RadioNodeList.h>

DEFINE_EMLITE_TYPE(RadioNodeList, NodeList);


jb_String RadioNodeList_value(const RadioNodeList *self) {
    return em_Val_as(jb_String, em_Val_get(NodeList_as_val(self->inner), em_Val_from("value")));
}


void RadioNodeList_set_value(RadioNodeList* self, jb_String * value) {
    em_Val_set(NodeList_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

