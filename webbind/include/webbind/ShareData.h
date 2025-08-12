#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct File File;

/** @brief Dictionary type ShareData */
DECLARE_EMLITE_TYPE(ShareData, em_Val);

/** @brief Getter of the files property */
jb_Array ShareData_files(const ShareData *self);

/** @brief Setter of the files property */
void ShareData_set_files(ShareData* self, jb_Array * value);

/** @brief Getter of the title property */
jb_String ShareData_title(const ShareData *self);

/** @brief Setter of the title property */
void ShareData_set_title(ShareData* self, jb_String * value);

/** @brief Getter of the text property */
jb_String ShareData_text(const ShareData *self);

/** @brief Setter of the text property */
void ShareData_set_text(ShareData* self, jb_String * value);

/** @brief Getter of the url property */
jb_String ShareData_url(const ShareData *self);

/** @brief Setter of the url property */
void ShareData_set_url(ShareData* self, jb_String * value);

/** @brief Constructor of the ShareData dictionary type */
ShareData ShareData_new();

#ifdef __cplusplus
}
#endif
