#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BackgroundFetchEvent.h"
#include "enums.h"

typedef struct BackgroundFetchUIOptions BackgroundFetchUIOptions;


DECLARE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);

jb_Sequence BackgroundFetchUIOptions_icons( const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, jb_Sequence * value);

jb_DOMString BackgroundFetchUIOptions_title( const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(BackgroundFetchUpdateUIEvent, BackgroundFetchEvent);

BackgroundFetchUpdateUIEvent BackgroundFetchUpdateUIEvent_new(jb_DOMString * type, jb_Any * init);

jb_Promise BackgroundFetchUpdateUIEvent_updateUI0(BackgroundFetchUpdateUIEvent* self );

jb_Promise BackgroundFetchUpdateUIEvent_updateUI1(BackgroundFetchUpdateUIEvent* self , BackgroundFetchUIOptions * options);
