#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentRequestUpdateEventInit */
DECLARE_EMLITE_TYPE(PaymentRequestUpdateEventInit, EventInit);

/** @brief Constructor of the PaymentRequestUpdateEventInit dictionary type */
PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
