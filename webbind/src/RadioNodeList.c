#include <webbind/RadioNodeList.h>


DEFINE_EMLITE_TYPE(RadioNodeList, NodeList);


jb_DOMString RadioNodeList_value(const RadioNodeList *self) {
    return em_Val_as(jb_DOMString, em_Val_get(NodeList_as_val(self->inner), "value"));
}


void RadioNodeList_set_value(RadioNodeList* self, const jb_DOMString* value) {
    em_Val_set(NodeList_as_val(self->inner), "value", value);
}

