#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AddressInit */
DECLARE_EMLITE_TYPE(AddressInit, em_Val);

/** @brief Getter of the country property */
jb_String AddressInit_country(const AddressInit *self);

/** @brief Setter of the country property */
void AddressInit_set_country(AddressInit* self, jb_String * value);

/** @brief Getter of the addressLine property */
jb_Array AddressInit_addressLine(const AddressInit *self);

/** @brief Setter of the addressLine property */
void AddressInit_set_addressLine(AddressInit* self, jb_Array * value);

/** @brief Getter of the region property */
jb_String AddressInit_region(const AddressInit *self);

/** @brief Setter of the region property */
void AddressInit_set_region(AddressInit* self, jb_String * value);

/** @brief Getter of the city property */
jb_String AddressInit_city(const AddressInit *self);

/** @brief Setter of the city property */
void AddressInit_set_city(AddressInit* self, jb_String * value);

/** @brief Getter of the dependentLocality property */
jb_String AddressInit_dependentLocality(const AddressInit *self);

/** @brief Setter of the dependentLocality property */
void AddressInit_set_dependentLocality(AddressInit* self, jb_String * value);

/** @brief Getter of the postalCode property */
jb_String AddressInit_postalCode(const AddressInit *self);

/** @brief Setter of the postalCode property */
void AddressInit_set_postalCode(AddressInit* self, jb_String * value);

/** @brief Getter of the sortingCode property */
jb_String AddressInit_sortingCode(const AddressInit *self);

/** @brief Setter of the sortingCode property */
void AddressInit_set_sortingCode(AddressInit* self, jb_String * value);

/** @brief Getter of the organization property */
jb_String AddressInit_organization(const AddressInit *self);

/** @brief Setter of the organization property */
void AddressInit_set_organization(AddressInit* self, jb_String * value);

/** @brief Getter of the recipient property */
jb_String AddressInit_recipient(const AddressInit *self);

/** @brief Setter of the recipient property */
void AddressInit_set_recipient(AddressInit* self, jb_String * value);

/** @brief Getter of the phone property */
jb_String AddressInit_phone(const AddressInit *self);

/** @brief Setter of the phone property */
void AddressInit_set_phone(AddressInit* self, jb_String * value);

/** @brief Constructor of the AddressInit dictionary type */
AddressInit AddressInit_new();

#ifdef __cplusplus
}
#endif
