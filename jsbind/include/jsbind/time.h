#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

double jb_Performance_now();

void jb_clear_timeout(int32_t id);
void jb_clear_interval(int32_t id);

int32_t jb_set_timeout(
    const jb_Function *cb, int32_t millis
);
int32_t jb_set_interval(
    const jb_Function *cb, int32_t millis
);

#ifdef __cplusplus
}
#endif
