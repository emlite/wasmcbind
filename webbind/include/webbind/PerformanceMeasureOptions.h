#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PerformanceMeasureOptions */
DECLARE_EMLITE_TYPE(PerformanceMeasureOptions, em_Val);

/** @brief Getter of the detail property */
jb_Any PerformanceMeasureOptions_detail(const PerformanceMeasureOptions *self);

/** @brief Setter of the detail property */
void PerformanceMeasureOptions_set_detail(PerformanceMeasureOptions* self, jb_Any * value);

/** @brief Getter of the start property */
jb_Any PerformanceMeasureOptions_start(const PerformanceMeasureOptions *self);

/** @brief Setter of the start property */
void PerformanceMeasureOptions_set_start(PerformanceMeasureOptions* self, jb_Any * value);

/** @brief Getter of the duration property */
jb_Any PerformanceMeasureOptions_duration(const PerformanceMeasureOptions *self);

/** @brief Setter of the duration property */
void PerformanceMeasureOptions_set_duration(PerformanceMeasureOptions* self, jb_Any * value);

/** @brief Getter of the end property */
jb_Any PerformanceMeasureOptions_end(const PerformanceMeasureOptions *self);

/** @brief Setter of the end property */
void PerformanceMeasureOptions_set_end(PerformanceMeasureOptions* self, jb_Any * value);

/** @brief Constructor of the PerformanceMeasureOptions dictionary type */
PerformanceMeasureOptions PerformanceMeasureOptions_new();

#ifdef __cplusplus
}
#endif
