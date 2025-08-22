#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
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


/**
 * @brief Interface XRMediaBinding
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding)
 */
DECLARE_EMLITE_TYPE(XRMediaBinding, em_Val);

/**
 * @brief Creates a new `XRMediaBinding` object. 
*/
XRMediaBinding XRMediaBinding_new(XRSession * session);

/**
 * @brief Calls the `createQuadLayer` method. 
*/
XRQuadLayer XRMediaBinding_createQuadLayer0(XRMediaBinding* self , HTMLVideoElement * video);

/**
 * @brief Calls the `createQuadLayer` method. 
*/
XRQuadLayer XRMediaBinding_createQuadLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaQuadLayerInit * init);

/**
 * @brief Calls the `createCylinderLayer` method. 
*/
XRCylinderLayer XRMediaBinding_createCylinderLayer0(XRMediaBinding* self , HTMLVideoElement * video);

/**
 * @brief Calls the `createCylinderLayer` method. 
*/
XRCylinderLayer XRMediaBinding_createCylinderLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaCylinderLayerInit * init);

/**
 * @brief Calls the `createEquirectLayer` method. 
*/
XREquirectLayer XRMediaBinding_createEquirectLayer0(XRMediaBinding* self , HTMLVideoElement * video);

/**
 * @brief Calls the `createEquirectLayer` method. 
*/
XREquirectLayer XRMediaBinding_createEquirectLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaEquirectLayerInit * init);

#ifdef __cplusplus
}
#endif
