#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProgressEventInit */
DECLARE_EMLITE_TYPE(ProgressEventInit, EventInit);

/** @brief Getter of the lengthComputable property */
bool ProgressEventInit_lengthComputable(const ProgressEventInit *self);

/** @brief Setter of the lengthComputable property */
void ProgressEventInit_set_lengthComputable(ProgressEventInit* self, bool value);

/** @brief Getter of the loaded property */
double ProgressEventInit_loaded(const ProgressEventInit *self);

/** @brief Setter of the loaded property */
void ProgressEventInit_set_loaded(ProgressEventInit* self, double value);

/** @brief Getter of the total property */
double ProgressEventInit_total(const ProgressEventInit *self);

/** @brief Setter of the total property */
void ProgressEventInit_set_total(ProgressEventInit* self, double value);

/** @brief Constructor of the ProgressEventInit dictionary type */
ProgressEventInit ProgressEventInit_new();

#ifdef __cplusplus
}
#endif
