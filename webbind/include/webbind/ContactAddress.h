#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ContactAddress;


DECLARE_EMLITE_TYPE(ContactAddress, em_Val);

jb_Object ContactAddress_toJSON(ContactAddress* self );

jb_DOMString ContactAddress_city( const ContactAddress *self);

jb_DOMString ContactAddress_country( const ContactAddress *self);

jb_DOMString ContactAddress_dependentLocality( const ContactAddress *self);

jb_DOMString ContactAddress_organization( const ContactAddress *self);

jb_DOMString ContactAddress_phone( const ContactAddress *self);

jb_DOMString ContactAddress_postalCode( const ContactAddress *self);

jb_DOMString ContactAddress_recipient( const ContactAddress *self);

jb_DOMString ContactAddress_region( const ContactAddress *self);

jb_DOMString ContactAddress_sortingCode( const ContactAddress *self);

jb_FrozenArray ContactAddress_addressLine( const ContactAddress *self);
