#include <webbind/NavigationEvent.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(NavigationEvent, UIEvent);


NavigationEvent NavigationEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("NavigationEvent") , em_Val_from(type));
        return NavigationEvent_from_val(&vv);
      }


NavigationEvent NavigationEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("NavigationEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return NavigationEvent_from_val(&vv);
      }


SpatialNavigationDirection NavigationEvent_dir(const NavigationEvent *self) {
    return em_Val_as(SpatialNavigationDirection, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("dir")));
}


EventTarget NavigationEvent_relatedTarget(const NavigationEvent *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("relatedTarget")));
}

