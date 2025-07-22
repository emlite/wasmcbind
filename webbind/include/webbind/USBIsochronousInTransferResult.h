#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBIsochronousInTransferPacket USBIsochronousInTransferPacket;


typedef struct {
  em_Val inner;
} USBIsochronousInTransferResult;


DECLARE_EMLITE_TYPE(USBIsochronousInTransferResult, em_Val);

USBIsochronousInTransferResult USBIsochronousInTransferResult_new(const jb_Sequence* packets);

USBIsochronousInTransferResult USBIsochronousInTransferResult_new(const jb_Sequence* packets, const jb_DataView* data);

jb_DataView USBIsochronousInTransferResult_data( const USBIsochronousInTransferResult *self);

jb_FrozenArray USBIsochronousInTransferResult_packets( const USBIsochronousInTransferResult *self);
