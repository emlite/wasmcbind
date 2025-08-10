#include <webbind/MLContextOptions.h>

DEFINE_EMLITE_TYPE(MLContextOptions, em_Val);


MLPowerPreference MLContextOptions_powerPreference(const MLContextOptions *self) {
    return em_Val_as(MLPowerPreference, em_Val_get(em_Val_as_val(self->inner), em_Val_from("powerPreference")));
}


void MLContextOptions_set_powerPreference(MLContextOptions* self, MLPowerPreference * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("powerPreference"), em_Val_from(value));
}


MLContextOptions MLContextOptions_new() {
    em_Val obj = em_Val_object();
    return MLContextOptions_from_val(&obj);
}

