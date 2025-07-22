#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMStringList DOMStringList;


typedef struct {
  em_Val inner;
} Location;


DECLARE_EMLITE_TYPE(Location, em_Val);

jb_USVString Location_href( const Location *self);

void Location_set_href(Location* self, const jb_USVString* value);

jb_USVString Location_origin( const Location *self);

jb_USVString Location_protocol( const Location *self);

void Location_set_protocol(Location* self, const jb_USVString* value);

jb_USVString Location_host( const Location *self);

void Location_set_host(Location* self, const jb_USVString* value);

jb_USVString Location_hostname( const Location *self);

void Location_set_hostname(Location* self, const jb_USVString* value);

jb_USVString Location_port( const Location *self);

void Location_set_port(Location* self, const jb_USVString* value);

jb_USVString Location_pathname( const Location *self);

void Location_set_pathname(Location* self, const jb_USVString* value);

jb_USVString Location_search( const Location *self);

void Location_set_search(Location* self, const jb_USVString* value);

jb_USVString Location_hash( const Location *self);

void Location_set_hash(Location* self, const jb_USVString* value);

jb_Undefined Location_assign(Location* self , const jb_USVString* url);

jb_Undefined Location_replace(Location* self , const jb_USVString* url);

jb_Undefined Location_reload(Location* self );

DOMStringList Location_ancestorOrigins( const Location *self);
