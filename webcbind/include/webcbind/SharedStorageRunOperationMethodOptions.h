#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SharedStoragePrivateAggregationConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStorageRunOperationMethodOptions */
DECLARE_EMLITE_TYPE(SharedStorageRunOperationMethodOptions, em_Val);

/** @brief Getter of the data property */
jb_Object SharedStorageRunOperationMethodOptions_data(const SharedStorageRunOperationMethodOptions *self);

/** @brief Setter of the data property */
void SharedStorageRunOperationMethodOptions_set_data(SharedStorageRunOperationMethodOptions* self, jb_Object * value);

/** @brief Getter of the resolveToConfig property */
bool SharedStorageRunOperationMethodOptions_resolveToConfig(const SharedStorageRunOperationMethodOptions *self);

/** @brief Setter of the resolveToConfig property */
void SharedStorageRunOperationMethodOptions_set_resolveToConfig(SharedStorageRunOperationMethodOptions* self, bool value);

/** @brief Getter of the keepAlive property */
bool SharedStorageRunOperationMethodOptions_keepAlive(const SharedStorageRunOperationMethodOptions *self);

/** @brief Setter of the keepAlive property */
void SharedStorageRunOperationMethodOptions_set_keepAlive(SharedStorageRunOperationMethodOptions* self, bool value);

/** @brief Getter of the privateAggregationConfig property */
SharedStoragePrivateAggregationConfig SharedStorageRunOperationMethodOptions_privateAggregationConfig(const SharedStorageRunOperationMethodOptions *self);

/** @brief Setter of the privateAggregationConfig property */
void SharedStorageRunOperationMethodOptions_set_privateAggregationConfig(SharedStorageRunOperationMethodOptions* self, SharedStoragePrivateAggregationConfig * value);

/** @brief Getter of the savedQuery property */
jb_String SharedStorageRunOperationMethodOptions_savedQuery(const SharedStorageRunOperationMethodOptions *self);

/** @brief Setter of the savedQuery property */
void SharedStorageRunOperationMethodOptions_set_savedQuery(SharedStorageRunOperationMethodOptions* self, jb_String * value);

/** @brief Constructor of the SharedStorageRunOperationMethodOptions dictionary type */
SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions_new();

#ifdef __cplusplus
}
#endif
