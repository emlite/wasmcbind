#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct QueuingStrategy QueuingStrategy;
typedef struct WritableStreamDefaultWriter WritableStreamDefaultWriter;

DECLARE_EMLITE_TYPE(WritableStream, em_Val);

WritableStream WritableStream_new0();

WritableStream WritableStream_new1(jb_Object * underlyingSink);

WritableStream WritableStream_new2(jb_Object * underlyingSink, QueuingStrategy * strategy);

bool WritableStream_locked(const WritableStream *self);

jb_Promise WritableStream_abort0(WritableStream* self );

jb_Promise WritableStream_abort1(WritableStream* self , jb_Any * reason);

jb_Promise WritableStream_close(WritableStream* self );

WritableStreamDefaultWriter WritableStream_getWriter(WritableStream* self );

#ifdef __cplusplus
}
#endif
