#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMStringList DOMStringList;


DECLARE_EMLITE_TYPE(Location, em_Val);

jb_USVString Location_href(const Location *self);

void Location_set_href(Location* self, jb_USVString * value);

jb_USVString Location_origin(const Location *self);

jb_USVString Location_protocol(const Location *self);

void Location_set_protocol(Location* self, jb_USVString * value);

jb_USVString Location_host(const Location *self);

void Location_set_host(Location* self, jb_USVString * value);

jb_USVString Location_hostname(const Location *self);

void Location_set_hostname(Location* self, jb_USVString * value);

jb_USVString Location_port(const Location *self);

void Location_set_port(Location* self, jb_USVString * value);

jb_USVString Location_pathname(const Location *self);

void Location_set_pathname(Location* self, jb_USVString * value);

jb_USVString Location_search(const Location *self);

void Location_set_search(Location* self, jb_USVString * value);

jb_USVString Location_hash(const Location *self);

void Location_set_hash(Location* self, jb_USVString * value);

jb_Undefined Location_assign(Location* self , jb_USVString * url);

jb_Undefined Location_replace(Location* self , jb_USVString * url);

jb_Undefined Location_reload(Location* self );

DOMStringList Location_ancestorOrigins(const Location *self);
