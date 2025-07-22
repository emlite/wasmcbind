#include <webbind/DocumentType.h>


DEFINE_EMLITE_TYPE(DocumentType, Node);


jb_DOMString DocumentType_name(const DocumentType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "name"));
}


jb_DOMString DocumentType_publicId(const DocumentType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "publicId"));
}


jb_DOMString DocumentType_systemId(const DocumentType *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Node_as_val(self->inner), "systemId"));
}


jb_Undefined DocumentType_before(DocumentType* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "before", em_Val_from(nodes)));
}


jb_Undefined DocumentType_after(DocumentType* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "after", em_Val_from(nodes)));
}


jb_Undefined DocumentType_replaceWith(DocumentType* self , const jb_Any* nodes) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "replaceWith", em_Val_from(nodes)));
}


jb_Undefined DocumentType_remove(DocumentType* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Node_as_val(self->inner), "remove"));
}

