#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats;

DECLARE_EMLITE_TYPE(Clipboard, EventTarget);

jb_Promise Clipboard_read0(Clipboard* self );

jb_Promise Clipboard_read1(Clipboard* self , ClipboardUnsanitizedFormats * formats);

jb_Promise Clipboard_readText(Clipboard* self );

jb_Promise Clipboard_write(Clipboard* self , jb_Any * data);

jb_Promise Clipboard_writeText(Clipboard* self , jb_String * data);

#ifdef __cplusplus
}
#endif
