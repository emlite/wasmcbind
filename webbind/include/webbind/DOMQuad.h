#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMRectReadOnly.h"
#include "enums.h"

typedef struct DOMQuad DOMQuad;
typedef struct DOMPoint DOMPoint;
typedef struct DOMRect DOMRect;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct DOMPointInit DOMPointInit;


typedef struct {
  em_Val inner;
} DOMQuad;


DECLARE_EMLITE_TYPE(DOMQuad, em_Val);

DOMQuad DOMQuad_new();

DOMQuad DOMQuad_new(const DOMPointInit* p1);

DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2);

DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2, const DOMPointInit* p3);

DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2, const DOMPointInit* p3, const DOMPointInit* p4);

DOMQuad DOMQuad_fromRect(DOMQuad* self );

DOMQuad DOMQuad_fromRect(DOMQuad* self , const DOMRectInit* other);

DOMQuad DOMQuad_fromQuad(DOMQuad* self );

DOMQuad DOMQuad_fromQuad(DOMQuad* self , const DOMQuadInit* other);

DOMPoint DOMQuad_p1( const DOMQuad *self);

DOMPoint DOMQuad_p2( const DOMQuad *self);

DOMPoint DOMQuad_p3( const DOMQuad *self);

DOMPoint DOMQuad_p4( const DOMQuad *self);

DOMRect DOMQuad_getBounds(DOMQuad* self );

jb_Object DOMQuad_toJSON(DOMQuad* self );
