#include <webcbind/NavigatorUABrandVersion.h>

DEFINE_EMLITE_TYPE(NavigatorUABrandVersion, em_Val);


jb_String NavigatorUABrandVersion_brand(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("brand")));
}


void NavigatorUABrandVersion_set_brand(NavigatorUABrandVersion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("brand"), em_Val_from(value));
}


jb_String NavigatorUABrandVersion_version(const NavigatorUABrandVersion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void NavigatorUABrandVersion_set_version(NavigatorUABrandVersion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}


NavigatorUABrandVersion NavigatorUABrandVersion_new() {
    em_Val obj = em_Val_object();
    return NavigatorUABrandVersion_from_val(&obj);
}

