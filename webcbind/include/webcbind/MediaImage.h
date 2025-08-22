#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaImage */
DECLARE_EMLITE_TYPE(MediaImage, em_Val);

/** @brief Getter of the src property */
jb_String MediaImage_src(const MediaImage *self);

/** @brief Setter of the src property */
void MediaImage_set_src(MediaImage* self, jb_String * value);

/** @brief Getter of the sizes property */
jb_String MediaImage_sizes(const MediaImage *self);

/** @brief Setter of the sizes property */
void MediaImage_set_sizes(MediaImage* self, jb_String * value);

/** @brief Getter of the type property */
jb_String MediaImage_type(const MediaImage *self);

/** @brief Setter of the type property */
void MediaImage_set_type(MediaImage* self, jb_String * value);

/** @brief Constructor of the MediaImage dictionary type */
MediaImage MediaImage_new();

#ifdef __cplusplus
}
#endif
