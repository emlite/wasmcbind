#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Request Request;

/** @brief Dictionary type FetchEventInit */
DECLARE_EMLITE_TYPE(FetchEventInit, ExtendableEventInit);

/** @brief Getter of the request property */
Request FetchEventInit_request(const FetchEventInit *self);

/** @brief Setter of the request property */
void FetchEventInit_set_request(FetchEventInit* self, Request * value);

/** @brief Getter of the preloadResponse property */
jb_Promise FetchEventInit_preloadResponse(const FetchEventInit *self);

/** @brief Setter of the preloadResponse property */
void FetchEventInit_set_preloadResponse(FetchEventInit* self, jb_Promise * value);

/** @brief Getter of the clientId property */
jb_String FetchEventInit_clientId(const FetchEventInit *self);

/** @brief Setter of the clientId property */
void FetchEventInit_set_clientId(FetchEventInit* self, jb_String * value);

/** @brief Getter of the resultingClientId property */
jb_String FetchEventInit_resultingClientId(const FetchEventInit *self);

/** @brief Setter of the resultingClientId property */
void FetchEventInit_set_resultingClientId(FetchEventInit* self, jb_String * value);

/** @brief Getter of the replacesClientId property */
jb_String FetchEventInit_replacesClientId(const FetchEventInit *self);

/** @brief Setter of the replacesClientId property */
void FetchEventInit_set_replacesClientId(FetchEventInit* self, jb_String * value);

/** @brief Getter of the handled property */
jb_Promise FetchEventInit_handled(const FetchEventInit *self);

/** @brief Setter of the handled property */
void FetchEventInit_set_handled(FetchEventInit* self, jb_Promise * value);

/** @brief Constructor of the FetchEventInit dictionary type */
FetchEventInit FetchEventInit_new();

#ifdef __cplusplus
}
#endif
