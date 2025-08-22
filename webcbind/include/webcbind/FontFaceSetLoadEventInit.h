#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FontFace FontFace;

/** @brief Dictionary type FontFaceSetLoadEventInit */
DECLARE_EMLITE_TYPE(FontFaceSetLoadEventInit, EventInit);

/** @brief Getter of the fontfaces property */
jb_Array FontFaceSetLoadEventInit_fontfaces(const FontFaceSetLoadEventInit *self);

/** @brief Setter of the fontfaces property */
void FontFaceSetLoadEventInit_set_fontfaces(FontFaceSetLoadEventInit* self, jb_Array * value);

/** @brief Constructor of the FontFaceSetLoadEventInit dictionary type */
FontFaceSetLoadEventInit FontFaceSetLoadEventInit_new();

#ifdef __cplusplus
}
#endif
