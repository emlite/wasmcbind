#include <webbind/FontFaceSetLoadEvent.h>
#include <webbind/FontFace.h>


DEFINE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);


FontFaceSetLoadEvent FontFaceSetLoadEvent_new(const jb_CSSOMString* type) : Event(em_Val_global("FontFaceSetLoadEvent").new_(em_Val_from(type))) {
        return FontFaceSetLoadEvent(em_Val_new(em_Val_global("FontFaceSetLoadEvent", em_Val_from(type)));
      }


FontFaceSetLoadEvent FontFaceSetLoadEvent_new(const jb_CSSOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("FontFaceSetLoadEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return FontFaceSetLoadEvent(em_Val_new(em_Val_global("FontFaceSetLoadEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_FrozenArray FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "fontfaces"));
}

