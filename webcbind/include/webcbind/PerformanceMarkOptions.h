#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PerformanceMarkOptions */
DECLARE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);

/** @brief Getter of the detail property */
jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self);

/** @brief Setter of the detail property */
void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, jb_Any * value);

/** @brief Getter of the startTime property */
jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self);

/** @brief Setter of the startTime property */
void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, jb_Any * value);

/** @brief Constructor of the PerformanceMarkOptions dictionary type */
PerformanceMarkOptions PerformanceMarkOptions_new();

#ifdef __cplusplus
}
#endif
