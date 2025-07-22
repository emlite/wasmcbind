#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} USBInTransferResult;


DECLARE_EMLITE_TYPE(USBInTransferResult, em_Val);

USBInTransferResult USBInTransferResult_new(const USBTransferStatus* status);

USBInTransferResult USBInTransferResult_new(const USBTransferStatus* status, const jb_DataView* data);

jb_DataView USBInTransferResult_data( const USBInTransferResult *self);

USBTransferStatus USBInTransferResult_status( const USBInTransferResult *self);
