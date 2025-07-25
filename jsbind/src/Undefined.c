#include <jsbind/Undefined.h>

DEFINE_EMLITE_TYPE(jb_Undefined, em_Val);

jb_Undefined jb_Undefined_value() {
    return (jb_Undefined){.inner = em_Val_null()};
}