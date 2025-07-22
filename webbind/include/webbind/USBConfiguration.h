#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct USBInterface USBInterface;
typedef struct USBDevice USBDevice;


typedef struct {
  em_Val inner;
} USBConfiguration;


DECLARE_EMLITE_TYPE(USBConfiguration, em_Val);

USBConfiguration USBConfiguration_new(const USBDevice* device, unsigned char configurationValue);

unsigned char USBConfiguration_configurationValue( const USBConfiguration *self);

jb_DOMString USBConfiguration_configurationName( const USBConfiguration *self);

jb_FrozenArray USBConfiguration_interfaces( const USBConfiguration *self);
