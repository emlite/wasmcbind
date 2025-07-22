#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct URLPatternResult URLPatternResult;


typedef struct {
  em_Val inner;
} URLPatternResult;


DECLARE_EMLITE_TYPE(URLPatternResult, em_Val);

jb_Sequence URLPatternResult_inputs( const URLPatternResult *self);

void URLPatternResult_set_inputs(URLPatternResult* self, const jb_Sequence* value);

jb_Any URLPatternResult_protocol( const URLPatternResult *self);

void URLPatternResult_set_protocol(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_username( const URLPatternResult *self);

void URLPatternResult_set_username(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_password( const URLPatternResult *self);

void URLPatternResult_set_password(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_hostname( const URLPatternResult *self);

void URLPatternResult_set_hostname(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_port( const URLPatternResult *self);

void URLPatternResult_set_port(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_pathname( const URLPatternResult *self);

void URLPatternResult_set_pathname(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_search( const URLPatternResult *self);

void URLPatternResult_set_search(URLPatternResult* self, const jb_Any* value);

jb_Any URLPatternResult_hash( const URLPatternResult *self);

void URLPatternResult_set_hash(URLPatternResult* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} URLPattern;


DECLARE_EMLITE_TYPE(URLPattern, em_Val);

URLPattern URLPattern_new();

URLPattern URLPattern_new(const jb_Any* input);

URLPattern URLPattern_new(const jb_Any* input, const jb_Any* options);

bool URLPattern_test(URLPattern* self );

bool URLPattern_test(URLPattern* self , const jb_Any* input);

bool URLPattern_test(URLPattern* self , const jb_Any* input, const jb_USVString* baseURL);

URLPatternResult URLPattern_exec(URLPattern* self );

URLPatternResult URLPattern_exec(URLPattern* self , const jb_Any* input);

URLPatternResult URLPattern_exec(URLPattern* self , const jb_Any* input, const jb_USVString* baseURL);

jb_USVString URLPattern_protocol( const URLPattern *self);

jb_USVString URLPattern_username( const URLPattern *self);

jb_USVString URLPattern_password( const URLPattern *self);

jb_USVString URLPattern_hostname( const URLPattern *self);

jb_USVString URLPattern_port( const URLPattern *self);

jb_USVString URLPattern_pathname( const URLPattern *self);

jb_USVString URLPattern_search( const URLPattern *self);

jb_USVString URLPattern_hash( const URLPattern *self);

bool URLPattern_hasRegExpGroups( const URLPattern *self);
