#include <webbind/ContentIndexEvent.h>


DEFINE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);


ContentIndexEvent ContentIndexEvent_new(const jb_DOMString* type, const jb_Any* init) : ExtendableEvent(em_Val_global("ContentIndexEvent").new_(em_Val_from(type), em_Val_from(init))) {
        return ContentIndexEvent(em_Val_new(em_Val_global("ContentIndexEvent", em_Val_from(type), em_Val_from(init)));
      }


jb_DOMString ContentIndexEvent_id(const ContentIndexEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "id"));
}

