#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;


/**
 * @brief Interface XRMesh
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh)
 */
DECLARE_EMLITE_TYPE(XRMesh, em_Val);

/**
 * @brief Gets the `meshSpace` property. 
*/
XRSpace XRMesh_meshSpace(const XRMesh *self);

/**
 * @brief Gets the `vertices` property. 
*/
jb_Array XRMesh_vertices(const XRMesh *self);

/**
 * @brief Gets the `indices` property. 
*/
jb_Uint32Array XRMesh_indices(const XRMesh *self);

/**
 * @brief Gets the `lastChangedTime` property. 
*/
jb_Any XRMesh_lastChangedTime(const XRMesh *self);

/**
 * @brief Gets the `semanticLabel` property. 
*/
jb_String XRMesh_semanticLabel(const XRMesh *self);

#ifdef __cplusplus
}
#endif
