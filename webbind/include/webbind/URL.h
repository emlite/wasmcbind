#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct URL URL;
typedef struct URLSearchParams URLSearchParams;


DECLARE_EMLITE_TYPE(URL, em_Val);

URL URL_new0(jb_USVString * url);

URL URL_new1(jb_USVString * url, jb_USVString * base);

URL URL_parse0(URL* self , jb_USVString * url);

URL URL_parse1(URL* self , jb_USVString * url, jb_USVString * base);

bool URL_canParse0(URL* self , jb_USVString * url);

bool URL_canParse1(URL* self , jb_USVString * url, jb_USVString * base);

jb_USVString URL_href(const URL *self);

void URL_set_href(URL* self, jb_USVString * value);

jb_USVString URL_origin(const URL *self);

jb_USVString URL_protocol(const URL *self);

void URL_set_protocol(URL* self, jb_USVString * value);

jb_USVString URL_username(const URL *self);

void URL_set_username(URL* self, jb_USVString * value);

jb_USVString URL_password(const URL *self);

void URL_set_password(URL* self, jb_USVString * value);

jb_USVString URL_host(const URL *self);

void URL_set_host(URL* self, jb_USVString * value);

jb_USVString URL_hostname(const URL *self);

void URL_set_hostname(URL* self, jb_USVString * value);

jb_USVString URL_port(const URL *self);

void URL_set_port(URL* self, jb_USVString * value);

jb_USVString URL_pathname(const URL *self);

void URL_set_pathname(URL* self, jb_USVString * value);

jb_USVString URL_search(const URL *self);

void URL_set_search(URL* self, jb_USVString * value);

URLSearchParams URL_searchParams(const URL *self);

jb_USVString URL_hash(const URL *self);

void URL_set_hash(URL* self, jb_USVString * value);

jb_USVString URL_toJSON(URL* self );

jb_DOMString URL_createObjectURL(URL* self , jb_Any * obj);

jb_Undefined URL_revokeObjectURL(URL* self , jb_DOMString * url);
