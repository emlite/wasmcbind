#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBControlTransferParameters */
DECLARE_EMLITE_TYPE(USBControlTransferParameters, em_Val);

/** @brief Getter of the requestType property */
USBRequestType USBControlTransferParameters_requestType(const USBControlTransferParameters *self);

/** @brief Setter of the requestType property */
void USBControlTransferParameters_set_requestType(USBControlTransferParameters* self, USBRequestType * value);

/** @brief Getter of the recipient property */
USBRecipient USBControlTransferParameters_recipient(const USBControlTransferParameters *self);

/** @brief Setter of the recipient property */
void USBControlTransferParameters_set_recipient(USBControlTransferParameters* self, USBRecipient * value);

/** @brief Getter of the request property */
unsigned char USBControlTransferParameters_request(const USBControlTransferParameters *self);

/** @brief Setter of the request property */
void USBControlTransferParameters_set_request(USBControlTransferParameters* self, unsigned char value);

/** @brief Getter of the value property */
unsigned short USBControlTransferParameters_value(const USBControlTransferParameters *self);

/** @brief Setter of the value property */
void USBControlTransferParameters_set_value(USBControlTransferParameters* self, unsigned short value);

/** @brief Getter of the index property */
unsigned short USBControlTransferParameters_index(const USBControlTransferParameters *self);

/** @brief Setter of the index property */
void USBControlTransferParameters_set_index(USBControlTransferParameters* self, unsigned short value);

/** @brief Constructor of the USBControlTransferParameters dictionary type */
USBControlTransferParameters USBControlTransferParameters_new();

#ifdef __cplusplus
}
#endif
