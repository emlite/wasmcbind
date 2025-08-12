#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ImageResource.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ContentDescription */
DECLARE_EMLITE_TYPE(ContentDescription, em_Val);

/** @brief Getter of the id property */
jb_String ContentDescription_id(const ContentDescription *self);

/** @brief Setter of the id property */
void ContentDescription_set_id(ContentDescription* self, jb_String * value);

/** @brief Getter of the title property */
jb_String ContentDescription_title(const ContentDescription *self);

/** @brief Setter of the title property */
void ContentDescription_set_title(ContentDescription* self, jb_String * value);

/** @brief Getter of the description property */
jb_String ContentDescription_description(const ContentDescription *self);

/** @brief Setter of the description property */
void ContentDescription_set_description(ContentDescription* self, jb_String * value);

/** @brief Getter of the category property */
ContentCategory ContentDescription_category(const ContentDescription *self);

/** @brief Setter of the category property */
void ContentDescription_set_category(ContentDescription* self, ContentCategory * value);

/** @brief Getter of the icons property */
jb_Array ContentDescription_icons(const ContentDescription *self);

/** @brief Setter of the icons property */
void ContentDescription_set_icons(ContentDescription* self, jb_Array * value);

/** @brief Getter of the url property */
jb_String ContentDescription_url(const ContentDescription *self);

/** @brief Setter of the url property */
void ContentDescription_set_url(ContentDescription* self, jb_String * value);

/** @brief Constructor of the ContentDescription dictionary type */
ContentDescription ContentDescription_new();

#ifdef __cplusplus
}
#endif
