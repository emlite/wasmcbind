#include <webcbind/HIDReportItem.h>

DEFINE_EMLITE_TYPE(HIDReportItem, em_Val);


bool HIDReportItem_isAbsolute(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isAbsolute")));
}


void HIDReportItem_set_isAbsolute(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isAbsolute"), em_Val_from(value));
}


bool HIDReportItem_isArray(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isArray")));
}


void HIDReportItem_set_isArray(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isArray"), em_Val_from(value));
}


bool HIDReportItem_isBufferedBytes(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isBufferedBytes")));
}


void HIDReportItem_set_isBufferedBytes(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isBufferedBytes"), em_Val_from(value));
}


bool HIDReportItem_isConstant(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isConstant")));
}


void HIDReportItem_set_isConstant(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isConstant"), em_Val_from(value));
}


bool HIDReportItem_isLinear(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isLinear")));
}


void HIDReportItem_set_isLinear(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isLinear"), em_Val_from(value));
}


bool HIDReportItem_isRange(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isRange")));
}


void HIDReportItem_set_isRange(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isRange"), em_Val_from(value));
}


bool HIDReportItem_isVolatile(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isVolatile")));
}


void HIDReportItem_set_isVolatile(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isVolatile"), em_Val_from(value));
}


bool HIDReportItem_hasNull(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasNull")));
}


void HIDReportItem_set_hasNull(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hasNull"), em_Val_from(value));
}


bool HIDReportItem_hasPreferredState(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasPreferredState")));
}


void HIDReportItem_set_hasPreferredState(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hasPreferredState"), em_Val_from(value));
}


bool HIDReportItem_wrap(const HIDReportItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wrap")));
}


void HIDReportItem_set_wrap(HIDReportItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("wrap"), em_Val_from(value));
}


jb_Array HIDReportItem_usages(const HIDReportItem *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usages")));
}


void HIDReportItem_set_usages(HIDReportItem* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usages"), em_Val_from(value));
}


unsigned long HIDReportItem_usageMinimum(const HIDReportItem *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usageMinimum")));
}


void HIDReportItem_set_usageMinimum(HIDReportItem* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usageMinimum"), em_Val_from(value));
}


unsigned long HIDReportItem_usageMaximum(const HIDReportItem *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usageMaximum")));
}


void HIDReportItem_set_usageMaximum(HIDReportItem* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usageMaximum"), em_Val_from(value));
}


unsigned short HIDReportItem_reportSize(const HIDReportItem *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportSize")));
}


void HIDReportItem_set_reportSize(HIDReportItem* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportSize"), em_Val_from(value));
}


unsigned short HIDReportItem_reportCount(const HIDReportItem *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportCount")));
}


void HIDReportItem_set_reportCount(HIDReportItem* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportCount"), em_Val_from(value));
}


char HIDReportItem_unitExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitExponent")));
}


void HIDReportItem_set_unitExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitExponent"), em_Val_from(value));
}


HIDUnitSystem HIDReportItem_unitSystem(const HIDReportItem *self) {
    return em_Val_as(HIDUnitSystem, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitSystem")));
}


void HIDReportItem_set_unitSystem(HIDReportItem* self, HIDUnitSystem * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitSystem"), em_Val_from(value));
}


char HIDReportItem_unitFactorLengthExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorLengthExponent")));
}


void HIDReportItem_set_unitFactorLengthExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorLengthExponent"), em_Val_from(value));
}


char HIDReportItem_unitFactorMassExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorMassExponent")));
}


void HIDReportItem_set_unitFactorMassExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorMassExponent"), em_Val_from(value));
}


char HIDReportItem_unitFactorTimeExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorTimeExponent")));
}


void HIDReportItem_set_unitFactorTimeExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorTimeExponent"), em_Val_from(value));
}


char HIDReportItem_unitFactorTemperatureExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorTemperatureExponent")));
}


void HIDReportItem_set_unitFactorTemperatureExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorTemperatureExponent"), em_Val_from(value));
}


char HIDReportItem_unitFactorCurrentExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorCurrentExponent")));
}


void HIDReportItem_set_unitFactorCurrentExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorCurrentExponent"), em_Val_from(value));
}


char HIDReportItem_unitFactorLuminousIntensityExponent(const HIDReportItem *self) {
    return em_Val_as(char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unitFactorLuminousIntensityExponent")));
}


void HIDReportItem_set_unitFactorLuminousIntensityExponent(HIDReportItem* self, char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unitFactorLuminousIntensityExponent"), em_Val_from(value));
}


long HIDReportItem_logicalMinimum(const HIDReportItem *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalMinimum")));
}


void HIDReportItem_set_logicalMinimum(HIDReportItem* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalMinimum"), em_Val_from(value));
}


long HIDReportItem_logicalMaximum(const HIDReportItem *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalMaximum")));
}


void HIDReportItem_set_logicalMaximum(HIDReportItem* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalMaximum"), em_Val_from(value));
}


long HIDReportItem_physicalMinimum(const HIDReportItem *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("physicalMinimum")));
}


void HIDReportItem_set_physicalMinimum(HIDReportItem* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("physicalMinimum"), em_Val_from(value));
}


long HIDReportItem_physicalMaximum(const HIDReportItem *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("physicalMaximum")));
}


void HIDReportItem_set_physicalMaximum(HIDReportItem* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("physicalMaximum"), em_Val_from(value));
}


jb_Array HIDReportItem_strings(const HIDReportItem *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strings")));
}


void HIDReportItem_set_strings(HIDReportItem* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strings"), em_Val_from(value));
}


HIDReportItem HIDReportItem_new() {
    em_Val obj = em_Val_object();
    return HIDReportItem_from_val(&obj);
}

