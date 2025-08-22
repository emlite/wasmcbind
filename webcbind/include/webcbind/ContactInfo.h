#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactAddress ContactAddress;
typedef struct Blob Blob;

/** @brief Dictionary type ContactInfo */
DECLARE_EMLITE_TYPE(ContactInfo, em_Val);

/** @brief Getter of the address property */
jb_Array ContactInfo_address(const ContactInfo *self);

/** @brief Setter of the address property */
void ContactInfo_set_address(ContactInfo* self, jb_Array * value);

/** @brief Getter of the email property */
jb_Array ContactInfo_email(const ContactInfo *self);

/** @brief Setter of the email property */
void ContactInfo_set_email(ContactInfo* self, jb_Array * value);

/** @brief Getter of the icon property */
jb_Array ContactInfo_icon(const ContactInfo *self);

/** @brief Setter of the icon property */
void ContactInfo_set_icon(ContactInfo* self, jb_Array * value);

/** @brief Getter of the name property */
jb_Array ContactInfo_name(const ContactInfo *self);

/** @brief Setter of the name property */
void ContactInfo_set_name(ContactInfo* self, jb_Array * value);

/** @brief Getter of the tel property */
jb_Array ContactInfo_tel(const ContactInfo *self);

/** @brief Setter of the tel property */
void ContactInfo_set_tel(ContactInfo* self, jb_Array * value);

/** @brief Constructor of the ContactInfo dictionary type */
ContactInfo ContactInfo_new();

#ifdef __cplusplus
}
#endif
