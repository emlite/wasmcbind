#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AddressInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentHandlerResponse */
DECLARE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);

/** @brief Getter of the methodName property */
jb_String PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self);

/** @brief Setter of the methodName property */
void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, jb_String * value);

/** @brief Getter of the details property */
jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self);

/** @brief Setter of the details property */
void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, jb_Object * value);

/** @brief Getter of the payerName property */
jb_String PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self);

/** @brief Setter of the payerName property */
void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, jb_String * value);

/** @brief Getter of the payerEmail property */
jb_String PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self);

/** @brief Setter of the payerEmail property */
void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, jb_String * value);

/** @brief Getter of the payerPhone property */
jb_String PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self);

/** @brief Setter of the payerPhone property */
void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, jb_String * value);

/** @brief Getter of the shippingAddress property */
AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self);

/** @brief Setter of the shippingAddress property */
void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, AddressInit * value);

/** @brief Getter of the shippingOption property */
jb_String PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self);

/** @brief Setter of the shippingOption property */
void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, jb_String * value);

/** @brief Constructor of the PaymentHandlerResponse dictionary type */
PaymentHandlerResponse PaymentHandlerResponse_new();

#ifdef __cplusplus
}
#endif
