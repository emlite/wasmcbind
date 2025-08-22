#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportDatagramStats */
DECLARE_EMLITE_TYPE(WebTransportDatagramStats, em_Val);

/** @brief Getter of the droppedIncoming property */
long long WebTransportDatagramStats_droppedIncoming(const WebTransportDatagramStats *self);

/** @brief Setter of the droppedIncoming property */
void WebTransportDatagramStats_set_droppedIncoming(WebTransportDatagramStats* self, long long value);

/** @brief Getter of the expiredIncoming property */
long long WebTransportDatagramStats_expiredIncoming(const WebTransportDatagramStats *self);

/** @brief Setter of the expiredIncoming property */
void WebTransportDatagramStats_set_expiredIncoming(WebTransportDatagramStats* self, long long value);

/** @brief Getter of the expiredOutgoing property */
long long WebTransportDatagramStats_expiredOutgoing(const WebTransportDatagramStats *self);

/** @brief Setter of the expiredOutgoing property */
void WebTransportDatagramStats_set_expiredOutgoing(WebTransportDatagramStats* self, long long value);

/** @brief Getter of the lostOutgoing property */
long long WebTransportDatagramStats_lostOutgoing(const WebTransportDatagramStats *self);

/** @brief Setter of the lostOutgoing property */
void WebTransportDatagramStats_set_lostOutgoing(WebTransportDatagramStats* self, long long value);

/** @brief Constructor of the WebTransportDatagramStats dictionary type */
WebTransportDatagramStats WebTransportDatagramStats_new();

#ifdef __cplusplus
}
#endif
