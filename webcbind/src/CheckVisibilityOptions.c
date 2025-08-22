#include <webcbind/CheckVisibilityOptions.h>

DEFINE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);


bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("checkOpacity")));
}


void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("checkOpacity"), em_Val_from(value));
}


bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("checkVisibilityCSS")));
}


void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("checkVisibilityCSS"), em_Val_from(value));
}


bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentVisibilityAuto")));
}


void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentVisibilityAuto"), em_Val_from(value));
}


bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("opacityProperty")));
}


void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("opacityProperty"), em_Val_from(value));
}


bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibilityProperty")));
}


void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("visibilityProperty"), em_Val_from(value));
}


CheckVisibilityOptions CheckVisibilityOptions_new() {
    em_Val obj = em_Val_object();
    return CheckVisibilityOptions_from_val(&obj);
}

