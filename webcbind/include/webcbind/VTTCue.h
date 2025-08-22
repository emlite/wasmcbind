#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "TextTrackCue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VTTRegion VTTRegion;
typedef struct DocumentFragment DocumentFragment;


/**
 * @brief Interface VTTCue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/VTTCue)
 */
DECLARE_EMLITE_TYPE(VTTCue, TextTrackCue);

/**
 * @brief Creates a new `VTTCue` object. 
*/
VTTCue VTTCue_new(double startTime, double endTime, jb_String * text);

/**
 * @brief Gets the `region` property. 
*/
VTTRegion VTTCue_region(const VTTCue *self);

/**
 * @brief Sets the `region` property. 
*/
void VTTCue_set_region(VTTCue* self, VTTRegion * value);

/**
 * @brief Gets the `vertical` property. 
*/
DirectionSetting VTTCue_vertical(const VTTCue *self);

/**
 * @brief Sets the `vertical` property. 
*/
void VTTCue_set_vertical(VTTCue* self, DirectionSetting * value);

/**
 * @brief Gets the `snapToLines` property. 
*/
bool VTTCue_snapToLines(const VTTCue *self);

/**
 * @brief Sets the `snapToLines` property. 
*/
void VTTCue_set_snapToLines(VTTCue* self, bool value);

/**
 * @brief Gets the `line` property. 
*/
jb_Any VTTCue_line(const VTTCue *self);

/**
 * @brief Sets the `line` property. 
*/
void VTTCue_set_line(VTTCue* self, jb_Any * value);

/**
 * @brief Gets the `lineAlign` property. 
*/
LineAlignSetting VTTCue_lineAlign(const VTTCue *self);

/**
 * @brief Sets the `lineAlign` property. 
*/
void VTTCue_set_lineAlign(VTTCue* self, LineAlignSetting * value);

/**
 * @brief Gets the `position` property. 
*/
jb_Any VTTCue_position(const VTTCue *self);

/**
 * @brief Sets the `position` property. 
*/
void VTTCue_set_position(VTTCue* self, jb_Any * value);

/**
 * @brief Gets the `positionAlign` property. 
*/
PositionAlignSetting VTTCue_positionAlign(const VTTCue *self);

/**
 * @brief Sets the `positionAlign` property. 
*/
void VTTCue_set_positionAlign(VTTCue* self, PositionAlignSetting * value);

/**
 * @brief Gets the `size` property. 
*/
double VTTCue_size(const VTTCue *self);

/**
 * @brief Sets the `size` property. 
*/
void VTTCue_set_size(VTTCue* self, double value);

/**
 * @brief Gets the `align` property. 
*/
AlignSetting VTTCue_align(const VTTCue *self);

/**
 * @brief Sets the `align` property. 
*/
void VTTCue_set_align(VTTCue* self, AlignSetting * value);

/**
 * @brief Gets the `text` property. 
*/
jb_String VTTCue_text(const VTTCue *self);

/**
 * @brief Sets the `text` property. 
*/
void VTTCue_set_text(VTTCue* self, jb_String * value);

/**
 * @brief Calls the `getCueAsHTML` method. 
*/
DocumentFragment VTTCue_getCueAsHTML(VTTCue* self );

#ifdef __cplusplus
}
#endif
