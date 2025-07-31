#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Response, em_Val);

typedef struct jb_Promise jb_Promise;

bool jb_Response_ok(const jb_Response *response);
uint16_t jb_Response_status(const jb_Response *response);
jb_Any jb_Response_headers_raw(const jb_Response *response);
jb_Promise jb_Response_text(const jb_Response *response);
jb_Promise jb_Response_json(const jb_Response *response);
jb_Promise jb_Response_array_buffer(
    const jb_Response *response
);

jb_Promise jb_fetch(const char *input);
jb_Promise jb_fetch_with_init(
    const char *input, const jb_Any *init
);
jb_Promise jb_fetch_val(const jb_Any *input);
jb_Promise jb_fetch_val_with_init(
    const char *input, const jb_Any *init
);

#ifdef __cplusplus
}
#endif
