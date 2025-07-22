#include <webbind/XRAnchor.h>
#include <webbind/XRSpace.h>


DEFINE_EMLITE_TYPE(XRAnchor, em_Val);


XRSpace XRAnchor_anchorSpace(const XRAnchor *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anchorSpace")));
}


jb_Promise XRAnchor_requestPersistentHandle(XRAnchor* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPersistentHandle"));
}


jb_Undefined XRAnchor_delete_(XRAnchor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete"));
}

