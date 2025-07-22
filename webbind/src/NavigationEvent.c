#include <webbind/NavigationEvent.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(NavigationEvent, UIEvent);


NavigationEvent NavigationEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("NavigationEvent").new_(em_Val_from(type))) {
        return NavigationEvent(em_Val_new(em_Val_global("NavigationEvent", em_Val_from(type)));
      }


NavigationEvent NavigationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("NavigationEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return NavigationEvent(em_Val_new(em_Val_global("NavigationEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


SpatialNavigationDirection NavigationEvent_dir(const NavigationEvent *self) {
    return em_Val_as(SpatialNavigationDirection, em_Val_get(UIEvent_as_val(self->inner), "dir"));
}


EventTarget NavigationEvent_relatedTarget(const NavigationEvent *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEvent_as_val(self->inner), "relatedTarget"));
}

