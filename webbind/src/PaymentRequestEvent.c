#include <webbind/PaymentRequestEvent.h>
#include <webbind/WindowClient.h>


DEFINE_EMLITE_TYPE(PaymentMethodData, em_Val);


jb_DOMString PaymentMethodData_supportedMethods(const PaymentMethodData *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "supportedMethods"));
}


void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "supportedMethods", value);
}


jb_Object PaymentMethodData_data(const PaymentMethodData *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void PaymentMethodData_set_data(PaymentMethodData* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}

DEFINE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);


jb_DOMString PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "supportedMethods"));
}


void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "supportedMethods", value);
}


jb_Any PaymentDetailsModifier_total(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "total"));
}


void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "total", value);
}


jb_Sequence PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "additionalDisplayItems"));
}


void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "additionalDisplayItems", value);
}


jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}

DEFINE_EMLITE_TYPE(PaymentShippingOption, em_Val);


jb_DOMString PaymentShippingOption_id(const PaymentShippingOption *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void PaymentShippingOption_set_id(PaymentShippingOption* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}


jb_DOMString PaymentShippingOption_label(const PaymentShippingOption *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void PaymentShippingOption_set_label(PaymentShippingOption* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


jb_Any PaymentShippingOption_amount(const PaymentShippingOption *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "amount"));
}


void PaymentShippingOption_set_amount(PaymentShippingOption* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "amount", value);
}


bool PaymentShippingOption_selected(const PaymentShippingOption *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "selected"));
}


void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "selected", value);
}

DEFINE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);


jb_DOMString PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "error"));
}


void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "error", value);
}


jb_Any PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "total"));
}


void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "total", value);
}


jb_Sequence PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "modifiers"));
}


void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "modifiers", value);
}


jb_Sequence PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "shippingOptions"));
}


void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingOptions", value);
}


jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "paymentMethodErrors"));
}


void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "paymentMethodErrors", value);
}


jb_Any PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "shippingAddressErrors"));
}


void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingAddressErrors", value);
}

DEFINE_EMLITE_TYPE(AddressInit, em_Val);


jb_DOMString AddressInit_country(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "country"));
}


void AddressInit_set_country(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "country", value);
}


jb_Sequence AddressInit_addressLine(const AddressInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "addressLine"));
}


void AddressInit_set_addressLine(AddressInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "addressLine", value);
}


jb_DOMString AddressInit_region(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "region"));
}


void AddressInit_set_region(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "region", value);
}


jb_DOMString AddressInit_city(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "city"));
}


void AddressInit_set_city(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "city", value);
}


jb_DOMString AddressInit_dependentLocality(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "dependentLocality"));
}


void AddressInit_set_dependentLocality(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "dependentLocality", value);
}


jb_DOMString AddressInit_postalCode(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "postalCode"));
}


void AddressInit_set_postalCode(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "postalCode", value);
}


jb_DOMString AddressInit_sortingCode(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sortingCode"));
}


void AddressInit_set_sortingCode(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sortingCode", value);
}


jb_DOMString AddressInit_organization(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "organization"));
}


void AddressInit_set_organization(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "organization", value);
}


jb_DOMString AddressInit_recipient(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "recipient"));
}


void AddressInit_set_recipient(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "recipient", value);
}


jb_DOMString AddressInit_phone(const AddressInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "phone"));
}


void AddressInit_set_phone(AddressInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "phone", value);
}

DEFINE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);


jb_DOMString PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "methodName"));
}


void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "methodName", value);
}


jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "details"));
}


void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "details", value);
}


jb_DOMString PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "payerName"));
}


void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "payerName", value);
}


jb_DOMString PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "payerEmail"));
}


void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "payerEmail", value);
}


jb_DOMString PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "payerPhone"));
}


void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "payerPhone", value);
}


AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self) {
    return em_Val_as(AddressInit, em_Val_get(em_Val_as_val(self->inner), "shippingAddress"));
}


void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, const AddressInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingAddress", value);
}


jb_DOMString PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "shippingOption"));
}


void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingOption", value);
}

DEFINE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);


PaymentRequestEvent PaymentRequestEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("PaymentRequestEvent").new_(em_Val_from(type))) {
        return PaymentRequestEvent(em_Val_new(em_Val_global("PaymentRequestEvent", em_Val_from(type)));
      }


PaymentRequestEvent PaymentRequestEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("PaymentRequestEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PaymentRequestEvent(em_Val_new(em_Val_global("PaymentRequestEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_USVString PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(ExtendableEvent_as_val(self->inner), "topOrigin"));
}


jb_USVString PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(ExtendableEvent_as_val(self->inner), "paymentRequestOrigin"));
}


jb_DOMString PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "paymentRequestId"));
}


jb_FrozenArray PaymentRequestEvent_methodData(const PaymentRequestEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "methodData"));
}


jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), "total"));
}


jb_FrozenArray PaymentRequestEvent_modifiers(const PaymentRequestEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "modifiers"));
}


jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), "paymentOptions"));
}


jb_FrozenArray PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "shippingOptions"));
}


jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , const jb_USVString* url) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "openWindow", em_Val_from(url)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod(PaymentRequestEvent* self , const jb_DOMString* methodName) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod(PaymentRequestEvent* self , const jb_DOMString* methodName, const jb_Object* methodDetails) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName), em_Val_from(methodDetails)));
}


jb_Promise PaymentRequestEvent_changeShippingAddress(PaymentRequestEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress"));
}


jb_Promise PaymentRequestEvent_changeShippingAddress(PaymentRequestEvent* self , const AddressInit* shippingAddress) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress", em_Val_from(shippingAddress)));
}


jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , const jb_DOMString* shippingOption) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingOption", em_Val_from(shippingOption)));
}


jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , const jb_Promise* handlerResponsePromise) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(handlerResponsePromise)));
}

