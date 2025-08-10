#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRQuadLayer XRQuadLayer;
typedef struct HTMLVideoElement HTMLVideoElement;
typedef struct XRMediaQuadLayerInit XRMediaQuadLayerInit;
typedef struct XRCylinderLayer XRCylinderLayer;
typedef struct XRMediaCylinderLayerInit XRMediaCylinderLayerInit;
typedef struct XREquirectLayer XREquirectLayer;
typedef struct XRMediaEquirectLayerInit XRMediaEquirectLayerInit;

DECLARE_EMLITE_TYPE(XRMediaBinding, em_Val);

XRMediaBinding XRMediaBinding_new(XRSession * session);

XRQuadLayer XRMediaBinding_createQuadLayer0(XRMediaBinding* self , HTMLVideoElement * video);

XRQuadLayer XRMediaBinding_createQuadLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaQuadLayerInit * init);

XRCylinderLayer XRMediaBinding_createCylinderLayer0(XRMediaBinding* self , HTMLVideoElement * video);

XRCylinderLayer XRMediaBinding_createCylinderLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaCylinderLayerInit * init);

XREquirectLayer XRMediaBinding_createEquirectLayer0(XRMediaBinding* self , HTMLVideoElement * video);

XREquirectLayer XRMediaBinding_createEquirectLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaEquirectLayerInit * init);

#ifdef __cplusplus
}
#endif
