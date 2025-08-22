#include <webcbind/XRReferenceSpaceEventInit.h>

#include <webcbind/XRReferenceSpace.h>
#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRReferenceSpaceEventInit, EventInit);


XRReferenceSpace XRReferenceSpaceEventInit_referenceSpace(const XRReferenceSpaceEventInit *self) {
    return em_Val_as(XRReferenceSpace, em_Val_get(EventInit_as_val(self->inner), em_Val_from("referenceSpace")));
}


void XRReferenceSpaceEventInit_set_referenceSpace(XRReferenceSpaceEventInit* self, XRReferenceSpace * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("referenceSpace"), em_Val_from(value));
}


XRRigidTransform XRReferenceSpaceEventInit_transform(const XRReferenceSpaceEventInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(EventInit_as_val(self->inner), em_Val_from("transform")));
}


void XRReferenceSpaceEventInit_set_transform(XRReferenceSpaceEventInit* self, XRRigidTransform * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


XRReferenceSpaceEventInit XRReferenceSpaceEventInit_new() {
    em_Val obj = em_Val_object();
    return XRReferenceSpaceEventInit_from_val(&obj);
}

