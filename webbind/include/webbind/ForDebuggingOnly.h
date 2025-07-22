#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ForDebuggingOnly;


DECLARE_EMLITE_TYPE(ForDebuggingOnly, em_Val);

jb_Undefined ForDebuggingOnly_reportAdAuctionWin(ForDebuggingOnly* self , const jb_USVString* url);

jb_Undefined ForDebuggingOnly_reportAdAuctionLoss(ForDebuggingOnly* self , const jb_USVString* url);
