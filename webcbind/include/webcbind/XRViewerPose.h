#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRPose.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRView XRView;


/**
 * @brief Interface XRViewerPose
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRViewerPose)
 */
DECLARE_EMLITE_TYPE(XRViewerPose, XRPose);

/**
 * @brief Gets the `views` property. 
*/
jb_Array XRViewerPose_views(const XRViewerPose *self);

#ifdef __cplusplus
}
#endif
