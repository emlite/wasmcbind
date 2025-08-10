#include <webbind/TextFormatUpdateEvent.h>

#include <webbind/TextFormatUpdateEventInit.h>
#include <webbind/TextFormat.h>

DEFINE_EMLITE_TYPE(TextFormatUpdateEvent, Event);


TextFormatUpdateEvent TextFormatUpdateEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("TextFormatUpdateEvent") , em_Val_from(type));
        return TextFormatUpdateEvent_from_val(&vv);
      }


TextFormatUpdateEvent TextFormatUpdateEvent_new1(jb_String * type, TextFormatUpdateEventInit * options) {
        em_Val vv = em_Val_new(em_Val_global("TextFormatUpdateEvent") , em_Val_from(type), em_Val_from(options));
        return TextFormatUpdateEvent_from_val(&vv);
      }


jb_Array TextFormatUpdateEvent_getTextFormats(TextFormatUpdateEvent* self ) {
    return em_Val_as(jb_Array, em_Val_call(Event_as_val(self->inner), "getTextFormats"));
}

