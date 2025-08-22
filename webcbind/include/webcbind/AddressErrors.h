#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AddressErrors */
DECLARE_EMLITE_TYPE(AddressErrors, em_Val);

/** @brief Getter of the addressLine property */
jb_String AddressErrors_addressLine(const AddressErrors *self);

/** @brief Setter of the addressLine property */
void AddressErrors_set_addressLine(AddressErrors* self, jb_String * value);

/** @brief Getter of the city property */
jb_String AddressErrors_city(const AddressErrors *self);

/** @brief Setter of the city property */
void AddressErrors_set_city(AddressErrors* self, jb_String * value);

/** @brief Getter of the country property */
jb_String AddressErrors_country(const AddressErrors *self);

/** @brief Setter of the country property */
void AddressErrors_set_country(AddressErrors* self, jb_String * value);

/** @brief Getter of the dependentLocality property */
jb_String AddressErrors_dependentLocality(const AddressErrors *self);

/** @brief Setter of the dependentLocality property */
void AddressErrors_set_dependentLocality(AddressErrors* self, jb_String * value);

/** @brief Getter of the organization property */
jb_String AddressErrors_organization(const AddressErrors *self);

/** @brief Setter of the organization property */
void AddressErrors_set_organization(AddressErrors* self, jb_String * value);

/** @brief Getter of the phone property */
jb_String AddressErrors_phone(const AddressErrors *self);

/** @brief Setter of the phone property */
void AddressErrors_set_phone(AddressErrors* self, jb_String * value);

/** @brief Getter of the postalCode property */
jb_String AddressErrors_postalCode(const AddressErrors *self);

/** @brief Setter of the postalCode property */
void AddressErrors_set_postalCode(AddressErrors* self, jb_String * value);

/** @brief Getter of the recipient property */
jb_String AddressErrors_recipient(const AddressErrors *self);

/** @brief Setter of the recipient property */
void AddressErrors_set_recipient(AddressErrors* self, jb_String * value);

/** @brief Getter of the region property */
jb_String AddressErrors_region(const AddressErrors *self);

/** @brief Setter of the region property */
void AddressErrors_set_region(AddressErrors* self, jb_String * value);

/** @brief Getter of the sortingCode property */
jb_String AddressErrors_sortingCode(const AddressErrors *self);

/** @brief Setter of the sortingCode property */
void AddressErrors_set_sortingCode(AddressErrors* self, jb_String * value);

/** @brief Constructor of the AddressErrors dictionary type */
AddressErrors AddressErrors_new();

#ifdef __cplusplus
}
#endif
