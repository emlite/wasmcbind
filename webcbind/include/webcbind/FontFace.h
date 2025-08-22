#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFaceDescriptors FontFaceDescriptors;
typedef struct FontFaceFeatures FontFaceFeatures;
typedef struct FontFaceVariations FontFaceVariations;
typedef struct FontFacePalettes FontFacePalettes;


/**
 * @brief Interface FontFace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FontFace)
 */
DECLARE_EMLITE_TYPE(FontFace, em_Val);

/**
 * @brief Creates a new `FontFace` object. 
*/
FontFace FontFace_new0(jb_String * family, jb_Any * source);

/**
 * @brief Creates a new `FontFace` object. 
*/
FontFace FontFace_new1(jb_String * family, jb_Any * source, FontFaceDescriptors * descriptors);

/**
 * @brief Gets the `family` property. 
*/
jb_String FontFace_family(const FontFace *self);

/**
 * @brief Sets the `family` property. 
*/
void FontFace_set_family(FontFace* self, jb_String * value);

/**
 * @brief Gets the `style` property. 
*/
jb_String FontFace_style(const FontFace *self);

/**
 * @brief Sets the `style` property. 
*/
void FontFace_set_style(FontFace* self, jb_String * value);

/**
 * @brief Gets the `weight` property. 
*/
jb_String FontFace_weight(const FontFace *self);

/**
 * @brief Sets the `weight` property. 
*/
void FontFace_set_weight(FontFace* self, jb_String * value);

/**
 * @brief Gets the `stretch` property. 
*/
jb_String FontFace_stretch(const FontFace *self);

/**
 * @brief Sets the `stretch` property. 
*/
void FontFace_set_stretch(FontFace* self, jb_String * value);

/**
 * @brief Gets the `unicodeRange` property. 
*/
jb_String FontFace_unicodeRange(const FontFace *self);

/**
 * @brief Sets the `unicodeRange` property. 
*/
void FontFace_set_unicodeRange(FontFace* self, jb_String * value);

/**
 * @brief Gets the `featureSettings` property. 
*/
jb_String FontFace_featureSettings(const FontFace *self);

/**
 * @brief Sets the `featureSettings` property. 
*/
void FontFace_set_featureSettings(FontFace* self, jb_String * value);

/**
 * @brief Gets the `variationSettings` property. 
*/
jb_String FontFace_variationSettings(const FontFace *self);

/**
 * @brief Sets the `variationSettings` property. 
*/
void FontFace_set_variationSettings(FontFace* self, jb_String * value);

/**
 * @brief Gets the `display` property. 
*/
jb_String FontFace_display(const FontFace *self);

/**
 * @brief Sets the `display` property. 
*/
void FontFace_set_display(FontFace* self, jb_String * value);

/**
 * @brief Gets the `ascentOverride` property. 
*/
jb_String FontFace_ascentOverride(const FontFace *self);

/**
 * @brief Sets the `ascentOverride` property. 
*/
void FontFace_set_ascentOverride(FontFace* self, jb_String * value);

/**
 * @brief Gets the `descentOverride` property. 
*/
jb_String FontFace_descentOverride(const FontFace *self);

/**
 * @brief Sets the `descentOverride` property. 
*/
void FontFace_set_descentOverride(FontFace* self, jb_String * value);

/**
 * @brief Gets the `lineGapOverride` property. 
*/
jb_String FontFace_lineGapOverride(const FontFace *self);

/**
 * @brief Sets the `lineGapOverride` property. 
*/
void FontFace_set_lineGapOverride(FontFace* self, jb_String * value);

/**
 * @brief Gets the `status` property. 
*/
FontFaceLoadStatus FontFace_status(const FontFace *self);

/**
 * @brief Calls the `load` method. 
*/
jb_Promise FontFace_load(FontFace* self );

/**
 * @brief Gets the `loaded` property. 
*/
jb_Promise FontFace_loaded(const FontFace *self);

/**
 * @brief Gets the `features` property. 
*/
FontFaceFeatures FontFace_features(const FontFace *self);

/**
 * @brief Gets the `variations` property. 
*/
FontFaceVariations FontFace_variations(const FontFace *self);

/**
 * @brief Gets the `palettes` property. 
*/
FontFacePalettes FontFace_palettes(const FontFace *self);

#ifdef __cplusplus
}
#endif
