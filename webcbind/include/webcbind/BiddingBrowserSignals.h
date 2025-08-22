#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BiddingBrowserSignals */
DECLARE_EMLITE_TYPE(BiddingBrowserSignals, em_Val);

/** @brief Getter of the topWindowHostname property */
jb_String BiddingBrowserSignals_topWindowHostname(const BiddingBrowserSignals *self);

/** @brief Setter of the topWindowHostname property */
void BiddingBrowserSignals_set_topWindowHostname(BiddingBrowserSignals* self, jb_String * value);

/** @brief Getter of the seller property */
jb_String BiddingBrowserSignals_seller(const BiddingBrowserSignals *self);

/** @brief Setter of the seller property */
void BiddingBrowserSignals_set_seller(BiddingBrowserSignals* self, jb_String * value);

/** @brief Getter of the joinCount property */
long BiddingBrowserSignals_joinCount(const BiddingBrowserSignals *self);

/** @brief Setter of the joinCount property */
void BiddingBrowserSignals_set_joinCount(BiddingBrowserSignals* self, long value);

/** @brief Getter of the bidCount property */
long BiddingBrowserSignals_bidCount(const BiddingBrowserSignals *self);

/** @brief Setter of the bidCount property */
void BiddingBrowserSignals_set_bidCount(BiddingBrowserSignals* self, long value);

/** @brief Getter of the recency property */
long BiddingBrowserSignals_recency(const BiddingBrowserSignals *self);

/** @brief Setter of the recency property */
void BiddingBrowserSignals_set_recency(BiddingBrowserSignals* self, long value);

/** @brief Getter of the adComponentsLimit property */
long BiddingBrowserSignals_adComponentsLimit(const BiddingBrowserSignals *self);

/** @brief Setter of the adComponentsLimit property */
void BiddingBrowserSignals_set_adComponentsLimit(BiddingBrowserSignals* self, long value);

/** @brief Getter of the multiBidLimit property */
unsigned short BiddingBrowserSignals_multiBidLimit(const BiddingBrowserSignals *self);

/** @brief Setter of the multiBidLimit property */
void BiddingBrowserSignals_set_multiBidLimit(BiddingBrowserSignals* self, unsigned short value);

/** @brief Getter of the requestedSize property */
jb_Object BiddingBrowserSignals_requestedSize(const BiddingBrowserSignals *self);

/** @brief Setter of the requestedSize property */
void BiddingBrowserSignals_set_requestedSize(BiddingBrowserSignals* self, jb_Object * value);

/** @brief Getter of the topLevelSeller property */
jb_String BiddingBrowserSignals_topLevelSeller(const BiddingBrowserSignals *self);

/** @brief Setter of the topLevelSeller property */
void BiddingBrowserSignals_set_topLevelSeller(BiddingBrowserSignals* self, jb_String * value);

/** @brief Getter of the prevWinsMs property */
jb_Array BiddingBrowserSignals_prevWinsMs(const BiddingBrowserSignals *self);

/** @brief Setter of the prevWinsMs property */
void BiddingBrowserSignals_set_prevWinsMs(BiddingBrowserSignals* self, jb_Array * value);

/** @brief Getter of the wasmHelper property */
jb_Object BiddingBrowserSignals_wasmHelper(const BiddingBrowserSignals *self);

/** @brief Setter of the wasmHelper property */
void BiddingBrowserSignals_set_wasmHelper(BiddingBrowserSignals* self, jb_Object * value);

/** @brief Getter of the dataVersion property */
unsigned long BiddingBrowserSignals_dataVersion(const BiddingBrowserSignals *self);

/** @brief Setter of the dataVersion property */
void BiddingBrowserSignals_set_dataVersion(BiddingBrowserSignals* self, unsigned long value);

/** @brief Getter of the crossOriginDataVersion property */
unsigned long BiddingBrowserSignals_crossOriginDataVersion(const BiddingBrowserSignals *self);

/** @brief Setter of the crossOriginDataVersion property */
void BiddingBrowserSignals_set_crossOriginDataVersion(BiddingBrowserSignals* self, unsigned long value);

/** @brief Getter of the forDebuggingOnlyInCooldownOrLockout property */
bool BiddingBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const BiddingBrowserSignals *self);

/** @brief Setter of the forDebuggingOnlyInCooldownOrLockout property */
void BiddingBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(BiddingBrowserSignals* self, bool value);

/** @brief Constructor of the BiddingBrowserSignals dictionary type */
BiddingBrowserSignals BiddingBrowserSignals_new();

#ifdef __cplusplus
}
#endif
