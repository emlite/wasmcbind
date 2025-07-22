#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} USBIsochronousOutTransferPacket;


DECLARE_EMLITE_TYPE(USBIsochronousOutTransferPacket, em_Val);

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new(const USBTransferStatus* status);

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket_new(const USBTransferStatus* status, unsigned long bytesWritten);

unsigned long USBIsochronousOutTransferPacket_bytesWritten( const USBIsochronousOutTransferPacket *self);

USBTransferStatus USBIsochronousOutTransferPacket_status( const USBIsochronousOutTransferPacket *self);
