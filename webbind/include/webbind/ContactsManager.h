#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ContactInfo ContactInfo;
typedef struct ContactsSelectOptions ContactsSelectOptions;
typedef struct ContactAddress ContactAddress;
typedef struct Blob Blob;


typedef struct {
  em_Val inner;
} ContactInfo;


DECLARE_EMLITE_TYPE(ContactInfo, em_Val);

jb_Sequence ContactInfo_address( const ContactInfo *self);

void ContactInfo_set_address(ContactInfo* self, const jb_Sequence* value);

jb_Sequence ContactInfo_email( const ContactInfo *self);

void ContactInfo_set_email(ContactInfo* self, const jb_Sequence* value);

jb_Sequence ContactInfo_icon( const ContactInfo *self);

void ContactInfo_set_icon(ContactInfo* self, const jb_Sequence* value);

jb_Sequence ContactInfo_name( const ContactInfo *self);

void ContactInfo_set_name(ContactInfo* self, const jb_Sequence* value);

jb_Sequence ContactInfo_tel( const ContactInfo *self);

void ContactInfo_set_tel(ContactInfo* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} ContactsSelectOptions;


DECLARE_EMLITE_TYPE(ContactsSelectOptions, em_Val);

bool ContactsSelectOptions_multiple( const ContactsSelectOptions *self);

void ContactsSelectOptions_set_multiple(ContactsSelectOptions* self, bool value);
typedef struct {
  em_Val inner;
} ContactsManager;


DECLARE_EMLITE_TYPE(ContactsManager, em_Val);

jb_Promise ContactsManager_getProperties(ContactsManager* self );

jb_Promise ContactsManager_select(ContactsManager* self , const jb_Sequence* properties);

jb_Promise ContactsManager_select(ContactsManager* self , const jb_Sequence* properties, const ContactsSelectOptions* options);
