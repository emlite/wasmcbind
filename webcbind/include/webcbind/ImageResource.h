#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageResource */
DECLARE_EMLITE_TYPE(ImageResource, em_Val);

/** @brief Getter of the src property */
jb_String ImageResource_src(const ImageResource *self);

/** @brief Setter of the src property */
void ImageResource_set_src(ImageResource* self, jb_String * value);

/** @brief Getter of the sizes property */
jb_String ImageResource_sizes(const ImageResource *self);

/** @brief Setter of the sizes property */
void ImageResource_set_sizes(ImageResource* self, jb_String * value);

/** @brief Getter of the type property */
jb_String ImageResource_type(const ImageResource *self);

/** @brief Setter of the type property */
void ImageResource_set_type(ImageResource* self, jb_String * value);

/** @brief Getter of the label property */
jb_String ImageResource_label(const ImageResource *self);

/** @brief Setter of the label property */
void ImageResource_set_label(ImageResource* self, jb_String * value);

/** @brief Constructor of the ImageResource dictionary type */
ImageResource ImageResource_new();

#ifdef __cplusplus
}
#endif
