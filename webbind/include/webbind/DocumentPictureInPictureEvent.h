#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit;
typedef struct Window Window;

DECLARE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);

DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(jb_String * type, DocumentPictureInPictureEventInit * eventInitDict);

Window DocumentPictureInPictureEvent_window(const DocumentPictureInPictureEvent *self);

#ifdef __cplusplus
}
#endif
