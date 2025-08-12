#pragma once

#include "Any.h"
#include "Array.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_TextEncoder, em_Val);
DECLARE_EMLITE_TYPE(jb_TextDecoder, em_Val);

typedef struct {
    size_t read;
    size_t written;
} jb_EncodeResult;

jb_TextEncoder jb_TextEncoder_new();
jb_Uint8Array jb_TextEncoder_encode(const jb_TextEncoder *encoder, const char *str);
jb_EncodeResult jb_TextEncoder_encode_into(
    const jb_TextEncoder *encoder, const char *src, jb_Uint8Array *dst
);

jb_TextDecoder jb_TextDecoder_new();
jb_TextDecoder jb_TextDecoder_new_with_label(const char *label);
jb_TextDecoder jb_TextDecoder_new_with_options(const jb_Any *options);
jb_TextDecoder jb_TextDecoder_new_with_label_and_options(const char *label, const jb_Any *options);
jb_String jb_TextDecoder_decode(const jb_TextDecoder *decoder, const jb_Uint8Array *bytes);

#ifdef __cplusplus
}
#endif
