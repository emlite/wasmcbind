#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GenerateBidOutput */
DECLARE_EMLITE_TYPE(GenerateBidOutput, em_Val);

/** @brief Getter of the bid property */
double GenerateBidOutput_bid(const GenerateBidOutput *self);

/** @brief Setter of the bid property */
void GenerateBidOutput_set_bid(GenerateBidOutput* self, double value);

/** @brief Getter of the bidCurrency property */
jb_String GenerateBidOutput_bidCurrency(const GenerateBidOutput *self);

/** @brief Setter of the bidCurrency property */
void GenerateBidOutput_set_bidCurrency(GenerateBidOutput* self, jb_String * value);

/** @brief Getter of the render property */
jb_Any GenerateBidOutput_render(const GenerateBidOutput *self);

/** @brief Setter of the render property */
void GenerateBidOutput_set_render(GenerateBidOutput* self, jb_Any * value);

/** @brief Getter of the ad property */
jb_Any GenerateBidOutput_ad(const GenerateBidOutput *self);

/** @brief Setter of the ad property */
void GenerateBidOutput_set_ad(GenerateBidOutput* self, jb_Any * value);

/** @brief Getter of the selectedBuyerAndSellerReportingId property */
jb_String GenerateBidOutput_selectedBuyerAndSellerReportingId(const GenerateBidOutput *self);

/** @brief Setter of the selectedBuyerAndSellerReportingId property */
void GenerateBidOutput_set_selectedBuyerAndSellerReportingId(GenerateBidOutput* self, jb_String * value);

/** @brief Getter of the adComponents property */
jb_Array GenerateBidOutput_adComponents(const GenerateBidOutput *self);

/** @brief Setter of the adComponents property */
void GenerateBidOutput_set_adComponents(GenerateBidOutput* self, jb_Array * value);

/** @brief Getter of the adCost property */
double GenerateBidOutput_adCost(const GenerateBidOutput *self);

/** @brief Setter of the adCost property */
void GenerateBidOutput_set_adCost(GenerateBidOutput* self, double value);

/** @brief Getter of the modelingSignals property */
double GenerateBidOutput_modelingSignals(const GenerateBidOutput *self);

/** @brief Setter of the modelingSignals property */
void GenerateBidOutput_set_modelingSignals(GenerateBidOutput* self, double value);

/** @brief Getter of the allowComponentAuction property */
bool GenerateBidOutput_allowComponentAuction(const GenerateBidOutput *self);

/** @brief Setter of the allowComponentAuction property */
void GenerateBidOutput_set_allowComponentAuction(GenerateBidOutput* self, bool value);

/** @brief Getter of the targetNumAdComponents property */
unsigned long GenerateBidOutput_targetNumAdComponents(const GenerateBidOutput *self);

/** @brief Setter of the targetNumAdComponents property */
void GenerateBidOutput_set_targetNumAdComponents(GenerateBidOutput* self, unsigned long value);

/** @brief Getter of the numMandatoryAdComponents property */
unsigned long GenerateBidOutput_numMandatoryAdComponents(const GenerateBidOutput *self);

/** @brief Setter of the numMandatoryAdComponents property */
void GenerateBidOutput_set_numMandatoryAdComponents(GenerateBidOutput* self, unsigned long value);

/** @brief Constructor of the GenerateBidOutput dictionary type */
GenerateBidOutput GenerateBidOutput_new();

#ifdef __cplusplus
}
#endif
