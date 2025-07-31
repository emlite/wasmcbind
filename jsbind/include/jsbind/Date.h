#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_Date, em_Val);

typedef struct jb_String jb_String;

jb_Date jb_Date_new();
jb_Date jb_Date_from_epoch_millis(int64_t ms);
int64_t jb_Date_now_epoch_millis();
int64_t jb_Date_value_of(const jb_Date *date);
int64_t jb_Date_get_time(const jb_Date *date);
jb_String jb_Date_to_iso_string(const jb_Date *date);
jb_String jb_Date_to_utc_string(const jb_Date *date);
jb_String jb_Date_to_locale_string(
    const jb_Date *date,
    const jb_Any *locales,
    const jb_Any *options
);
jb_Date jb_Date_add_millis(
    const jb_Date *date, int64_t delta
);
int64_t jb_Date_diff_millis(
    const jb_Date *date, const jb_Date *other
);

#ifdef __cplusplus
}
#endif
