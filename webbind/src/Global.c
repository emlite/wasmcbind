#include <webbind/Global.h>


DEFINE_EMLITE_TYPE(Global, em_Val);


Global Global_new(const jb_Any* descriptor) : em_Val(em_Val_global("Global").new_(em_Val_from(descriptor))) {
        return Global(em_Val_new(em_Val_global("Global", em_Val_from(descriptor)));
      }


Global Global_new(const jb_Any* descriptor, const jb_Any* v) : em_Val(em_Val_global("Global").new_(em_Val_from(descriptor), em_Val_from(v))) {
        return Global(em_Val_new(em_Val_global("Global", em_Val_from(descriptor), em_Val_from(v)));
      }


jb_Any Global_valueOf(Global* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "valueOf"));
}


jb_Any Global_value(const Global *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void Global_set_value(Global* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}

