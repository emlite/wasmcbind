#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket;


DECLARE_EMLITE_TYPE(USBIsochronousOutTransferResult, em_Val);

USBIsochronousOutTransferResult USBIsochronousOutTransferResult_new(jb_Sequence * packets);

jb_FrozenArray USBIsochronousOutTransferResult_packets( const USBIsochronousOutTransferResult *self);
