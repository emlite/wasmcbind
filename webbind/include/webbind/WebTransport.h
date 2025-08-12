#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportOptions WebTransportOptions;
typedef struct WebTransportConnectionStats WebTransportConnectionStats;
typedef struct WebTransportCloseInfo WebTransportCloseInfo;
typedef struct WebTransportDatagramDuplexStream WebTransportDatagramDuplexStream;
typedef struct WebTransportBidirectionalStream WebTransportBidirectionalStream;
typedef struct WebTransportSendStreamOptions WebTransportSendStreamOptions;
typedef struct ReadableStream ReadableStream;
typedef struct WebTransportSendStream WebTransportSendStream;
typedef struct WebTransportSendGroup WebTransportSendGroup;


/**
 * @brief Interface WebTransport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransport)
 */
DECLARE_EMLITE_TYPE(WebTransport, em_Val);

/**
 * @brief Creates a new `WebTransport` object. 
*/
WebTransport WebTransport_new0(jb_String * url);

/**
 * @brief Creates a new `WebTransport` object. 
*/
WebTransport WebTransport_new1(jb_String * url, WebTransportOptions * options);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise WebTransport_getStats(WebTransport* self );

/**
 * @brief Calls the `exportKeyingMaterial` method. 
*/
jb_Promise WebTransport_exportKeyingMaterial0(WebTransport* self , jb_Any * label);

/**
 * @brief Calls the `exportKeyingMaterial` method. 
*/
jb_Promise WebTransport_exportKeyingMaterial1(WebTransport* self , jb_Any * label, jb_Any * context);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise WebTransport_ready(const WebTransport *self);

/**
 * @brief Gets the `reliability` property. 
*/
WebTransportReliabilityMode WebTransport_reliability(const WebTransport *self);

/**
 * @brief Gets the `congestionControl` property. 
*/
WebTransportCongestionControl WebTransport_congestionControl(const WebTransport *self);

/**
 * @brief Gets the `anticipatedConcurrentIncomingUnidirectionalStreams` property. 
*/
unsigned short WebTransport_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransport *self);

/**
 * @brief Sets the `anticipatedConcurrentIncomingUnidirectionalStreams` property. 
*/
void WebTransport_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransport* self, unsigned short value);

/**
 * @brief Gets the `anticipatedConcurrentIncomingBidirectionalStreams` property. 
*/
unsigned short WebTransport_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransport *self);

/**
 * @brief Sets the `anticipatedConcurrentIncomingBidirectionalStreams` property. 
*/
void WebTransport_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransport* self, unsigned short value);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String WebTransport_protocol(const WebTransport *self);

/**
 * @brief Gets the `closed` property. 
*/
jb_Promise WebTransport_closed(const WebTransport *self);

/**
 * @brief Gets the `draining` property. 
*/
jb_Promise WebTransport_draining(const WebTransport *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined WebTransport_close0(WebTransport* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined WebTransport_close1(WebTransport* self , WebTransportCloseInfo * closeInfo);

/**
 * @brief Gets the `datagrams` property. 
*/
WebTransportDatagramDuplexStream WebTransport_datagrams(const WebTransport *self);

/**
 * @brief Calls the `createBidirectionalStream` method. 
*/
jb_Promise WebTransport_createBidirectionalStream0(WebTransport* self );

/**
 * @brief Calls the `createBidirectionalStream` method. 
*/
jb_Promise WebTransport_createBidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

/**
 * @brief Gets the `incomingBidirectionalStreams` property. 
*/
ReadableStream WebTransport_incomingBidirectionalStreams(const WebTransport *self);

/**
 * @brief Calls the `createUnidirectionalStream` method. 
*/
jb_Promise WebTransport_createUnidirectionalStream0(WebTransport* self );

/**
 * @brief Calls the `createUnidirectionalStream` method. 
*/
jb_Promise WebTransport_createUnidirectionalStream1(WebTransport* self , WebTransportSendStreamOptions * options);

/**
 * @brief Gets the `incomingUnidirectionalStreams` property. 
*/
ReadableStream WebTransport_incomingUnidirectionalStreams(const WebTransport *self);

/**
 * @brief Calls the `createSendGroup` method. 
*/
WebTransportSendGroup WebTransport_createSendGroup(WebTransport* self );

/**
 * @brief Gets the `supportsReliableOnly` property. 
*/
bool WebTransport_supportsReliableOnly(const WebTransport *self);

#ifdef __cplusplus
}
#endif
