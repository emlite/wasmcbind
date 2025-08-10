#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScoreAdOutput, em_Val);

double ScoreAdOutput_desirability(const ScoreAdOutput *self);

void ScoreAdOutput_set_desirability(ScoreAdOutput* self, double value);

double ScoreAdOutput_bid(const ScoreAdOutput *self);

void ScoreAdOutput_set_bid(ScoreAdOutput* self, double value);

jb_String ScoreAdOutput_bidCurrency(const ScoreAdOutput *self);

void ScoreAdOutput_set_bidCurrency(ScoreAdOutput* self, jb_String * value);

double ScoreAdOutput_incomingBidInSellerCurrency(const ScoreAdOutput *self);

void ScoreAdOutput_set_incomingBidInSellerCurrency(ScoreAdOutput* self, double value);

bool ScoreAdOutput_allowComponentAuction(const ScoreAdOutput *self);

void ScoreAdOutput_set_allowComponentAuction(ScoreAdOutput* self, bool value);

ScoreAdOutput ScoreAdOutput_new();

#ifdef __cplusplus
}
#endif
