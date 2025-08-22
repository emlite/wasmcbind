#include <webcbind/FontFaceSetLoadEvent.h>

#include <webcbind/FontFaceSetLoadEventInit.h>
#include <webcbind/FontFace.h>

DEFINE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);


FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("FontFaceSetLoadEvent") , em_Val_from(type));
        return FontFaceSetLoadEvent_from_val(&vv);
      }


FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_String * type, FontFaceSetLoadEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("FontFaceSetLoadEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return FontFaceSetLoadEvent_from_val(&vv);
      }


jb_Array FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("fontfaces")));
}

