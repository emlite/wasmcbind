#include <webbind/BatteryManager.h>


DEFINE_EMLITE_TYPE(BatteryManager, EventTarget);


bool BatteryManager_charging(const BatteryManager *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "charging"));
}


double BatteryManager_chargingTime(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "chargingTime"));
}


double BatteryManager_dischargingTime(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "dischargingTime"));
}


double BatteryManager_level(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "level"));
}


jb_Any BatteryManager_onchargingchange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchargingchange"));
}


void BatteryManager_set_onchargingchange(BatteryManager* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchargingchange", value);
}


jb_Any BatteryManager_onchargingtimechange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchargingtimechange"));
}


void BatteryManager_set_onchargingtimechange(BatteryManager* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchargingtimechange", value);
}


jb_Any BatteryManager_ondischargingtimechange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondischargingtimechange"));
}


void BatteryManager_set_ondischargingtimechange(BatteryManager* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondischargingtimechange", value);
}


jb_Any BatteryManager_onlevelchange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onlevelchange"));
}


void BatteryManager_set_onlevelchange(BatteryManager* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onlevelchange", value);
}

