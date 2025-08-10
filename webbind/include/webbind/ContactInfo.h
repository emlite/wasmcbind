#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactAddress ContactAddress;
typedef struct Blob Blob;

DECLARE_EMLITE_TYPE(ContactInfo, em_Val);

jb_Array ContactInfo_address(const ContactInfo *self);

void ContactInfo_set_address(ContactInfo* self, jb_Array * value);

jb_Array ContactInfo_email(const ContactInfo *self);

void ContactInfo_set_email(ContactInfo* self, jb_Array * value);

jb_Array ContactInfo_icon(const ContactInfo *self);

void ContactInfo_set_icon(ContactInfo* self, jb_Array * value);

jb_Array ContactInfo_name(const ContactInfo *self);

void ContactInfo_set_name(ContactInfo* self, jb_Array * value);

jb_Array ContactInfo_tel(const ContactInfo *self);

void ContactInfo_set_tel(ContactInfo* self, jb_Array * value);

ContactInfo ContactInfo_new();

#ifdef __cplusplus
}
#endif
