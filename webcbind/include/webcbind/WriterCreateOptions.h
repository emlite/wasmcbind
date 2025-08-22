#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WriterCreateCoreOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type WriterCreateOptions */
DECLARE_EMLITE_TYPE(WriterCreateOptions, WriterCreateCoreOptions);

/** @brief Getter of the signal property */
AbortSignal WriterCreateOptions_signal(const WriterCreateOptions *self);

/** @brief Setter of the signal property */
void WriterCreateOptions_set_signal(WriterCreateOptions* self, AbortSignal * value);

/** @brief Getter of the monitor property */
jb_Function WriterCreateOptions_monitor(const WriterCreateOptions *self);

/** @brief Setter of the monitor property */
void WriterCreateOptions_set_monitor(WriterCreateOptions* self, jb_Function * value);

/** @brief Getter of the sharedContext property */
jb_String WriterCreateOptions_sharedContext(const WriterCreateOptions *self);

/** @brief Setter of the sharedContext property */
void WriterCreateOptions_set_sharedContext(WriterCreateOptions* self, jb_String * value);

/** @brief Constructor of the WriterCreateOptions dictionary type */
WriterCreateOptions WriterCreateOptions_new();

#ifdef __cplusplus
}
#endif
