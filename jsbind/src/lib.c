#include <jsbind/jsbind.h>

jb_String jb_atob(const jb_String *encoded) {
    return (jb_String
    ){.inner = em_Val_invoke(
          em_Val_global("atob"), encoded->inner
      )};
}

jb_String jb_btoa(const jb_String *data) {
    return (jb_String
    ){.inner =
          em_Val_invoke(em_Val_global("btoa"), data->inner)
    };
}

int32_t jb_parse_int(const char *src, int32_t radix) {
    return em_Val_as_int(em_Val_invoke(
        em_Val_global("parseInt"),
        em_Val_from_string(src),
        em_Val_from_int(radix)
    ));
}

double jb_parse_float(const char *src) {
    return em_Val_as_double(em_Val_invoke(
        em_Val_global("parseFloat"), em_Val_from_string(src)
    ));
}
