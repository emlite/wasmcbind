#include <jsbind/text.h>

DEFINE_EMLITE_TYPE(jb_TextEncoder, em_Val);
DEFINE_EMLITE_TYPE(jb_TextDecoder, em_Val);

jb_TextEncoder jb_TextEncoder_new() {
    return (jb_TextEncoder
    ){.inner = em_Val_new(em_Val_global("TextEncoder"))};
}

jb_Uint8Array jb_TextEncoder_encode(
    const jb_TextEncoder *encoder, const char *str
) {
    return (jb_Uint8Array
    ){.inner = em_Val_call(
          encoder->inner, "encode", em_Val_from_string(str)
      )};
}

jb_EncodeResult jb_TextEncoder_encode_into(
    const jb_TextEncoder *encoder,
    const char *src,
    jb_Uint8Array *dst
) {
    em_Val res = em_Val_call(
        encoder->inner,
        "encodeInto",
        em_Val_from_string(src),
        dst->inner
    );
    size_t read =
        em_Val_as_int(em_Val_get(res, em_Val_from("read")));
    size_t written = em_Val_as_int(
        em_Val_get(res, em_Val_from("written"))
    );
    return (jb_EncodeResult
    ){.read = read, .written = written};
}

jb_TextDecoder jb_TextDecoder_new() {
    return (jb_TextDecoder
    ){.inner = em_Val_new(em_Val_global("TextDecoder"))};
}

jb_TextDecoder jb_TextDecoder_new_with_label(
    const char *label
) {
    return (jb_TextDecoder
    ){.inner = em_Val_new(
          em_Val_global("TextDecoder"),
          em_Val_from_string(label)
      )};
}

jb_TextDecoder jb_TextDecoder_new_with_options(
    const jb_Any *options
) {
    return (jb_TextDecoder
    ){.inner = em_Val_new(
          em_Val_global("TextDecoder"), options->inner
      )};
}

jb_TextDecoder jb_TextDecoder_new_with_label_and_options(
    const char *label, const jb_Any *options
) {
    return (jb_TextDecoder
    ){.inner = em_Val_new(
          em_Val_global("TextDecoder"),
          em_Val_from_string(label),
          options->inner
      )};
}

jb_String jb_TextDecoder_decode(
    const jb_TextDecoder *decoder,
    const jb_Uint8Array *bytes
) {
    return (jb_String
    ){.inner = em_Val_call(
          decoder->inner, "decode", bytes->inner
      )};
}
