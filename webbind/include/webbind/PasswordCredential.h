#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PasswordCredential, Credential);

PasswordCredential PasswordCredential_new(jb_Any * data);

jb_USVString PasswordCredential_password(const PasswordCredential *self);

jb_USVString PasswordCredential_name(const PasswordCredential *self);

jb_USVString PasswordCredential_iconURL(const PasswordCredential *self);
