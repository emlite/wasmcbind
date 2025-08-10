#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HIDReportItem, em_Val);

bool HIDReportItem_isAbsolute(const HIDReportItem *self);

void HIDReportItem_set_isAbsolute(HIDReportItem* self, bool value);

bool HIDReportItem_isArray(const HIDReportItem *self);

void HIDReportItem_set_isArray(HIDReportItem* self, bool value);

bool HIDReportItem_isBufferedBytes(const HIDReportItem *self);

void HIDReportItem_set_isBufferedBytes(HIDReportItem* self, bool value);

bool HIDReportItem_isConstant(const HIDReportItem *self);

void HIDReportItem_set_isConstant(HIDReportItem* self, bool value);

bool HIDReportItem_isLinear(const HIDReportItem *self);

void HIDReportItem_set_isLinear(HIDReportItem* self, bool value);

bool HIDReportItem_isRange(const HIDReportItem *self);

void HIDReportItem_set_isRange(HIDReportItem* self, bool value);

bool HIDReportItem_isVolatile(const HIDReportItem *self);

void HIDReportItem_set_isVolatile(HIDReportItem* self, bool value);

bool HIDReportItem_hasNull(const HIDReportItem *self);

void HIDReportItem_set_hasNull(HIDReportItem* self, bool value);

bool HIDReportItem_hasPreferredState(const HIDReportItem *self);

void HIDReportItem_set_hasPreferredState(HIDReportItem* self, bool value);

bool HIDReportItem_wrap(const HIDReportItem *self);

void HIDReportItem_set_wrap(HIDReportItem* self, bool value);

jb_Array HIDReportItem_usages(const HIDReportItem *self);

void HIDReportItem_set_usages(HIDReportItem* self, jb_Array * value);

unsigned long HIDReportItem_usageMinimum(const HIDReportItem *self);

void HIDReportItem_set_usageMinimum(HIDReportItem* self, unsigned long value);

unsigned long HIDReportItem_usageMaximum(const HIDReportItem *self);

void HIDReportItem_set_usageMaximum(HIDReportItem* self, unsigned long value);

unsigned short HIDReportItem_reportSize(const HIDReportItem *self);

void HIDReportItem_set_reportSize(HIDReportItem* self, unsigned short value);

unsigned short HIDReportItem_reportCount(const HIDReportItem *self);

void HIDReportItem_set_reportCount(HIDReportItem* self, unsigned short value);

char HIDReportItem_unitExponent(const HIDReportItem *self);

void HIDReportItem_set_unitExponent(HIDReportItem* self, char value);

HIDUnitSystem HIDReportItem_unitSystem(const HIDReportItem *self);

void HIDReportItem_set_unitSystem(HIDReportItem* self, HIDUnitSystem * value);

char HIDReportItem_unitFactorLengthExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorLengthExponent(HIDReportItem* self, char value);

char HIDReportItem_unitFactorMassExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorMassExponent(HIDReportItem* self, char value);

char HIDReportItem_unitFactorTimeExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorTimeExponent(HIDReportItem* self, char value);

char HIDReportItem_unitFactorTemperatureExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorTemperatureExponent(HIDReportItem* self, char value);

char HIDReportItem_unitFactorCurrentExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorCurrentExponent(HIDReportItem* self, char value);

char HIDReportItem_unitFactorLuminousIntensityExponent(const HIDReportItem *self);

void HIDReportItem_set_unitFactorLuminousIntensityExponent(HIDReportItem* self, char value);

long HIDReportItem_logicalMinimum(const HIDReportItem *self);

void HIDReportItem_set_logicalMinimum(HIDReportItem* self, long value);

long HIDReportItem_logicalMaximum(const HIDReportItem *self);

void HIDReportItem_set_logicalMaximum(HIDReportItem* self, long value);

long HIDReportItem_physicalMinimum(const HIDReportItem *self);

void HIDReportItem_set_physicalMinimum(HIDReportItem* self, long value);

long HIDReportItem_physicalMaximum(const HIDReportItem *self);

void HIDReportItem_set_physicalMaximum(HIDReportItem* self, long value);

jb_Array HIDReportItem_strings(const HIDReportItem *self);

void HIDReportItem_set_strings(HIDReportItem* self, jb_Array * value);

HIDReportItem HIDReportItem_new();

#ifdef __cplusplus
}
#endif
