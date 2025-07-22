#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats;


typedef struct {
  em_Val inner;
} ClipboardUnsanitizedFormats;


DECLARE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);

jb_Sequence ClipboardUnsanitizedFormats_unsanitized( const ClipboardUnsanitizedFormats *self);

void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, const jb_Sequence* value);
typedef struct {
  EventTarget inner;
} Clipboard;


DECLARE_EMLITE_TYPE(Clipboard, EventTarget);

jb_Promise Clipboard_read(Clipboard* self );

jb_Promise Clipboard_read(Clipboard* self , const ClipboardUnsanitizedFormats* formats);

jb_Promise Clipboard_readText(Clipboard* self );

jb_Promise Clipboard_write(Clipboard* self , const jb_Any* data);

jb_Promise Clipboard_writeText(Clipboard* self , const jb_DOMString* data);
