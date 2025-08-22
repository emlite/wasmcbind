#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ScoringBrowserSignals */
DECLARE_EMLITE_TYPE(ScoringBrowserSignals, em_Val);

/** @brief Getter of the topWindowHostname property */
jb_String ScoringBrowserSignals_topWindowHostname(const ScoringBrowserSignals *self);

/** @brief Setter of the topWindowHostname property */
void ScoringBrowserSignals_set_topWindowHostname(ScoringBrowserSignals* self, jb_String * value);

/** @brief Getter of the interestGroupOwner property */
jb_String ScoringBrowserSignals_interestGroupOwner(const ScoringBrowserSignals *self);

/** @brief Setter of the interestGroupOwner property */
void ScoringBrowserSignals_set_interestGroupOwner(ScoringBrowserSignals* self, jb_String * value);

/** @brief Getter of the renderURL property */
jb_String ScoringBrowserSignals_renderURL(const ScoringBrowserSignals *self);

/** @brief Setter of the renderURL property */
void ScoringBrowserSignals_set_renderURL(ScoringBrowserSignals* self, jb_String * value);

/** @brief Getter of the biddingDurationMsec property */
unsigned long ScoringBrowserSignals_biddingDurationMsec(const ScoringBrowserSignals *self);

/** @brief Setter of the biddingDurationMsec property */
void ScoringBrowserSignals_set_biddingDurationMsec(ScoringBrowserSignals* self, unsigned long value);

/** @brief Getter of the bidCurrency property */
jb_String ScoringBrowserSignals_bidCurrency(const ScoringBrowserSignals *self);

/** @brief Setter of the bidCurrency property */
void ScoringBrowserSignals_set_bidCurrency(ScoringBrowserSignals* self, jb_String * value);

/** @brief Getter of the renderSize property */
jb_Object ScoringBrowserSignals_renderSize(const ScoringBrowserSignals *self);

/** @brief Setter of the renderSize property */
void ScoringBrowserSignals_set_renderSize(ScoringBrowserSignals* self, jb_Object * value);

/** @brief Getter of the dataVersion property */
unsigned long ScoringBrowserSignals_dataVersion(const ScoringBrowserSignals *self);

/** @brief Setter of the dataVersion property */
void ScoringBrowserSignals_set_dataVersion(ScoringBrowserSignals* self, unsigned long value);

/** @brief Getter of the crossOriginDataVersion property */
unsigned long ScoringBrowserSignals_crossOriginDataVersion(const ScoringBrowserSignals *self);

/** @brief Setter of the crossOriginDataVersion property */
void ScoringBrowserSignals_set_crossOriginDataVersion(ScoringBrowserSignals* self, unsigned long value);

/** @brief Getter of the adComponents property */
jb_Array ScoringBrowserSignals_adComponents(const ScoringBrowserSignals *self);

/** @brief Setter of the adComponents property */
void ScoringBrowserSignals_set_adComponents(ScoringBrowserSignals* self, jb_Array * value);

/** @brief Getter of the forDebuggingOnlyInCooldownOrLockout property */
bool ScoringBrowserSignals_forDebuggingOnlyInCooldownOrLockout(const ScoringBrowserSignals *self);

/** @brief Setter of the forDebuggingOnlyInCooldownOrLockout property */
void ScoringBrowserSignals_set_forDebuggingOnlyInCooldownOrLockout(ScoringBrowserSignals* self, bool value);

/** @brief Getter of the creativeScanningMetadata property */
jb_String ScoringBrowserSignals_creativeScanningMetadata(const ScoringBrowserSignals *self);

/** @brief Setter of the creativeScanningMetadata property */
void ScoringBrowserSignals_set_creativeScanningMetadata(ScoringBrowserSignals* self, jb_String * value);

/** @brief Getter of the adComponentsCreativeScanningMetadata property */
jb_Array ScoringBrowserSignals_adComponentsCreativeScanningMetadata(const ScoringBrowserSignals *self);

/** @brief Setter of the adComponentsCreativeScanningMetadata property */
void ScoringBrowserSignals_set_adComponentsCreativeScanningMetadata(ScoringBrowserSignals* self, jb_Array * value);

/** @brief Constructor of the ScoringBrowserSignals dictionary type */
ScoringBrowserSignals ScoringBrowserSignals_new();

#ifdef __cplusplus
}
#endif
