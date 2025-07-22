#include <webbind/XRReferenceSpaceEvent.h>
#include <webbind/XRReferenceSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRReferenceSpaceEvent, Event);


XRReferenceSpaceEvent XRReferenceSpaceEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("XRReferenceSpaceEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return XRReferenceSpaceEvent_from_val(&vv);
      }


XRReferenceSpace XRReferenceSpaceEvent_referenceSpace(const XRReferenceSpaceEvent *self) {
    return em_Val_as(XRReferenceSpace, em_Val_get(Event_as_val(self->inner), em_Val_from("referenceSpace")));
}


XRRigidTransform XRReferenceSpaceEvent_transform(const XRReferenceSpaceEvent *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(Event_as_val(self->inner), em_Val_from("transform")));
}

