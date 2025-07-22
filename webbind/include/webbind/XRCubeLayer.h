#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRCompositionLayer.h"
#include "enums.h"

typedef struct XRSpace XRSpace;
typedef struct DOMPointReadOnly DOMPointReadOnly;


typedef struct {
  XRCompositionLayer inner;
} XRCubeLayer;


DECLARE_EMLITE_TYPE(XRCubeLayer, XRCompositionLayer);

XRSpace XRCubeLayer_space( const XRCubeLayer *self);

void XRCubeLayer_set_space(XRCubeLayer* self, const XRSpace* value);

DOMPointReadOnly XRCubeLayer_orientation( const XRCubeLayer *self);

void XRCubeLayer_set_orientation(XRCubeLayer* self, const DOMPointReadOnly* value);

jb_Any XRCubeLayer_onredraw( const XRCubeLayer *self);

void XRCubeLayer_set_onredraw(XRCubeLayer* self, const jb_Any* value);
