#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} USBIsochronousInTransferPacket;


DECLARE_EMLITE_TYPE(USBIsochronousInTransferPacket, em_Val);

USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new(const USBTransferStatus* status);

USBIsochronousInTransferPacket USBIsochronousInTransferPacket_new(const USBTransferStatus* status, const jb_DataView* data);

jb_DataView USBIsochronousInTransferPacket_data( const USBIsochronousInTransferPacket *self);

USBTransferStatus USBIsochronousInTransferPacket_status( const USBIsochronousInTransferPacket *self);
