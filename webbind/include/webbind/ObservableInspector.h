#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ObservableInspector, em_Val);

jb_Function ObservableInspector_next(const ObservableInspector *self);

void ObservableInspector_set_next(ObservableInspector* self, jb_Function * value);

jb_Function ObservableInspector_error(const ObservableInspector *self);

void ObservableInspector_set_error(ObservableInspector* self, jb_Function * value);

jb_Function ObservableInspector_complete(const ObservableInspector *self);

void ObservableInspector_set_complete(ObservableInspector* self, jb_Function * value);

jb_Function ObservableInspector_subscribe(const ObservableInspector *self);

void ObservableInspector_set_subscribe(ObservableInspector* self, jb_Function * value);

jb_Function ObservableInspector_abort(const ObservableInspector *self);

void ObservableInspector_set_abort(ObservableInspector* self, jb_Function * value);

ObservableInspector ObservableInspector_new();

#ifdef __cplusplus
}
#endif
