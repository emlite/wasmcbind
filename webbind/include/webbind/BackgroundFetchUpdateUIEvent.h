#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BackgroundFetchEvent.h"
#include "enums.h"

typedef struct BackgroundFetchUIOptions BackgroundFetchUIOptions;


typedef struct {
  em_Val inner;
} BackgroundFetchUIOptions;


DECLARE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);

jb_Sequence BackgroundFetchUIOptions_icons( const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, const jb_Sequence* value);

jb_DOMString BackgroundFetchUIOptions_title( const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, const jb_DOMString* value);
typedef struct {
  BackgroundFetchEvent inner;
} BackgroundFetchUpdateUIEvent;


DECLARE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(const jb_DOMString* type, const jb_Any* init);

jb_Promise BackgroundFetchUpdateUIEvent_updateUI(BackgroundFetchUpdateUIEvent* self );

jb_Promise BackgroundFetchUpdateUIEvent_updateUI(BackgroundFetchUpdateUIEvent* self , const BackgroundFetchUIOptions* options);
