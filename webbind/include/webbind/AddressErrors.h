#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AddressErrors, em_Val);

jb_String AddressErrors_addressLine(const AddressErrors *self);

void AddressErrors_set_addressLine(AddressErrors* self, jb_String * value);

jb_String AddressErrors_city(const AddressErrors *self);

void AddressErrors_set_city(AddressErrors* self, jb_String * value);

jb_String AddressErrors_country(const AddressErrors *self);

void AddressErrors_set_country(AddressErrors* self, jb_String * value);

jb_String AddressErrors_dependentLocality(const AddressErrors *self);

void AddressErrors_set_dependentLocality(AddressErrors* self, jb_String * value);

jb_String AddressErrors_organization(const AddressErrors *self);

void AddressErrors_set_organization(AddressErrors* self, jb_String * value);

jb_String AddressErrors_phone(const AddressErrors *self);

void AddressErrors_set_phone(AddressErrors* self, jb_String * value);

jb_String AddressErrors_postalCode(const AddressErrors *self);

void AddressErrors_set_postalCode(AddressErrors* self, jb_String * value);

jb_String AddressErrors_recipient(const AddressErrors *self);

void AddressErrors_set_recipient(AddressErrors* self, jb_String * value);

jb_String AddressErrors_region(const AddressErrors *self);

void AddressErrors_set_region(AddressErrors* self, jb_String * value);

jb_String AddressErrors_sortingCode(const AddressErrors *self);

void AddressErrors_set_sortingCode(AddressErrors* self, jb_String * value);

AddressErrors AddressErrors_new();

#ifdef __cplusplus
}
#endif
