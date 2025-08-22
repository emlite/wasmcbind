#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFScanOptions NDEFScanOptions;
typedef struct NDEFWriteOptions NDEFWriteOptions;
typedef struct NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions;


/**
 * @brief Interface NDEFReader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReader)
 */
DECLARE_EMLITE_TYPE(NDEFReader, EventTarget);

/**
 * @brief Creates a new `NDEFReader` object. 
*/
NDEFReader NDEFReader_new();

/**
 * @brief Gets the `onreading` property. 
*/
jb_Any NDEFReader_onreading(const NDEFReader *self);

/**
 * @brief Sets the `onreading` property. 
*/
void NDEFReader_set_onreading(NDEFReader* self, jb_Any * value);

/**
 * @brief Gets the `onreadingerror` property. 
*/
jb_Any NDEFReader_onreadingerror(const NDEFReader *self);

/**
 * @brief Sets the `onreadingerror` property. 
*/
void NDEFReader_set_onreadingerror(NDEFReader* self, jb_Any * value);

/**
 * @brief Calls the `scan` method. 
*/
jb_Promise NDEFReader_scan0(NDEFReader* self );

/**
 * @brief Calls the `scan` method. 
*/
jb_Promise NDEFReader_scan1(NDEFReader* self , NDEFScanOptions * options);

/**
 * @brief Calls the `write` method. 
*/
jb_Promise NDEFReader_write0(NDEFReader* self , jb_Any * message);

/**
 * @brief Calls the `write` method. 
*/
jb_Promise NDEFReader_write1(NDEFReader* self , jb_Any * message, NDEFWriteOptions * options);

/**
 * @brief Calls the `makeReadOnly` method. 
*/
jb_Promise NDEFReader_makeReadOnly0(NDEFReader* self );

/**
 * @brief Calls the `makeReadOnly` method. 
*/
jb_Promise NDEFReader_makeReadOnly1(NDEFReader* self , NDEFMakeReadOnlyOptions * options);

#ifdef __cplusplus
}
#endif
