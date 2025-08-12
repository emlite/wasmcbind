#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HIDReportInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HIDCollectionInfo */
DECLARE_EMLITE_TYPE(HIDCollectionInfo, em_Val);

/** @brief Getter of the usagePage property */
unsigned short HIDCollectionInfo_usagePage(const HIDCollectionInfo *self);

/** @brief Setter of the usagePage property */
void HIDCollectionInfo_set_usagePage(HIDCollectionInfo* self, unsigned short value);

/** @brief Getter of the usage property */
unsigned short HIDCollectionInfo_usage(const HIDCollectionInfo *self);

/** @brief Setter of the usage property */
void HIDCollectionInfo_set_usage(HIDCollectionInfo* self, unsigned short value);

/** @brief Getter of the type property */
unsigned char HIDCollectionInfo_type(const HIDCollectionInfo *self);

/** @brief Setter of the type property */
void HIDCollectionInfo_set_type(HIDCollectionInfo* self, unsigned char value);

/** @brief Getter of the children property */
jb_Array HIDCollectionInfo_children(const HIDCollectionInfo *self);

/** @brief Setter of the children property */
void HIDCollectionInfo_set_children(HIDCollectionInfo* self, jb_Array * value);

/** @brief Getter of the inputReports property */
jb_Array HIDCollectionInfo_inputReports(const HIDCollectionInfo *self);

/** @brief Setter of the inputReports property */
void HIDCollectionInfo_set_inputReports(HIDCollectionInfo* self, jb_Array * value);

/** @brief Getter of the outputReports property */
jb_Array HIDCollectionInfo_outputReports(const HIDCollectionInfo *self);

/** @brief Setter of the outputReports property */
void HIDCollectionInfo_set_outputReports(HIDCollectionInfo* self, jb_Array * value);

/** @brief Getter of the featureReports property */
jb_Array HIDCollectionInfo_featureReports(const HIDCollectionInfo *self);

/** @brief Setter of the featureReports property */
void HIDCollectionInfo_set_featureReports(HIDCollectionInfo* self, jb_Array * value);

/** @brief Constructor of the HIDCollectionInfo dictionary type */
HIDCollectionInfo HIDCollectionInfo_new();

#ifdef __cplusplus
}
#endif
