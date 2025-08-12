#include <jsbind/time.h>

double jb_Performance_now() {
    return em_Val_as_double(em_Val_call(em_Val_global("performance"), "now"));
}

void jb_clear_timeout(int32_t id) {
    em_Val_invoke(em_Val_global("clearTimeout"), em_Val_from_int(id));
}

void jb_clear_interval(int32_t id) {
    em_Val_invoke(em_Val_global("clearInterval"), em_Val_from_int(id));
}

int32_t jb_set_timeout(const jb_Function *cb, int32_t millis) {
    return em_Val_as_int(
        em_Val_invoke(em_Val_global("setTimeout"), cb->inner, em_Val_from_int(millis))
    );
}

int32_t jb_set_interval(const jb_Function *cb, int32_t millis) {
    return em_Val_as_int(
        em_Val_invoke(em_Val_global("setInterval"), cb->inner, em_Val_from_int(millis))
    );
}
