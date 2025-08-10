#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DocumentPictureInPictureOptions, em_Val);

long long DocumentPictureInPictureOptions_width(const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_width(DocumentPictureInPictureOptions* self, long long value);

long long DocumentPictureInPictureOptions_height(const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_height(DocumentPictureInPictureOptions* self, long long value);

bool DocumentPictureInPictureOptions_disallowReturnToOpener(const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_disallowReturnToOpener(DocumentPictureInPictureOptions* self, bool value);

bool DocumentPictureInPictureOptions_preferInitialWindowPlacement(const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_preferInitialWindowPlacement(DocumentPictureInPictureOptions* self, bool value);

DocumentPictureInPictureOptions DocumentPictureInPictureOptions_new();

#ifdef __cplusplus
}
#endif
