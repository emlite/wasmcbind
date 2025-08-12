#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AdRender */
DECLARE_EMLITE_TYPE(AdRender, em_Val);

/** @brief Getter of the url property */
jb_String AdRender_url(const AdRender *self);

/** @brief Setter of the url property */
void AdRender_set_url(AdRender* self, jb_String * value);

/** @brief Getter of the width property */
jb_String AdRender_width(const AdRender *self);

/** @brief Setter of the width property */
void AdRender_set_width(AdRender* self, jb_String * value);

/** @brief Getter of the height property */
jb_String AdRender_height(const AdRender *self);

/** @brief Setter of the height property */
void AdRender_set_height(AdRender* self, jb_String * value);

/** @brief Constructor of the AdRender dictionary type */
AdRender AdRender_new();

#ifdef __cplusplus
}
#endif
