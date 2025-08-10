#include <webbind/Global.h>

#include <webbind/GlobalDescriptor.h>

DEFINE_EMLITE_TYPE(Global, em_Val);


Global Global_new0(GlobalDescriptor * descriptor) {
        em_Val vv = em_Val_new(em_Val_global("Global") , em_Val_from(descriptor));
        return Global_from_val(&vv);
      }


Global Global_new1(GlobalDescriptor * descriptor, jb_Any * v) {
        em_Val vv = em_Val_new(em_Val_global("Global") , em_Val_from(descriptor), em_Val_from(v));
        return Global_from_val(&vv);
      }


jb_Any Global_valueOf(Global* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "valueOf"));
}


jb_Any Global_value(const Global *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void Global_set_value(Global* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}

