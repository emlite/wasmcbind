#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportDatagramsWritable WebTransportDatagramsWritable;
typedef struct WebTransportSendOptions WebTransportSendOptions;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface WebTransportDatagramDuplexStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramDuplexStream)
 */
DECLARE_EMLITE_TYPE(WebTransportDatagramDuplexStream, em_Val);

/**
 * @brief Calls the `createWritable` method. 
*/
WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable0(WebTransportDatagramDuplexStream* self );

/**
 * @brief Calls the `createWritable` method. 
*/
WebTransportDatagramsWritable WebTransportDatagramDuplexStream_createWritable1(WebTransportDatagramDuplexStream* self , WebTransportSendOptions * options);

/**
 * @brief Gets the `readable` property. 
*/
ReadableStream WebTransportDatagramDuplexStream_readable(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Gets the `maxDatagramSize` property. 
*/
unsigned long WebTransportDatagramDuplexStream_maxDatagramSize(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Gets the `incomingMaxAge` property. 
*/
double WebTransportDatagramDuplexStream_incomingMaxAge(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Sets the `incomingMaxAge` property. 
*/
void WebTransportDatagramDuplexStream_set_incomingMaxAge(WebTransportDatagramDuplexStream* self, double value);

/**
 * @brief Gets the `outgoingMaxAge` property. 
*/
double WebTransportDatagramDuplexStream_outgoingMaxAge(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Sets the `outgoingMaxAge` property. 
*/
void WebTransportDatagramDuplexStream_set_outgoingMaxAge(WebTransportDatagramDuplexStream* self, double value);

/**
 * @brief Gets the `incomingHighWaterMark` property. 
*/
double WebTransportDatagramDuplexStream_incomingHighWaterMark(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Sets the `incomingHighWaterMark` property. 
*/
void WebTransportDatagramDuplexStream_set_incomingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);

/**
 * @brief Gets the `outgoingHighWaterMark` property. 
*/
double WebTransportDatagramDuplexStream_outgoingHighWaterMark(const WebTransportDatagramDuplexStream *self);

/**
 * @brief Sets the `outgoingHighWaterMark` property. 
*/
void WebTransportDatagramDuplexStream_set_outgoingHighWaterMark(WebTransportDatagramDuplexStream* self, double value);

#ifdef __cplusplus
}
#endif
