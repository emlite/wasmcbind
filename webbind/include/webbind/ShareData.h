#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct File File;

DECLARE_EMLITE_TYPE(ShareData, em_Val);

jb_Array ShareData_files(const ShareData *self);

void ShareData_set_files(ShareData* self, jb_Array * value);

jb_String ShareData_title(const ShareData *self);

void ShareData_set_title(ShareData* self, jb_String * value);

jb_String ShareData_text(const ShareData *self);

void ShareData_set_text(ShareData* self, jb_String * value);

jb_String ShareData_url(const ShareData *self);

void ShareData_set_url(ShareData* self, jb_String * value);

ShareData ShareData_new();

#ifdef __cplusplus
}
#endif
