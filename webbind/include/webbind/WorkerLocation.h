#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WorkerLocation;


DECLARE_EMLITE_TYPE(WorkerLocation, em_Val);

jb_USVString WorkerLocation_href( const WorkerLocation *self);

jb_USVString WorkerLocation_origin( const WorkerLocation *self);

jb_USVString WorkerLocation_protocol( const WorkerLocation *self);

jb_USVString WorkerLocation_host( const WorkerLocation *self);

jb_USVString WorkerLocation_hostname( const WorkerLocation *self);

jb_USVString WorkerLocation_port( const WorkerLocation *self);

jb_USVString WorkerLocation_pathname( const WorkerLocation *self);

jb_USVString WorkerLocation_search( const WorkerLocation *self);

jb_USVString WorkerLocation_hash( const WorkerLocation *self);
