#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type UnderlyingSource */
DECLARE_EMLITE_TYPE(UnderlyingSource, em_Val);

/** @brief Getter of the start property */
jb_Function UnderlyingSource_start(const UnderlyingSource *self);

/** @brief Setter of the start property */
void UnderlyingSource_set_start(UnderlyingSource* self, jb_Function * value);

/** @brief Getter of the pull property */
jb_Function UnderlyingSource_pull(const UnderlyingSource *self);

/** @brief Setter of the pull property */
void UnderlyingSource_set_pull(UnderlyingSource* self, jb_Function * value);

/** @brief Getter of the cancel property */
jb_Function UnderlyingSource_cancel(const UnderlyingSource *self);

/** @brief Setter of the cancel property */
void UnderlyingSource_set_cancel(UnderlyingSource* self, jb_Function * value);

/** @brief Getter of the type property */
ReadableStreamType UnderlyingSource_type(const UnderlyingSource *self);

/** @brief Setter of the type property */
void UnderlyingSource_set_type(UnderlyingSource* self, ReadableStreamType * value);

/** @brief Getter of the autoAllocateChunkSize property */
long long UnderlyingSource_autoAllocateChunkSize(const UnderlyingSource *self);

/** @brief Setter of the autoAllocateChunkSize property */
void UnderlyingSource_set_autoAllocateChunkSize(UnderlyingSource* self, long long value);

/** @brief Constructor of the UnderlyingSource dictionary type */
UnderlyingSource UnderlyingSource_new();

#ifdef __cplusplus
}
#endif
