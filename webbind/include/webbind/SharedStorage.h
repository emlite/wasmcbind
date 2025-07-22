#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageWorklet.h"
#include "enums.h"

typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;
typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;
typedef struct SharedStorageModifierMethod SharedStorageModifierMethod;
typedef struct SharedStorageWorklet SharedStorageWorklet;
typedef struct SharedStorageWorkletOptions SharedStorageWorkletOptions;


typedef struct {
  em_Val inner;
} SharedStorageSetMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageSetMethodOptions, em_Val);

bool SharedStorageSetMethodOptions_ignoreIfPresent( const SharedStorageSetMethodOptions *self);

void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value);
typedef struct {
  em_Val inner;
} SharedStorageModifierMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);

jb_DOMString SharedStorageModifierMethodOptions_withLock( const SharedStorageModifierMethodOptions *self);

void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} SharedStorageWorkletOptions;


DECLARE_EMLITE_TYPE(SharedStorageWorkletOptions, em_Val);

jb_USVString SharedStorageWorkletOptions_dataOrigin( const SharedStorageWorkletOptions *self);

void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} SharedStorage;


DECLARE_EMLITE_TYPE(SharedStorage, em_Val);

jb_Promise SharedStorage_get(SharedStorage* self , const jb_DOMString* key);

jb_Promise SharedStorage_set(SharedStorage* self , const jb_DOMString* key, const jb_DOMString* value);

jb_Promise SharedStorage_set(SharedStorage* self , const jb_DOMString* key, const jb_DOMString* value, const SharedStorageSetMethodOptions* options);

jb_Promise SharedStorage_append(SharedStorage* self , const jb_DOMString* key, const jb_DOMString* value);

jb_Promise SharedStorage_append(SharedStorage* self , const jb_DOMString* key, const jb_DOMString* value, const SharedStorageModifierMethodOptions* options);

jb_Promise SharedStorage_delete_(SharedStorage* self , const jb_DOMString* key);

jb_Promise SharedStorage_delete_(SharedStorage* self , const jb_DOMString* key, const SharedStorageModifierMethodOptions* options);

jb_Promise SharedStorage_clear(SharedStorage* self );

jb_Promise SharedStorage_clear(SharedStorage* self , const SharedStorageModifierMethodOptions* options);

jb_Promise SharedStorage_batchUpdate(SharedStorage* self , const jb_Sequence* methods);

jb_Promise SharedStorage_batchUpdate(SharedStorage* self , const jb_Sequence* methods, const SharedStorageModifierMethodOptions* options);

jb_Promise SharedStorage_selectURL(SharedStorage* self , const jb_DOMString* name, const jb_Sequence* urls);

jb_Promise SharedStorage_selectURL(SharedStorage* self , const jb_DOMString* name, const jb_Sequence* urls, const SharedStorageRunOperationMethodOptions* options);

jb_Promise SharedStorage_run(SharedStorage* self , const jb_DOMString* name);

jb_Promise SharedStorage_run(SharedStorage* self , const jb_DOMString* name, const SharedStorageRunOperationMethodOptions* options);

jb_Promise SharedStorage_createWorklet(SharedStorage* self , const jb_USVString* moduleURL);

jb_Promise SharedStorage_createWorklet(SharedStorage* self , const jb_USVString* moduleURL, const SharedStorageWorkletOptions* options);

SharedStorageWorklet SharedStorage_worklet( const SharedStorage *self);

jb_Promise SharedStorage_length(SharedStorage* self );

jb_Promise SharedStorage_remainingBudget(SharedStorage* self );
