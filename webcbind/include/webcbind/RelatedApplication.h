#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RelatedApplication */
DECLARE_EMLITE_TYPE(RelatedApplication, em_Val);

/** @brief Getter of the platform property */
jb_String RelatedApplication_platform(const RelatedApplication *self);

/** @brief Setter of the platform property */
void RelatedApplication_set_platform(RelatedApplication* self, jb_String * value);

/** @brief Getter of the url property */
jb_String RelatedApplication_url(const RelatedApplication *self);

/** @brief Setter of the url property */
void RelatedApplication_set_url(RelatedApplication* self, jb_String * value);

/** @brief Getter of the id property */
jb_String RelatedApplication_id(const RelatedApplication *self);

/** @brief Setter of the id property */
void RelatedApplication_set_id(RelatedApplication* self, jb_String * value);

/** @brief Getter of the version property */
jb_String RelatedApplication_version(const RelatedApplication *self);

/** @brief Setter of the version property */
void RelatedApplication_set_version(RelatedApplication* self, jb_String * value);

/** @brief Constructor of the RelatedApplication dictionary type */
RelatedApplication RelatedApplication_new();

#ifdef __cplusplus
}
#endif
