#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GenerateBidOutput, em_Val);

double GenerateBidOutput_bid(const GenerateBidOutput *self);

void GenerateBidOutput_set_bid(GenerateBidOutput* self, double value);

jb_String GenerateBidOutput_bidCurrency(const GenerateBidOutput *self);

void GenerateBidOutput_set_bidCurrency(GenerateBidOutput* self, jb_String * value);

jb_Any GenerateBidOutput_render(const GenerateBidOutput *self);

void GenerateBidOutput_set_render(GenerateBidOutput* self, jb_Any * value);

jb_Any GenerateBidOutput_ad(const GenerateBidOutput *self);

void GenerateBidOutput_set_ad(GenerateBidOutput* self, jb_Any * value);

jb_String GenerateBidOutput_selectedBuyerAndSellerReportingId(const GenerateBidOutput *self);

void GenerateBidOutput_set_selectedBuyerAndSellerReportingId(GenerateBidOutput* self, jb_String * value);

jb_Array GenerateBidOutput_adComponents(const GenerateBidOutput *self);

void GenerateBidOutput_set_adComponents(GenerateBidOutput* self, jb_Array * value);

double GenerateBidOutput_adCost(const GenerateBidOutput *self);

void GenerateBidOutput_set_adCost(GenerateBidOutput* self, double value);

double GenerateBidOutput_modelingSignals(const GenerateBidOutput *self);

void GenerateBidOutput_set_modelingSignals(GenerateBidOutput* self, double value);

bool GenerateBidOutput_allowComponentAuction(const GenerateBidOutput *self);

void GenerateBidOutput_set_allowComponentAuction(GenerateBidOutput* self, bool value);

unsigned long GenerateBidOutput_targetNumAdComponents(const GenerateBidOutput *self);

void GenerateBidOutput_set_targetNumAdComponents(GenerateBidOutput* self, unsigned long value);

unsigned long GenerateBidOutput_numMandatoryAdComponents(const GenerateBidOutput *self);

void GenerateBidOutput_set_numMandatoryAdComponents(GenerateBidOutput* self, unsigned long value);

GenerateBidOutput GenerateBidOutput_new();

#ifdef __cplusplus
}
#endif
