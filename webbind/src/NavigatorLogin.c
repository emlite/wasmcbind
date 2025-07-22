#include <webbind/NavigatorLogin.h>


DEFINE_EMLITE_TYPE(NavigatorLogin, em_Val);


jb_Promise NavigatorLogin_setStatus(NavigatorLogin* self , LoginStatus * status) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setStatus", em_Val_from(status)));
}

