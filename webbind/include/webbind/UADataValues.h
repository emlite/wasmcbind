#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NavigatorUABrandVersion.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UADataValues */
DECLARE_EMLITE_TYPE(UADataValues, em_Val);

/** @brief Getter of the architecture property */
jb_String UADataValues_architecture(const UADataValues *self);

/** @brief Setter of the architecture property */
void UADataValues_set_architecture(UADataValues* self, jb_String * value);

/** @brief Getter of the bitness property */
jb_String UADataValues_bitness(const UADataValues *self);

/** @brief Setter of the bitness property */
void UADataValues_set_bitness(UADataValues* self, jb_String * value);

/** @brief Getter of the brands property */
jb_Array UADataValues_brands(const UADataValues *self);

/** @brief Setter of the brands property */
void UADataValues_set_brands(UADataValues* self, jb_Array * value);

/** @brief Getter of the formFactors property */
jb_Array UADataValues_formFactors(const UADataValues *self);

/** @brief Setter of the formFactors property */
void UADataValues_set_formFactors(UADataValues* self, jb_Array * value);

/** @brief Getter of the fullVersionList property */
jb_Array UADataValues_fullVersionList(const UADataValues *self);

/** @brief Setter of the fullVersionList property */
void UADataValues_set_fullVersionList(UADataValues* self, jb_Array * value);

/** @brief Getter of the model property */
jb_String UADataValues_model(const UADataValues *self);

/** @brief Setter of the model property */
void UADataValues_set_model(UADataValues* self, jb_String * value);

/** @brief Getter of the mobile property */
bool UADataValues_mobile(const UADataValues *self);

/** @brief Setter of the mobile property */
void UADataValues_set_mobile(UADataValues* self, bool value);

/** @brief Getter of the platform property */
jb_String UADataValues_platform(const UADataValues *self);

/** @brief Setter of the platform property */
void UADataValues_set_platform(UADataValues* self, jb_String * value);

/** @brief Getter of the platformVersion property */
jb_String UADataValues_platformVersion(const UADataValues *self);

/** @brief Setter of the platformVersion property */
void UADataValues_set_platformVersion(UADataValues* self, jb_String * value);

/** @brief Getter of the uaFullVersion property */
jb_String UADataValues_uaFullVersion(const UADataValues *self);

/** @brief Setter of the uaFullVersion property */
void UADataValues_set_uaFullVersion(UADataValues* self, jb_String * value);

/** @brief Getter of the wow64 property */
bool UADataValues_wow64(const UADataValues *self);

/** @brief Setter of the wow64 property */
void UADataValues_set_wow64(UADataValues* self, bool value);

/** @brief Constructor of the UADataValues dictionary type */
UADataValues UADataValues_new();

#ifdef __cplusplus
}
#endif
