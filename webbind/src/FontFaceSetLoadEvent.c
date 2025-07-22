#include <webbind/FontFaceSetLoadEvent.h>
#include <webbind/FontFace.h>


DEFINE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);


FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_CSSOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("FontFaceSetLoadEvent") , em_Val_from(type));
        return FontFaceSetLoadEvent_from_val(&vv);
      }


FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_CSSOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("FontFaceSetLoadEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return FontFaceSetLoadEvent_from_val(&vv);
      }


jb_FrozenArray FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), em_Val_from("fontfaces")));
}

