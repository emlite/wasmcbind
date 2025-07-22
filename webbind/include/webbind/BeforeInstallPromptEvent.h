#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct PromptResponseObject PromptResponseObject;


typedef struct {
  em_Val inner;
} PromptResponseObject;


DECLARE_EMLITE_TYPE(PromptResponseObject, em_Val);

AppBannerPromptOutcome PromptResponseObject_userChoice( const PromptResponseObject *self);

void PromptResponseObject_set_userChoice(PromptResponseObject* self, const AppBannerPromptOutcome* value);
typedef struct {
  Event inner;
} BeforeInstallPromptEvent;


DECLARE_EMLITE_TYPE(BeforeInstallPromptEvent, Event);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new(const jb_DOMString* type);

BeforeInstallPromptEvent BeforeInstallPromptEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Promise BeforeInstallPromptEvent_prompt(BeforeInstallPromptEvent* self );
