#include <jsbind/Null.h>

DEFINE_EMLITE_TYPE(jb_Null, em_Val);

jb_Null jb_Null_value() {
    return (jb_Null){.inner = em_Val_null()};
}