#include <webbind/DocumentType.h>

DEFINE_EMLITE_TYPE(DocumentType, Node);


jb_String DocumentType_name(const DocumentType *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("name")));
}


jb_String DocumentType_publicId(const DocumentType *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("publicId")));
}


jb_String DocumentType_systemId(const DocumentType *self) {
    return em_Val_as(jb_String, em_Val_get(Node_as_val(self->inner), em_Val_from("systemId")));
}


jb_Undefined DocumentType_before(DocumentType* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined DocumentType_after(DocumentType* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined DocumentType_replaceWith(DocumentType* self , jb_Any * nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined DocumentType_remove(DocumentType* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}

