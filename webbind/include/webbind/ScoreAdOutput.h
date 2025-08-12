#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScoreAdOutput */
DECLARE_EMLITE_TYPE(ScoreAdOutput, em_Val);

/** @brief Getter of the desirability property */
double ScoreAdOutput_desirability(const ScoreAdOutput *self);

/** @brief Setter of the desirability property */
void ScoreAdOutput_set_desirability(ScoreAdOutput* self, double value);

/** @brief Getter of the bid property */
double ScoreAdOutput_bid(const ScoreAdOutput *self);

/** @brief Setter of the bid property */
void ScoreAdOutput_set_bid(ScoreAdOutput* self, double value);

/** @brief Getter of the bidCurrency property */
jb_String ScoreAdOutput_bidCurrency(const ScoreAdOutput *self);

/** @brief Setter of the bidCurrency property */
void ScoreAdOutput_set_bidCurrency(ScoreAdOutput* self, jb_String * value);

/** @brief Getter of the incomingBidInSellerCurrency property */
double ScoreAdOutput_incomingBidInSellerCurrency(const ScoreAdOutput *self);

/** @brief Setter of the incomingBidInSellerCurrency property */
void ScoreAdOutput_set_incomingBidInSellerCurrency(ScoreAdOutput* self, double value);

/** @brief Getter of the allowComponentAuction property */
bool ScoreAdOutput_allowComponentAuction(const ScoreAdOutput *self);

/** @brief Setter of the allowComponentAuction property */
void ScoreAdOutput_set_allowComponentAuction(ScoreAdOutput* self, bool value);

/** @brief Constructor of the ScoreAdOutput dictionary type */
ScoreAdOutput ScoreAdOutput_new();

#ifdef __cplusplus
}
#endif
