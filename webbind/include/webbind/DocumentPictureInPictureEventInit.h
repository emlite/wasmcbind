#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;

DECLARE_EMLITE_TYPE(DocumentPictureInPictureEventInit, EventInit);

Window DocumentPictureInPictureEventInit_window(const DocumentPictureInPictureEventInit *self);

void DocumentPictureInPictureEventInit_set_window(DocumentPictureInPictureEventInit* self, Window * value);

DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit_new();

#ifdef __cplusplus
}
#endif
