#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IIRFilterOptions */
DECLARE_EMLITE_TYPE(IIRFilterOptions, AudioNodeOptions);

/** @brief Getter of the feedforward property */
jb_Array IIRFilterOptions_feedforward(const IIRFilterOptions *self);

/** @brief Setter of the feedforward property */
void IIRFilterOptions_set_feedforward(IIRFilterOptions* self, jb_Array * value);

/** @brief Getter of the feedback property */
jb_Array IIRFilterOptions_feedback(const IIRFilterOptions *self);

/** @brief Setter of the feedback property */
void IIRFilterOptions_set_feedback(IIRFilterOptions* self, jb_Array * value);

/** @brief Constructor of the IIRFilterOptions dictionary type */
IIRFilterOptions IIRFilterOptions_new();

#ifdef __cplusplus
}
#endif
