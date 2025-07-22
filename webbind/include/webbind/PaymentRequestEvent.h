#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsModifier PaymentDetailsModifier;
typedef struct PaymentShippingOption PaymentShippingOption;
typedef struct WindowClient WindowClient;
typedef struct PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate;
typedef struct AddressInit AddressInit;
typedef struct PaymentHandlerResponse PaymentHandlerResponse;


typedef struct {
  em_Val inner;
} PaymentMethodData;


DECLARE_EMLITE_TYPE(PaymentMethodData, em_Val);

jb_DOMString PaymentMethodData_supportedMethods( const PaymentMethodData *self);

void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, const jb_DOMString* value);

jb_Object PaymentMethodData_data( const PaymentMethodData *self);

void PaymentMethodData_set_data(PaymentMethodData* self, const jb_Object* value);
typedef struct {
  em_Val inner;
} PaymentDetailsModifier;


DECLARE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);

jb_DOMString PaymentDetailsModifier_supportedMethods( const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, const jb_DOMString* value);

jb_Any PaymentDetailsModifier_total( const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, const jb_Any* value);

jb_Sequence PaymentDetailsModifier_additionalDisplayItems( const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, const jb_Sequence* value);

jb_Object PaymentDetailsModifier_data( const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, const jb_Object* value);
typedef struct {
  em_Val inner;
} PaymentShippingOption;


DECLARE_EMLITE_TYPE(PaymentShippingOption, em_Val);

jb_DOMString PaymentShippingOption_id( const PaymentShippingOption *self);

void PaymentShippingOption_set_id(PaymentShippingOption* self, const jb_DOMString* value);

jb_DOMString PaymentShippingOption_label( const PaymentShippingOption *self);

void PaymentShippingOption_set_label(PaymentShippingOption* self, const jb_DOMString* value);

jb_Any PaymentShippingOption_amount( const PaymentShippingOption *self);

void PaymentShippingOption_set_amount(PaymentShippingOption* self, const jb_Any* value);

bool PaymentShippingOption_selected( const PaymentShippingOption *self);

void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value);
typedef struct {
  em_Val inner;
} PaymentRequestDetailsUpdate;


DECLARE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);

jb_DOMString PaymentRequestDetailsUpdate_error( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, const jb_DOMString* value);

jb_Any PaymentRequestDetailsUpdate_total( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, const jb_Any* value);

jb_Sequence PaymentRequestDetailsUpdate_modifiers( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, const jb_Sequence* value);

jb_Sequence PaymentRequestDetailsUpdate_shippingOptions( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, const jb_Sequence* value);

jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, const jb_Object* value);

jb_Any PaymentRequestDetailsUpdate_shippingAddressErrors( const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} AddressInit;


DECLARE_EMLITE_TYPE(AddressInit, em_Val);

jb_DOMString AddressInit_country( const AddressInit *self);

void AddressInit_set_country(AddressInit* self, const jb_DOMString* value);

jb_Sequence AddressInit_addressLine( const AddressInit *self);

void AddressInit_set_addressLine(AddressInit* self, const jb_Sequence* value);

jb_DOMString AddressInit_region( const AddressInit *self);

void AddressInit_set_region(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_city( const AddressInit *self);

void AddressInit_set_city(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_dependentLocality( const AddressInit *self);

void AddressInit_set_dependentLocality(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_postalCode( const AddressInit *self);

void AddressInit_set_postalCode(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_sortingCode( const AddressInit *self);

void AddressInit_set_sortingCode(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_organization( const AddressInit *self);

void AddressInit_set_organization(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_recipient( const AddressInit *self);

void AddressInit_set_recipient(AddressInit* self, const jb_DOMString* value);

jb_DOMString AddressInit_phone( const AddressInit *self);

void AddressInit_set_phone(AddressInit* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} PaymentHandlerResponse;


DECLARE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);

jb_DOMString PaymentHandlerResponse_methodName( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, const jb_DOMString* value);

jb_Object PaymentHandlerResponse_details( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, const jb_Object* value);

jb_DOMString PaymentHandlerResponse_payerName( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, const jb_DOMString* value);

jb_DOMString PaymentHandlerResponse_payerEmail( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, const jb_DOMString* value);

jb_DOMString PaymentHandlerResponse_payerPhone( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, const jb_DOMString* value);

AddressInit PaymentHandlerResponse_shippingAddress( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, const AddressInit* value);

jb_DOMString PaymentHandlerResponse_shippingOption( const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, const jb_DOMString* value);
typedef struct {
  ExtendableEvent inner;
} PaymentRequestEvent;


DECLARE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);

PaymentRequestEvent PaymentRequestEvent_new(const jb_DOMString* type);

PaymentRequestEvent PaymentRequestEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_USVString PaymentRequestEvent_topOrigin( const PaymentRequestEvent *self);

jb_USVString PaymentRequestEvent_paymentRequestOrigin( const PaymentRequestEvent *self);

jb_DOMString PaymentRequestEvent_paymentRequestId( const PaymentRequestEvent *self);

jb_FrozenArray PaymentRequestEvent_methodData( const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_total( const PaymentRequestEvent *self);

jb_FrozenArray PaymentRequestEvent_modifiers( const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_paymentOptions( const PaymentRequestEvent *self);

jb_FrozenArray PaymentRequestEvent_shippingOptions( const PaymentRequestEvent *self);

jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , const jb_USVString* url);

jb_Promise PaymentRequestEvent_changePaymentMethod(PaymentRequestEvent* self , const jb_DOMString* methodName);

jb_Promise PaymentRequestEvent_changePaymentMethod(PaymentRequestEvent* self , const jb_DOMString* methodName, const jb_Object* methodDetails);

jb_Promise PaymentRequestEvent_changeShippingAddress(PaymentRequestEvent* self );

jb_Promise PaymentRequestEvent_changeShippingAddress(PaymentRequestEvent* self , const AddressInit* shippingAddress);

jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , const jb_DOMString* shippingOption);

jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , const jb_Promise* handlerResponsePromise);
