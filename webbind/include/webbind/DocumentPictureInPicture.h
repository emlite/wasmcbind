#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;
typedef struct DocumentPictureInPictureOptions DocumentPictureInPictureOptions;

DECLARE_EMLITE_TYPE(DocumentPictureInPicture, EventTarget);

jb_Promise DocumentPictureInPicture_requestWindow0(DocumentPictureInPicture* self );

jb_Promise DocumentPictureInPicture_requestWindow1(DocumentPictureInPicture* self , DocumentPictureInPictureOptions * options);

Window DocumentPictureInPicture_window(const DocumentPictureInPicture *self);

jb_Any DocumentPictureInPicture_onenter(const DocumentPictureInPicture *self);

void DocumentPictureInPicture_set_onenter(DocumentPictureInPicture* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
