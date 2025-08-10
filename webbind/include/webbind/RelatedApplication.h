#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RelatedApplication, em_Val);

jb_String RelatedApplication_platform(const RelatedApplication *self);

void RelatedApplication_set_platform(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_url(const RelatedApplication *self);

void RelatedApplication_set_url(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_id(const RelatedApplication *self);

void RelatedApplication_set_id(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_version(const RelatedApplication *self);

void RelatedApplication_set_version(RelatedApplication* self, jb_String * value);

RelatedApplication RelatedApplication_new();

#ifdef __cplusplus
}
#endif
