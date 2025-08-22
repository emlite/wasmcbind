#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLElement HTMLElement;

/** @brief Dictionary type SubmitEventInit */
DECLARE_EMLITE_TYPE(SubmitEventInit, EventInit);

/** @brief Getter of the submitter property */
HTMLElement SubmitEventInit_submitter(const SubmitEventInit *self);

/** @brief Setter of the submitter property */
void SubmitEventInit_set_submitter(SubmitEventInit* self, HTMLElement * value);

/** @brief Constructor of the SubmitEventInit dictionary type */
SubmitEventInit SubmitEventInit_new();

#ifdef __cplusplus
}
#endif
