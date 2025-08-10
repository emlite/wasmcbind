#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ScoringBrowserSignals, em_Val);

jb_String ScoringBrowserSignals_topWindowHostname(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_topWindowHostname(ScoringBrowserSignals* self, jb_String * value);

jb_String ScoringBrowserSignals_interestGroupOwner(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_interestGroupOwner(ScoringBrowserSignals* self, jb_String * value);

jb_String ScoringBrowserSignals_renderURL(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_renderURL(ScoringBrowserSignals* self, jb_String * value);

unsigned long ScoringBrowserSignals_biddingDurationMsec(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_biddingDurationMsec(ScoringBrowserSignals* self, unsigned long value);

jb_String ScoringBrowserSignals_bidCurrency(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_bidCurrency(ScoringBrowserSignals* self, jb_String * value);

jb_Object ScoringBrowserSignals_renderSize(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_renderSize(ScoringBrowserSignals* self, jb_Object * value);

unsigned long ScoringBrowserSignals_dataVersion(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_dataVersion(ScoringBrowserSignals* self, unsigned long value);

unsigned long ScoringBrowserSignals_crossOriginDataVersion(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_crossOriginDataVersion(ScoringBrowserSignals* self, unsigned long value);

jb_Array ScoringBrowserSignals_adComponents(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_adComponents(ScoringBrowserSignals* self, jb_Array * value);

bool ScoringBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(ScoringBrowserSignals* self, bool value);

jb_String ScoringBrowserSignals_creativeScanningMetadata(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_creativeScanningMetadata(ScoringBrowserSignals* self, jb_String * value);

jb_Array ScoringBrowserSignals_adComponentsCreativeScanningMetadata(const ScoringBrowserSignals *self);

void ScoringBrowserSignals_set_adComponentsCreativeScanningMetadata(ScoringBrowserSignals* self, jb_Array * value);

ScoringBrowserSignals ScoringBrowserSignals_new();

#ifdef __cplusplus
}
#endif
