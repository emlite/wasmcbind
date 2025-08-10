#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RequestInit, em_Val);

bool RequestInit_adAuctionHeaders(const RequestInit *self);

void RequestInit_set_adAuctionHeaders(RequestInit* self, bool value);

RequestInit RequestInit_new();

#ifdef __cplusplus
}
#endif
