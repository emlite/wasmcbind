#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DocumentPictureInPictureOptions */
DECLARE_EMLITE_TYPE(DocumentPictureInPictureOptions, em_Val);

/** @brief Getter of the width property */
long long DocumentPictureInPictureOptions_width(const DocumentPictureInPictureOptions *self);

/** @brief Setter of the width property */
void DocumentPictureInPictureOptions_set_width(DocumentPictureInPictureOptions* self, long long value);

/** @brief Getter of the height property */
long long DocumentPictureInPictureOptions_height(const DocumentPictureInPictureOptions *self);

/** @brief Setter of the height property */
void DocumentPictureInPictureOptions_set_height(DocumentPictureInPictureOptions* self, long long value);

/** @brief Getter of the disallowReturnToOpener property */
bool DocumentPictureInPictureOptions_disallowReturnToOpener(const DocumentPictureInPictureOptions *self);

/** @brief Setter of the disallowReturnToOpener property */
void DocumentPictureInPictureOptions_set_disallowReturnToOpener(DocumentPictureInPictureOptions* self, bool value);

/** @brief Getter of the preferInitialWindowPlacement property */
bool DocumentPictureInPictureOptions_preferInitialWindowPlacement(const DocumentPictureInPictureOptions *self);

/** @brief Setter of the preferInitialWindowPlacement property */
void DocumentPictureInPictureOptions_set_preferInitialWindowPlacement(DocumentPictureInPictureOptions* self, bool value);

/** @brief Constructor of the DocumentPictureInPictureOptions dictionary type */
DocumentPictureInPictureOptions DocumentPictureInPictureOptions_new();

#ifdef __cplusplus
}
#endif
