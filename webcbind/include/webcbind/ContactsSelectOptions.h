#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ContactsSelectOptions */
DECLARE_EMLITE_TYPE(ContactsSelectOptions, em_Val);

/** @brief Getter of the multiple property */
bool ContactsSelectOptions_multiple(const ContactsSelectOptions *self);

/** @brief Setter of the multiple property */
void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value);

/** @brief Constructor of the ContactsSelectOptions dictionary type */
ContactsSelectOptions ContactsSelectOptions_new();

#ifdef __cplusplus
}
#endif
