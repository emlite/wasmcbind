#include <jsbind/Date.h>
#include <jsbind/String.h>

DEFINE_EMLITE_TYPE(jb_Date, em_Val);

jb_Date jb_Date_new() {
    return (jb_Date
    ){.inner = em_Val_new(em_Val_global("Date"))};
}

jb_Date jb_Date_from_epoch_millis(int64_t ms) {
    return (jb_Date
    ){.inner = em_Val_new(
          em_Val_global("Date"), em_Val_from_int(ms)
      )};
}

int64_t jb_Date_now_epoch_millis() {
    return em_Val_as_int(
        em_Val_call(em_Val_global("Date"), "now")
    );
}

int64_t jb_Date_value_of(const jb_Date *date) {
    return em_Val_as_int(em_Val_call(date->inner, "valueOf")
    );
}

int64_t jb_Date_get_time(const jb_Date *date) {
    return jb_Date_value_of(date);
}

jb_String jb_Date_to_iso_string(const jb_Date *date) {
    return (jb_String
    ){.inner = em_Val_call(date->inner, "toISOString")};
}

jb_String jb_Date_to_utc_string(const jb_Date *date) {
    return (jb_String
    ){.inner = em_Val_call(date->inner, "toUTCString")};
}

jb_String jb_Date_to_locale_string(
    const jb_Date *date,
    const jb_Any *locales,
    const jb_Any *options
) {
    if (locales && options) {
        return (jb_String
        ){.inner = em_Val_call(
              date->inner,
              "toLocaleString",
              locales->inner,
              options->inner
          )};
    } else if (locales) {
        return (jb_String
        ){.inner = em_Val_call(
              date->inner, "toLocaleString", locales->inner
          )};
    } else if (options) {
        return (jb_String
        ){.inner = em_Val_call(
              date->inner, "toLocaleString", options->inner
          )};
    } else {
        return (jb_String
        ){.inner =
              em_Val_call(date->inner, "toLocaleString")};
    }
}

jb_Date jb_Date_add_millis(
    const jb_Date *date, int64_t delta
) {
    return jb_Date_from_epoch_millis(
        jb_Date_value_of(date) + delta
    );
}

int64_t jb_Date_diff_millis(
    const jb_Date *date, const jb_Date *other
) {
    return jb_Date_value_of(other) - jb_Date_value_of(date);
}
