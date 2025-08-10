#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BiddingBrowserSignals, em_Val);

jb_String BiddingBrowserSignals_topWindowHostname(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_topWindowHostname(BiddingBrowserSignals* self, jb_String * value);

jb_String BiddingBrowserSignals_seller(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_seller(BiddingBrowserSignals* self, jb_String * value);

long BiddingBrowserSignals_joinCount(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_joinCount(BiddingBrowserSignals* self, long value);

long BiddingBrowserSignals_bidCount(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_bidCount(BiddingBrowserSignals* self, long value);

long BiddingBrowserSignals_recency(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_recency(BiddingBrowserSignals* self, long value);

long BiddingBrowserSignals_adComponentsLimit(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_adComponentsLimit(BiddingBrowserSignals* self, long value);

unsigned short BiddingBrowserSignals_multiBidLimit(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_multiBidLimit(BiddingBrowserSignals* self, unsigned short value);

jb_Object BiddingBrowserSignals_requestedSize(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_requestedSize(BiddingBrowserSignals* self, jb_Object * value);

jb_String BiddingBrowserSignals_topLevelSeller(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_topLevelSeller(BiddingBrowserSignals* self, jb_String * value);

jb_Array BiddingBrowserSignals_prevWinsMs(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_prevWinsMs(BiddingBrowserSignals* self, jb_Array * value);

jb_Object BiddingBrowserSignals_wasmHelper(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_wasmHelper(BiddingBrowserSignals* self, jb_Object * value);

unsigned long BiddingBrowserSignals_dataVersion(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_dataVersion(BiddingBrowserSignals* self, unsigned long value);

unsigned long BiddingBrowserSignals_crossOriginDataVersion(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_crossOriginDataVersion(BiddingBrowserSignals* self, unsigned long value);

bool BiddingBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const BiddingBrowserSignals *self);

void BiddingBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(BiddingBrowserSignals* self, bool value);

BiddingBrowserSignals BiddingBrowserSignals_new();

#ifdef __cplusplus
}
#endif
