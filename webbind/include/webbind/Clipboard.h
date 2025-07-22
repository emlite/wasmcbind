#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats;


DECLARE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);

jb_Sequence ClipboardUnsanitizedFormats_unsanitized( const ClipboardUnsanitizedFormats *self);

void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(Clipboard, EventTarget);

jb_Promise Clipboard_read0(Clipboard* self );

jb_Promise Clipboard_read1(Clipboard* self , ClipboardUnsanitizedFormats * formats);

jb_Promise Clipboard_readText(Clipboard* self );

jb_Promise Clipboard_write(Clipboard* self , jb_Any * data);

jb_Promise Clipboard_writeText(Clipboard* self , jb_DOMString * data);
