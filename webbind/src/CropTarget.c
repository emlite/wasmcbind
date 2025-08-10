#include <webbind/CropTarget.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(CropTarget, em_Val);


jb_Promise CropTarget_fromElement(CropTarget* self , Element * element) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("croptarget"), "fromElement", em_Val_from(element)));
}

