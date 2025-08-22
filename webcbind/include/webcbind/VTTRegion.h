#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface VTTRegion
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion)
 */
DECLARE_EMLITE_TYPE(VTTRegion, em_Val);

/**
 * @brief Creates a new `VTTRegion` object. 
*/
VTTRegion VTTRegion_new();

/**
 * @brief Gets the `id` property. 
*/
jb_String VTTRegion_id(const VTTRegion *self);

/**
 * @brief Sets the `id` property. 
*/
void VTTRegion_set_id(VTTRegion* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
double VTTRegion_width(const VTTRegion *self);

/**
 * @brief Sets the `width` property. 
*/
void VTTRegion_set_width(VTTRegion* self, double value);

/**
 * @brief Gets the `lines` property. 
*/
unsigned long VTTRegion_lines(const VTTRegion *self);

/**
 * @brief Sets the `lines` property. 
*/
void VTTRegion_set_lines(VTTRegion* self, unsigned long value);

/**
 * @brief Gets the `regionAnchorX` property. 
*/
double VTTRegion_regionAnchorX(const VTTRegion *self);

/**
 * @brief Sets the `regionAnchorX` property. 
*/
void VTTRegion_set_regionAnchorX(VTTRegion* self, double value);

/**
 * @brief Gets the `regionAnchorY` property. 
*/
double VTTRegion_regionAnchorY(const VTTRegion *self);

/**
 * @brief Sets the `regionAnchorY` property. 
*/
void VTTRegion_set_regionAnchorY(VTTRegion* self, double value);

/**
 * @brief Gets the `viewportAnchorX` property. 
*/
double VTTRegion_viewportAnchorX(const VTTRegion *self);

/**
 * @brief Sets the `viewportAnchorX` property. 
*/
void VTTRegion_set_viewportAnchorX(VTTRegion* self, double value);

/**
 * @brief Gets the `viewportAnchorY` property. 
*/
double VTTRegion_viewportAnchorY(const VTTRegion *self);

/**
 * @brief Sets the `viewportAnchorY` property. 
*/
void VTTRegion_set_viewportAnchorY(VTTRegion* self, double value);

/**
 * @brief Gets the `scroll` property. 
*/
ScrollSetting VTTRegion_scroll(const VTTRegion *self);

/**
 * @brief Sets the `scroll` property. 
*/
void VTTRegion_set_scroll(VTTRegion* self, ScrollSetting * value);

#ifdef __cplusplus
}
#endif
