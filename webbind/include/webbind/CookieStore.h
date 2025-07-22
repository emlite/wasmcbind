#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct CookieListItem CookieListItem;
typedef struct CookieStoreGetOptions CookieStoreGetOptions;
typedef struct CookieInit CookieInit;
typedef struct CookieStoreDeleteOptions CookieStoreDeleteOptions;


typedef struct {
  em_Val inner;
} CookieListItem;


DECLARE_EMLITE_TYPE(CookieListItem, em_Val);

jb_USVString CookieListItem_name( const CookieListItem *self);

void CookieListItem_set_name(CookieListItem* self, const jb_USVString* value);

jb_USVString CookieListItem_value( const CookieListItem *self);

void CookieListItem_set_value(CookieListItem* self, const jb_USVString* value);

jb_USVString CookieListItem_domain( const CookieListItem *self);

void CookieListItem_set_domain(CookieListItem* self, const jb_USVString* value);

jb_USVString CookieListItem_path( const CookieListItem *self);

void CookieListItem_set_path(CookieListItem* self, const jb_USVString* value);

jb_Any CookieListItem_expires( const CookieListItem *self);

void CookieListItem_set_expires(CookieListItem* self, const jb_Any* value);

bool CookieListItem_secure( const CookieListItem *self);

void CookieListItem_set_secure(CookieListItem* self, bool value);

CookieSameSite CookieListItem_sameSite( const CookieListItem *self);

void CookieListItem_set_sameSite(CookieListItem* self, const CookieSameSite* value);

bool CookieListItem_partitioned( const CookieListItem *self);

void CookieListItem_set_partitioned(CookieListItem* self, bool value);
typedef struct {
  em_Val inner;
} CookieStoreGetOptions;


DECLARE_EMLITE_TYPE(CookieStoreGetOptions, em_Val);

jb_USVString CookieStoreGetOptions_name( const CookieStoreGetOptions *self);

void CookieStoreGetOptions_set_name(CookieStoreGetOptions* self, const jb_USVString* value);

jb_USVString CookieStoreGetOptions_url( const CookieStoreGetOptions *self);

void CookieStoreGetOptions_set_url(CookieStoreGetOptions* self, const jb_USVString* value);
typedef struct {
  em_Val inner;
} CookieInit;


DECLARE_EMLITE_TYPE(CookieInit, em_Val);

jb_USVString CookieInit_name( const CookieInit *self);

void CookieInit_set_name(CookieInit* self, const jb_USVString* value);

jb_USVString CookieInit_value( const CookieInit *self);

void CookieInit_set_value(CookieInit* self, const jb_USVString* value);

jb_Any CookieInit_expires( const CookieInit *self);

void CookieInit_set_expires(CookieInit* self, const jb_Any* value);

jb_USVString CookieInit_domain( const CookieInit *self);

void CookieInit_set_domain(CookieInit* self, const jb_USVString* value);

jb_USVString CookieInit_path( const CookieInit *self);

void CookieInit_set_path(CookieInit* self, const jb_USVString* value);

CookieSameSite CookieInit_sameSite( const CookieInit *self);

void CookieInit_set_sameSite(CookieInit* self, const CookieSameSite* value);

bool CookieInit_partitioned( const CookieInit *self);

void CookieInit_set_partitioned(CookieInit* self, bool value);
typedef struct {
  em_Val inner;
} CookieStoreDeleteOptions;


DECLARE_EMLITE_TYPE(CookieStoreDeleteOptions, em_Val);

jb_USVString CookieStoreDeleteOptions_name( const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_name(CookieStoreDeleteOptions* self, const jb_USVString* value);

jb_USVString CookieStoreDeleteOptions_domain( const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_domain(CookieStoreDeleteOptions* self, const jb_USVString* value);

jb_USVString CookieStoreDeleteOptions_path( const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_path(CookieStoreDeleteOptions* self, const jb_USVString* value);

bool CookieStoreDeleteOptions_partitioned( const CookieStoreDeleteOptions *self);

void CookieStoreDeleteOptions_set_partitioned(CookieStoreDeleteOptions* self, bool value);
typedef struct {
  EventTarget inner;
} CookieStore;


DECLARE_EMLITE_TYPE(CookieStore, EventTarget);

jb_Promise CookieStore_get(CookieStore* self );

jb_Promise CookieStore_get(CookieStore* self , const CookieStoreGetOptions* options);

jb_Promise CookieStore_getAll(CookieStore* self );

jb_Promise CookieStore_getAll(CookieStore* self , const CookieStoreGetOptions* options);

jb_Promise CookieStore_set(CookieStore* self , const CookieInit* options);

jb_Promise CookieStore_delete_(CookieStore* self , const CookieStoreDeleteOptions* options);

jb_Any CookieStore_onchange( const CookieStore *self);

void CookieStore_set_onchange(CookieStore* self, const jb_Any* value);
