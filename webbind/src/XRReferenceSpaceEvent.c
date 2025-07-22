#include <webbind/XRReferenceSpaceEvent.h>
#include <webbind/XRReferenceSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRReferenceSpaceEvent, Event);


XRReferenceSpaceEvent XRReferenceSpaceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("XRReferenceSpaceEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return XRReferenceSpaceEvent(em_Val_new(em_Val_global("XRReferenceSpaceEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


XRReferenceSpace XRReferenceSpaceEvent_referenceSpace(const XRReferenceSpaceEvent *self) {
    return em_Val_as(XRReferenceSpace, em_Val_get(Event_as_val(self->inner), "referenceSpace"));
}


XRRigidTransform XRReferenceSpaceEvent_transform(const XRReferenceSpaceEvent *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(Event_as_val(self->inner), "transform"));
}

