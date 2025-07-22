#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRPose.h"
#include "enums.h"

typedef struct XRView XRView;


DECLARE_EMLITE_TYPE(XRViewerPose, XRPose);

jb_FrozenArray XRViewerPose_views( const XRViewerPose *self);
