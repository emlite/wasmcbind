#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HIDReportItem */
DECLARE_EMLITE_TYPE(HIDReportItem, em_Val);

/** @brief Getter of the isAbsolute property */
bool HIDReportItem_isAbsolute(const HIDReportItem *self);

/** @brief Setter of the isAbsolute property */
void HIDReportItem_set_isAbsolute(HIDReportItem* self, bool value);

/** @brief Getter of the isArray property */
bool HIDReportItem_isArray(const HIDReportItem *self);

/** @brief Setter of the isArray property */
void HIDReportItem_set_isArray(HIDReportItem* self, bool value);

/** @brief Getter of the isBufferedBytes property */
bool HIDReportItem_isBufferedBytes(const HIDReportItem *self);

/** @brief Setter of the isBufferedBytes property */
void HIDReportItem_set_isBufferedBytes(HIDReportItem* self, bool value);

/** @brief Getter of the isConstant property */
bool HIDReportItem_isConstant(const HIDReportItem *self);

/** @brief Setter of the isConstant property */
void HIDReportItem_set_isConstant(HIDReportItem* self, bool value);

/** @brief Getter of the isLinear property */
bool HIDReportItem_isLinear(const HIDReportItem *self);

/** @brief Setter of the isLinear property */
void HIDReportItem_set_isLinear(HIDReportItem* self, bool value);

/** @brief Getter of the isRange property */
bool HIDReportItem_isRange(const HIDReportItem *self);

/** @brief Setter of the isRange property */
void HIDReportItem_set_isRange(HIDReportItem* self, bool value);

/** @brief Getter of the isVolatile property */
bool HIDReportItem_isVolatile(const HIDReportItem *self);

/** @brief Setter of the isVolatile property */
void HIDReportItem_set_isVolatile(HIDReportItem* self, bool value);

/** @brief Getter of the hasNull property */
bool HIDReportItem_hasNull(const HIDReportItem *self);

/** @brief Setter of the hasNull property */
void HIDReportItem_set_hasNull(HIDReportItem* self, bool value);

/** @brief Getter of the hasPreferredState property */
bool HIDReportItem_hasPreferredState(const HIDReportItem *self);

/** @brief Setter of the hasPreferredState property */
void HIDReportItem_set_hasPreferredState(HIDReportItem* self, bool value);

/** @brief Getter of the wrap property */
bool HIDReportItem_wrap(const HIDReportItem *self);

/** @brief Setter of the wrap property */
void HIDReportItem_set_wrap(HIDReportItem* self, bool value);

/** @brief Getter of the usages property */
jb_Array HIDReportItem_usages(const HIDReportItem *self);

/** @brief Setter of the usages property */
void HIDReportItem_set_usages(HIDReportItem* self, jb_Array * value);

/** @brief Getter of the usageMinimum property */
unsigned long HIDReportItem_usageMinimum(const HIDReportItem *self);

/** @brief Setter of the usageMinimum property */
void HIDReportItem_set_usageMinimum(HIDReportItem* self, unsigned long value);

/** @brief Getter of the usageMaximum property */
unsigned long HIDReportItem_usageMaximum(const HIDReportItem *self);

/** @brief Setter of the usageMaximum property */
void HIDReportItem_set_usageMaximum(HIDReportItem* self, unsigned long value);

/** @brief Getter of the reportSize property */
unsigned short HIDReportItem_reportSize(const HIDReportItem *self);

/** @brief Setter of the reportSize property */
void HIDReportItem_set_reportSize(HIDReportItem* self, unsigned short value);

/** @brief Getter of the reportCount property */
unsigned short HIDReportItem_reportCount(const HIDReportItem *self);

/** @brief Setter of the reportCount property */
void HIDReportItem_set_reportCount(HIDReportItem* self, unsigned short value);

/** @brief Getter of the unitExponent property */
char HIDReportItem_unitExponent(const HIDReportItem *self);

/** @brief Setter of the unitExponent property */
void HIDReportItem_set_unitExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitSystem property */
HIDUnitSystem HIDReportItem_unitSystem(const HIDReportItem *self);

/** @brief Setter of the unitSystem property */
void HIDReportItem_set_unitSystem(HIDReportItem* self, HIDUnitSystem * value);

/** @brief Getter of the unitFactorLengthExponent property */
char HIDReportItem_unitFactorLengthExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorLengthExponent property */
void HIDReportItem_set_unitFactorLengthExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitFactorMassExponent property */
char HIDReportItem_unitFactorMassExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorMassExponent property */
void HIDReportItem_set_unitFactorMassExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitFactorTimeExponent property */
char HIDReportItem_unitFactorTimeExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorTimeExponent property */
void HIDReportItem_set_unitFactorTimeExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitFactorTemperatureExponent property */
char HIDReportItem_unitFactorTemperatureExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorTemperatureExponent property */
void HIDReportItem_set_unitFactorTemperatureExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitFactorCurrentExponent property */
char HIDReportItem_unitFactorCurrentExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorCurrentExponent property */
void HIDReportItem_set_unitFactorCurrentExponent(HIDReportItem* self, char value);

/** @brief Getter of the unitFactorLuminousIntensityExponent property */
char HIDReportItem_unitFactorLuminousIntensityExponent(const HIDReportItem *self);

/** @brief Setter of the unitFactorLuminousIntensityExponent property */
void HIDReportItem_set_unitFactorLuminousIntensityExponent(HIDReportItem* self, char value);

/** @brief Getter of the logicalMinimum property */
long HIDReportItem_logicalMinimum(const HIDReportItem *self);

/** @brief Setter of the logicalMinimum property */
void HIDReportItem_set_logicalMinimum(HIDReportItem* self, long value);

/** @brief Getter of the logicalMaximum property */
long HIDReportItem_logicalMaximum(const HIDReportItem *self);

/** @brief Setter of the logicalMaximum property */
void HIDReportItem_set_logicalMaximum(HIDReportItem* self, long value);

/** @brief Getter of the physicalMinimum property */
long HIDReportItem_physicalMinimum(const HIDReportItem *self);

/** @brief Setter of the physicalMinimum property */
void HIDReportItem_set_physicalMinimum(HIDReportItem* self, long value);

/** @brief Getter of the physicalMaximum property */
long HIDReportItem_physicalMaximum(const HIDReportItem *self);

/** @brief Setter of the physicalMaximum property */
void HIDReportItem_set_physicalMaximum(HIDReportItem* self, long value);

/** @brief Getter of the strings property */
jb_Array HIDReportItem_strings(const HIDReportItem *self);

/** @brief Setter of the strings property */
void HIDReportItem_set_strings(HIDReportItem* self, jb_Array * value);

/** @brief Constructor of the HIDReportItem dictionary type */
HIDReportItem HIDReportItem_new();

#ifdef __cplusplus
}
#endif
