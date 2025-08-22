#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type StreamPipeOptions */
DECLARE_EMLITE_TYPE(StreamPipeOptions, em_Val);

/** @brief Getter of the preventClose property */
bool StreamPipeOptions_preventClose(const StreamPipeOptions *self);

/** @brief Setter of the preventClose property */
void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value);

/** @brief Getter of the preventAbort property */
bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self);

/** @brief Setter of the preventAbort property */
void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value);

/** @brief Getter of the preventCancel property */
bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self);

/** @brief Setter of the preventCancel property */
void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value);

/** @brief Getter of the signal property */
AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self);

/** @brief Setter of the signal property */
void StreamPipeOptions_set_signal(StreamPipeOptions* self, AbortSignal * value);

/** @brief Constructor of the StreamPipeOptions dictionary type */
StreamPipeOptions StreamPipeOptions_new();

#ifdef __cplusplus
}
#endif
