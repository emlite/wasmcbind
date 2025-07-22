#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Client Client;
typedef struct ClientQueryOptions ClientQueryOptions;
typedef struct WindowClient WindowClient;


typedef struct {
  em_Val inner;
} ClientQueryOptions;


DECLARE_EMLITE_TYPE(ClientQueryOptions, em_Val);

bool ClientQueryOptions_includeUncontrolled( const ClientQueryOptions *self);

void ClientQueryOptions_set_includeUncontrolled(ClientQueryOptions* self, bool value);

ClientType ClientQueryOptions_type( const ClientQueryOptions *self);

void ClientQueryOptions_set_type(ClientQueryOptions* self, const ClientType* value);
typedef struct {
  em_Val inner;
} Clients;


DECLARE_EMLITE_TYPE(Clients, em_Val);

jb_Promise Clients_get(Clients* self , const jb_DOMString* id);

jb_Promise Clients_matchAll(Clients* self );

jb_Promise Clients_matchAll(Clients* self , const ClientQueryOptions* options);

jb_Promise Clients_openWindow(Clients* self , const jb_USVString* url);

jb_Promise Clients_claim(Clients* self );
