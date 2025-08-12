#include <jsbind/jsbind.h>

// Legacy functions kept for backwards compatibility
int32_t jb_parse_int(const char *src, int32_t radix) {
    return em_Val_as_int(
        em_Val_invoke(em_Val_global("parseInt"), em_Val_from_string(src), em_Val_from_int(radix))
    );
}

double jb_parse_float(const char *src) {
    return em_Val_as_double(em_Val_invoke(em_Val_global("parseFloat"), em_Val_from_string(src)));
}
