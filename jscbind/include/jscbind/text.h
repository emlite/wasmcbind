#pragma once

#include "Any.h"
#include "Array.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file text.h
 * @brief Bindings for the TextEncoder and TextDecoder JavaScript APIs.
 *
 * This file provides functions for encoding and decoding text, mirroring the
 * functionality of the `TextEncoder` and `TextDecoder` objects in JavaScript.
 */

/**
 * @brief An opaque type representing a `TextEncoder` object.
 */
DECLARE_EMLITE_TYPE(jb_TextEncoder, em_Val);

/**
 * @brief An opaque type representing a `TextDecoder` object.
 */
DECLARE_EMLITE_TYPE(jb_TextDecoder, em_Val);

/**
 * @brief The result of an encode operation.
 */
typedef struct {
    /**
     * @brief The number of bytes read from the source buffer.
     */
    size_t read;
    /**
     * @brief The number of bytes written to the destination buffer.
     */
    size_t written;
} jb_EncodeResult;

/**
 * @brief Creates a new `TextEncoder` object.
 *
 * @return A new `jb_TextEncoder` instance.
 */
jb_TextEncoder jb_TextEncoder_new();

/**
 * @brief Encodes a string into a `Uint8Array`.
 *
 * @param encoder A pointer to the `jb_TextEncoder` instance.
 * @param str The string to encode.
 * @return A new `jb_Uint8Array` containing the encoded string.
 */
jb_Uint8Array jb_TextEncoder_encode(const jb_TextEncoder *encoder, const char *str);

/**
 * @brief Encodes a string into a pre-allocated `Uint8Array`.
 *
 * @param encoder A pointer to the `jb_TextEncoder` instance.
 * @param src The string to encode.
 * @param dst A pointer to the destination `jb_Uint8Array`.
 * @return A `jb_EncodeResult` indicating the number of bytes read and written.
 */
jb_EncodeResult jb_TextEncoder_encode_into(
    const jb_TextEncoder *encoder, const char *src, jb_Uint8Array *dst
);

/**
 * @brief Creates a new `TextDecoder` object.
 *
 * @return A new `jb_TextDecoder` instance.
 */
jb_TextDecoder jb_TextDecoder_new();

/**
 * @brief Creates a new `TextDecoder` object with a specified label.
 *
 * @param label The encoding label (e.g., "utf-8").
 * @return A new `jb_TextDecoder` instance.
 */
jb_TextDecoder jb_TextDecoder_new_with_label(const char *label);

/**
 * @brief Creates a new `TextDecoder` object with specified options.
 *
 * @param options An object with decoder options.
 * @return A new `jb_TextDecoder` instance.
 */
jb_TextDecoder jb_TextDecoder_new_with_options(const jb_Any *options);

/**
 * @brief Creates a new `TextDecoder` object with a label and options.
 *
 * @param label The encoding label.
 * @param options An object with decoder options.
 * @return A new `jb_TextDecoder` instance.
 */
jb_TextDecoder jb_TextDecoder_new_with_label_and_options(const char *label, const jb_Any *options);

/**
 * @brief Decodes a `Uint8Array` into a string.
 *
 * @param decoder A pointer to the `jb_TextDecoder` instance.
 * @param bytes A pointer to the `jb_Uint8Array` to decode.
 * @return The decoded string.
 */
jb_String jb_TextDecoder_decode(const jb_TextDecoder *decoder, const jb_Uint8Array *bytes);

#ifdef __cplusplus
}
#endif