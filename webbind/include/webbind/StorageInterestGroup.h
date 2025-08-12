#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuctionAdInterestGroup.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StorageInterestGroup */
DECLARE_EMLITE_TYPE(StorageInterestGroup, AuctionAdInterestGroup);

/** @brief Getter of the joinCount property */
long long StorageInterestGroup_joinCount(const StorageInterestGroup *self);

/** @brief Setter of the joinCount property */
void StorageInterestGroup_set_joinCount(StorageInterestGroup* self, long long value);

/** @brief Getter of the bidCount property */
long long StorageInterestGroup_bidCount(const StorageInterestGroup *self);

/** @brief Setter of the bidCount property */
void StorageInterestGroup_set_bidCount(StorageInterestGroup* self, long long value);

/** @brief Getter of the prevWinsMs property */
jb_Array StorageInterestGroup_prevWinsMs(const StorageInterestGroup *self);

/** @brief Setter of the prevWinsMs property */
void StorageInterestGroup_set_prevWinsMs(StorageInterestGroup* self, jb_Array * value);

/** @brief Getter of the joiningOrigin property */
jb_String StorageInterestGroup_joiningOrigin(const StorageInterestGroup *self);

/** @brief Setter of the joiningOrigin property */
void StorageInterestGroup_set_joiningOrigin(StorageInterestGroup* self, jb_String * value);

/** @brief Getter of the timeSinceGroupJoinedMs property */
long long StorageInterestGroup_timeSinceGroupJoinedMs(const StorageInterestGroup *self);

/** @brief Setter of the timeSinceGroupJoinedMs property */
void StorageInterestGroup_set_timeSinceGroupJoinedMs(StorageInterestGroup* self, long long value);

/** @brief Getter of the lifetimeRemainingMs property */
long long StorageInterestGroup_lifetimeRemainingMs(const StorageInterestGroup *self);

/** @brief Setter of the lifetimeRemainingMs property */
void StorageInterestGroup_set_lifetimeRemainingMs(StorageInterestGroup* self, long long value);

/** @brief Getter of the timeSinceLastUpdateMs property */
long long StorageInterestGroup_timeSinceLastUpdateMs(const StorageInterestGroup *self);

/** @brief Setter of the timeSinceLastUpdateMs property */
void StorageInterestGroup_set_timeSinceLastUpdateMs(StorageInterestGroup* self, long long value);

/** @brief Getter of the timeUntilNextUpdateMs property */
long long StorageInterestGroup_timeUntilNextUpdateMs(const StorageInterestGroup *self);

/** @brief Setter of the timeUntilNextUpdateMs property */
void StorageInterestGroup_set_timeUntilNextUpdateMs(StorageInterestGroup* self, long long value);

/** @brief Getter of the estimatedSize property */
long long StorageInterestGroup_estimatedSize(const StorageInterestGroup *self);

/** @brief Setter of the estimatedSize property */
void StorageInterestGroup_set_estimatedSize(StorageInterestGroup* self, long long value);

/** @brief Constructor of the StorageInterestGroup dictionary type */
StorageInterestGroup StorageInterestGroup_new();

#ifdef __cplusplus
}
#endif
