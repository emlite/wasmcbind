#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} USBOutTransferResult;


DECLARE_EMLITE_TYPE(USBOutTransferResult, em_Val);

USBOutTransferResult USBOutTransferResult_new(const USBTransferStatus* status);

USBOutTransferResult USBOutTransferResult_new(const USBTransferStatus* status, unsigned long bytesWritten);

unsigned long USBOutTransferResult_bytesWritten( const USBOutTransferResult *self);

USBTransferStatus USBOutTransferResult_status( const USBOutTransferResult *self);
