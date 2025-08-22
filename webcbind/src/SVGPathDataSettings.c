#include <webcbind/SVGPathDataSettings.h>

DEFINE_EMLITE_TYPE(SVGPathDataSettings, em_Val);


bool SVGPathDataSettings_normalize(const SVGPathDataSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("normalize")));
}


void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("normalize"), em_Val_from(value));
}


SVGPathDataSettings SVGPathDataSettings_new() {
    em_Val obj = em_Val_object();
    return SVGPathDataSettings_from_val(&obj);
}

