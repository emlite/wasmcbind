#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBAlternateInterface USBAlternateInterface;


typedef struct {
  em_Val inner;
} USBEndpoint;


DECLARE_EMLITE_TYPE(USBEndpoint, em_Val);

USBEndpoint USBEndpoint_new(const USBAlternateInterface* alternate, unsigned char endpointNumber, const USBDirection* direction);

unsigned char USBEndpoint_endpointNumber( const USBEndpoint *self);

USBDirection USBEndpoint_direction( const USBEndpoint *self);

USBEndpointType USBEndpoint_type( const USBEndpoint *self);

unsigned long USBEndpoint_packetSize( const USBEndpoint *self);
