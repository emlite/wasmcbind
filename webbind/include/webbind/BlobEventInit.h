#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Blob Blob;

/** @brief Dictionary type BlobEventInit */
DECLARE_EMLITE_TYPE(BlobEventInit, EventInit);

/** @brief Getter of the data property */
Blob BlobEventInit_data(const BlobEventInit *self);

/** @brief Setter of the data property */
void BlobEventInit_set_data(BlobEventInit* self, Blob * value);

/** @brief Getter of the timecode property */
jb_Any BlobEventInit_timecode(const BlobEventInit *self);

/** @brief Setter of the timecode property */
void BlobEventInit_set_timecode(BlobEventInit* self, jb_Any * value);

/** @brief Constructor of the BlobEventInit dictionary type */
BlobEventInit BlobEventInit_new();

#ifdef __cplusplus
}
#endif
