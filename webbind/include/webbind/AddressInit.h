#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AddressInit, em_Val);

jb_String AddressInit_country(const AddressInit *self);

void AddressInit_set_country(AddressInit* self, jb_String * value);

jb_Array AddressInit_addressLine(const AddressInit *self);

void AddressInit_set_addressLine(AddressInit* self, jb_Array * value);

jb_String AddressInit_region(const AddressInit *self);

void AddressInit_set_region(AddressInit* self, jb_String * value);

jb_String AddressInit_city(const AddressInit *self);

void AddressInit_set_city(AddressInit* self, jb_String * value);

jb_String AddressInit_dependentLocality(const AddressInit *self);

void AddressInit_set_dependentLocality(AddressInit* self, jb_String * value);

jb_String AddressInit_postalCode(const AddressInit *self);

void AddressInit_set_postalCode(AddressInit* self, jb_String * value);

jb_String AddressInit_sortingCode(const AddressInit *self);

void AddressInit_set_sortingCode(AddressInit* self, jb_String * value);

jb_String AddressInit_organization(const AddressInit *self);

void AddressInit_set_organization(AddressInit* self, jb_String * value);

jb_String AddressInit_recipient(const AddressInit *self);

void AddressInit_set_recipient(AddressInit* self, jb_String * value);

jb_String AddressInit_phone(const AddressInit *self);

void AddressInit_set_phone(AddressInit* self, jb_String * value);

AddressInit AddressInit_new();

#ifdef __cplusplus
}
#endif
