#include <webbind/PaymentRequestEvent.h>
#include <webbind/WindowClient.h>


DEFINE_EMLITE_TYPE(PaymentMethodData, em_Val);


jb_String PaymentMethodData_supportedMethods(const PaymentMethodData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supportedMethods")));
}


void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supportedMethods"), em_Val_from(value));
}


jb_Object PaymentMethodData_data(const PaymentMethodData *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PaymentMethodData_set_data(PaymentMethodData* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);


jb_String PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supportedMethods")));
}


void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supportedMethods"), em_Val_from(value));
}


jb_Any PaymentDetailsModifier_total(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Array PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("additionalDisplayItems")));
}


void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("additionalDisplayItems"), em_Val_from(value));
}


jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentShippingOption, em_Val);


jb_String PaymentShippingOption_id(const PaymentShippingOption *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void PaymentShippingOption_set_id(PaymentShippingOption* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String PaymentShippingOption_label(const PaymentShippingOption *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void PaymentShippingOption_set_label(PaymentShippingOption* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Any PaymentShippingOption_amount(const PaymentShippingOption *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("amount")));
}


void PaymentShippingOption_set_amount(PaymentShippingOption* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("amount"), em_Val_from(value));
}


bool PaymentShippingOption_selected(const PaymentShippingOption *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selected")));
}


void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selected"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);


jb_String PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_Any PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Array PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("modifiers")));
}


void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("modifiers"), em_Val_from(value));
}


jb_Array PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingOptions")));
}


void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingOptions"), em_Val_from(value));
}


jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors")));
}


void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors"), em_Val_from(value));
}


jb_Any PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors")));
}


void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AddressInit, em_Val);


jb_String AddressInit_country(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("country")));
}


void AddressInit_set_country(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("country"), em_Val_from(value));
}


jb_Array AddressInit_addressLine(const AddressInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressLine")));
}


void AddressInit_set_addressLine(AddressInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressLine"), em_Val_from(value));
}


jb_String AddressInit_region(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("region")));
}


void AddressInit_set_region(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("region"), em_Val_from(value));
}


jb_String AddressInit_city(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("city")));
}


void AddressInit_set_city(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("city"), em_Val_from(value));
}


jb_String AddressInit_dependentLocality(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dependentLocality")));
}


void AddressInit_set_dependentLocality(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dependentLocality"), em_Val_from(value));
}


jb_String AddressInit_postalCode(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postalCode")));
}


void AddressInit_set_postalCode(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("postalCode"), em_Val_from(value));
}


jb_String AddressInit_sortingCode(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sortingCode")));
}


void AddressInit_set_sortingCode(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sortingCode"), em_Val_from(value));
}


jb_String AddressInit_organization(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("organization")));
}


void AddressInit_set_organization(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("organization"), em_Val_from(value));
}


jb_String AddressInit_recipient(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


void AddressInit_set_recipient(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recipient"), em_Val_from(value));
}


jb_String AddressInit_phone(const AddressInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


void AddressInit_set_phone(AddressInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("phone"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);


jb_String PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("methodName")));
}


void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("methodName"), em_Val_from(value));
}


jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("details")));
}


void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("details"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerName")));
}


void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerName"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerEmail")));
}


void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerEmail"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerPhone")));
}


void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerPhone"), em_Val_from(value));
}


AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self) {
    return em_Val_as(AddressInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddress")));
}


void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, AddressInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddress"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingOption")));
}


void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingOption"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);


PaymentRequestEvent PaymentRequestEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestEvent") , em_Val_from(type));
        return PaymentRequestEvent_from_val(&vv);
      }


PaymentRequestEvent PaymentRequestEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PaymentRequestEvent_from_val(&vv);
      }


jb_String PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("topOrigin")));
}


jb_String PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentRequestOrigin")));
}


jb_String PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentRequestId")));
}


jb_Array PaymentRequestEvent_methodData(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("methodData")));
}


jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("total")));
}


jb_Array PaymentRequestEvent_modifiers(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("modifiers")));
}


jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentOptions")));
}


jb_Array PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("shippingOptions")));
}


jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , jb_String * url) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "openWindow", em_Val_from(url)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod0(PaymentRequestEvent* self , jb_String * methodName) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod1(PaymentRequestEvent* self , jb_String * methodName, jb_Object * methodDetails) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName), em_Val_from(methodDetails)));
}


jb_Promise PaymentRequestEvent_changeShippingAddress0(PaymentRequestEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress"));
}


jb_Promise PaymentRequestEvent_changeShippingAddress1(PaymentRequestEvent* self , AddressInit * shippingAddress) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress", em_Val_from(shippingAddress)));
}


jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , jb_String * shippingOption) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingOption", em_Val_from(shippingOption)));
}


jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , jb_Promise * handlerResponsePromise) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(handlerResponsePromise)));
}

