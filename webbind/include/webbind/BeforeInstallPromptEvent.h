#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventInit EventInit;
typedef struct PromptResponseObject PromptResponseObject;

DECLARE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new0(jb_String * type);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new1(jb_String * type, EventInit * eventInitDict);

jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self );

#ifdef __cplusplus
}
#endif
