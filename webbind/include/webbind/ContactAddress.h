#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ContactAddress
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ContactAddress)
 */
DECLARE_EMLITE_TYPE(ContactAddress, em_Val);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object ContactAddress_toJSON(ContactAddress* self );

/**
 * @brief Gets the `city` property. 
*/
jb_String ContactAddress_city(const ContactAddress *self);

/**
 * @brief Gets the `country` property. 
*/
jb_String ContactAddress_country(const ContactAddress *self);

/**
 * @brief Gets the `dependentLocality` property. 
*/
jb_String ContactAddress_dependentLocality(const ContactAddress *self);

/**
 * @brief Gets the `organization` property. 
*/
jb_String ContactAddress_organization(const ContactAddress *self);

/**
 * @brief Gets the `phone` property. 
*/
jb_String ContactAddress_phone(const ContactAddress *self);

/**
 * @brief Gets the `postalCode` property. 
*/
jb_String ContactAddress_postalCode(const ContactAddress *self);

/**
 * @brief Gets the `recipient` property. 
*/
jb_String ContactAddress_recipient(const ContactAddress *self);

/**
 * @brief Gets the `region` property. 
*/
jb_String ContactAddress_region(const ContactAddress *self);

/**
 * @brief Gets the `sortingCode` property. 
*/
jb_String ContactAddress_sortingCode(const ContactAddress *self);

/**
 * @brief Gets the `addressLine` property. 
*/
jb_Array ContactAddress_addressLine(const ContactAddress *self);

#ifdef __cplusplus
}
#endif
