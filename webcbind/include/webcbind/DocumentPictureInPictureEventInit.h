#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;

/** @brief Dictionary type DocumentPictureInPictureEventInit */
DECLARE_EMLITE_TYPE(DocumentPictureInPictureEventInit, EventInit);

/** @brief Getter of the window property */
Window DocumentPictureInPictureEventInit_window(const DocumentPictureInPictureEventInit *self);

/** @brief Setter of the window property */
void DocumentPictureInPictureEventInit_set_window(DocumentPictureInPictureEventInit* self, Window * value);

/** @brief Constructor of the DocumentPictureInPictureEventInit dictionary type */
DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit_new();

#ifdef __cplusplus
}
#endif
