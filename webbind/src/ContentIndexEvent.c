#include <webbind/ContentIndexEvent.h>


DEFINE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);


ContentIndexEvent ContentIndexEvent_new(jb_DOMString * type, jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("ContentIndexEvent") , em_Val_from(type), em_Val_from(init));
        return ContentIndexEvent_from_val(&vv);
      }


jb_DOMString ContentIndexEvent_id(const ContentIndexEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("id")));
}

