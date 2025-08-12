#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnection PresentationConnection;

/** @brief Dictionary type PresentationConnectionAvailableEventInit */
DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEventInit, EventInit);

/** @brief Getter of the connection property */
PresentationConnection PresentationConnectionAvailableEventInit_connection(const PresentationConnectionAvailableEventInit *self);

/** @brief Setter of the connection property */
void PresentationConnectionAvailableEventInit_set_connection(PresentationConnectionAvailableEventInit* self, PresentationConnection * value);

/** @brief Constructor of the PresentationConnectionAvailableEventInit dictionary type */
PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit_new();

#ifdef __cplusplus
}
#endif
