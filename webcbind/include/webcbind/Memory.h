#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MemoryDescriptor MemoryDescriptor;


/**
 * @brief Interface Memory
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Memory)
 */
DECLARE_EMLITE_TYPE(Memory, em_Val);

/**
 * @brief Creates a new `Memory` object. 
*/
Memory Memory_new(MemoryDescriptor * descriptor);

/**
 * @brief Calls the `grow` method. 
*/
unsigned long Memory_grow(Memory* self , unsigned long delta);

/**
 * @brief Calls the `toFixedLengthBuffer` method. 
*/
jb_ArrayBuffer Memory_toFixedLengthBuffer(Memory* self );

/**
 * @brief Calls the `toResizableBuffer` method. 
*/
jb_ArrayBuffer Memory_toResizableBuffer(Memory* self );

/**
 * @brief Gets the `buffer` property. 
*/
jb_ArrayBuffer Memory_buffer(const Memory *self);

#ifdef __cplusplus
}
#endif
