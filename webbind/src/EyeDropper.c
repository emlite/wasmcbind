#include <webbind/EyeDropper.h>

#include <webbind/ColorSelectionResult.h>
#include <webbind/ColorSelectionOptions.h>

DEFINE_EMLITE_TYPE(EyeDropper, em_Val);


EyeDropper EyeDropper_new() {
        em_Val vv = em_Val_new(em_Val_global("EyeDropper") );
        return EyeDropper_from_val(&vv);
      }


jb_Promise EyeDropper_open0(EyeDropper* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open"));
}


jb_Promise EyeDropper_open1(EyeDropper* self , ColorSelectionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(options)));
}

