#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRPose.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRView XRView;

DECLARE_EMLITE_TYPE(XRViewerPose, XRPose);

jb_Array XRViewerPose_views(const XRViewerPose *self);

#ifdef __cplusplus
}
#endif
