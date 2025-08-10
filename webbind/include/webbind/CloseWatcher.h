#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CloseWatcherOptions CloseWatcherOptions;

DECLARE_EMLITE_TYPE(CloseWatcher, EventTarget);

CloseWatcher CloseWatcher_new0();

CloseWatcher CloseWatcher_new1(CloseWatcherOptions * options);

jb_Undefined CloseWatcher_requestClose(CloseWatcher* self );

jb_Undefined CloseWatcher_close(CloseWatcher* self );

jb_Undefined CloseWatcher_destroy(CloseWatcher* self );

jb_Any CloseWatcher_oncancel(const CloseWatcher *self);

void CloseWatcher_set_oncancel(CloseWatcher* self, jb_Any * value);

jb_Any CloseWatcher_onclose(const CloseWatcher *self);

void CloseWatcher_set_onclose(CloseWatcher* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
