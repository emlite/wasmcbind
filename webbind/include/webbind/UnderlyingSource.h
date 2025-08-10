#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UnderlyingSource, em_Val);

jb_Function UnderlyingSource_start(const UnderlyingSource *self);

void UnderlyingSource_set_start(UnderlyingSource* self, jb_Function * value);

jb_Function UnderlyingSource_pull(const UnderlyingSource *self);

void UnderlyingSource_set_pull(UnderlyingSource* self, jb_Function * value);

jb_Function UnderlyingSource_cancel(const UnderlyingSource *self);

void UnderlyingSource_set_cancel(UnderlyingSource* self, jb_Function * value);

ReadableStreamType UnderlyingSource_type(const UnderlyingSource *self);

void UnderlyingSource_set_type(UnderlyingSource* self, ReadableStreamType * value);

long long UnderlyingSource_autoAllocateChunkSize(const UnderlyingSource *self);

void UnderlyingSource_set_autoAllocateChunkSize(UnderlyingSource* self, long long value);

UnderlyingSource UnderlyingSource_new();

#ifdef __cplusplus
}
#endif
