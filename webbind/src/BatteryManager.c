#include <webbind/BatteryManager.h>


DEFINE_EMLITE_TYPE(BatteryManager, EventTarget);


bool BatteryManager_charging(const BatteryManager *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("charging")));
}


double BatteryManager_chargingTime(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("chargingTime")));
}


double BatteryManager_dischargingTime(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("dischargingTime")));
}


double BatteryManager_level(const BatteryManager *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("level")));
}


jb_Any BatteryManager_onchargingchange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchargingchange")));
}


void BatteryManager_set_onchargingchange(BatteryManager* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchargingchange"), em_Val_from(value));
}


jb_Any BatteryManager_onchargingtimechange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchargingtimechange")));
}


void BatteryManager_set_onchargingtimechange(BatteryManager* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchargingtimechange"), em_Val_from(value));
}


jb_Any BatteryManager_ondischargingtimechange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondischargingtimechange")));
}


void BatteryManager_set_ondischargingtimechange(BatteryManager* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondischargingtimechange"), em_Val_from(value));
}


jb_Any BatteryManager_onlevelchange(const BatteryManager *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onlevelchange")));
}


void BatteryManager_set_onlevelchange(BatteryManager* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onlevelchange"), em_Val_from(value));
}

