#include <webcbind/WindowPostMessageOptions.h>

DEFINE_EMLITE_TYPE(WindowPostMessageOptions, StructuredSerializeOptions);


jb_String WindowPostMessageOptions_targetOrigin(const WindowPostMessageOptions *self) {
    return em_Val_as(jb_String, em_Val_get(StructuredSerializeOptions_as_val(self->inner), em_Val_from("targetOrigin")));
}


void WindowPostMessageOptions_set_targetOrigin(WindowPostMessageOptions* self, jb_String * value) {
    em_Val_set(StructuredSerializeOptions_as_val(self->inner), em_Val_from("targetOrigin"), em_Val_from(value));
}


WindowPostMessageOptions WindowPostMessageOptions_new() {
    em_Val obj = em_Val_object();
    return WindowPostMessageOptions_from_val(&obj);
}

