#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ContactsSelectOptions, em_Val);

bool ContactsSelectOptions_multiple(const ContactsSelectOptions *self);

void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value);

ContactsSelectOptions ContactsSelectOptions_new();

#ifdef __cplusplus
}
#endif
