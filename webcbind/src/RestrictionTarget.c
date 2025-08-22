#include <webcbind/RestrictionTarget.h>

#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(RestrictionTarget, em_Val);


jb_Promise RestrictionTarget_fromElement(RestrictionTarget* self , Element * element) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("restrictiontarget"), "fromElement", em_Val_from(element)));
}

