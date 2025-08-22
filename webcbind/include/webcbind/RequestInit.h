#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RequestInit */
DECLARE_EMLITE_TYPE(RequestInit, em_Val);

/** @brief Getter of the adAuctionHeaders property */
bool RequestInit_adAuctionHeaders(const RequestInit *self);

/** @brief Setter of the adAuctionHeaders property */
void RequestInit_set_adAuctionHeaders(RequestInit* self, bool value);

/** @brief Constructor of the RequestInit dictionary type */
RequestInit RequestInit_new();

#ifdef __cplusplus
}
#endif
