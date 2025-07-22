#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} CloseWatcher;


DECLARE_EMLITE_TYPE(CloseWatcher, EventTarget);

CloseWatcher CloseWatcher_new();

CloseWatcher CloseWatcher_new(const jb_Any* options);

jb_Undefined CloseWatcher_requestClose(CloseWatcher* self );

jb_Undefined CloseWatcher_close(CloseWatcher* self );

jb_Undefined CloseWatcher_destroy(CloseWatcher* self );

jb_Any CloseWatcher_oncancel( const CloseWatcher *self);

void CloseWatcher_set_oncancel(CloseWatcher* self, const jb_Any* value);

jb_Any CloseWatcher_onclose( const CloseWatcher *self);

void CloseWatcher_set_onclose(CloseWatcher* self, const jb_Any* value);
