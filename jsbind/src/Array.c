#include <jsbind/Array.h>
#include <jsbind/Function.h>

DEFINE_EMLITE_TYPE(jb_Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Uint8Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Int8Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Uint32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Int32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Float32Array, em_Val);

DEFINE_EMLITE_TYPE(jb_Float64Array, em_Val);

DEFINE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);

DEFINE_EMLITE_TYPE(jb_DataView, em_Val);

jb_Array jb_Array_new() {
    return (jb_Array){.inner = em_Val_array()};
}

size_t jb_Array_length(const jb_Array *a) {
    em_Val prop = em_Val_from_string("length");
    em_Val v    = em_Val_get(a->inner, prop);
    return (size_t)em_Val_as_int(v);
}
jb_Any jb_Array_get(const jb_Array *a, size_t idx) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val v    = em_Val_call(a->inner, "at", idxv);
    return (jb_Any){.inner = v};
}
void jb_Array_set(
    const jb_Array *a, size_t idx, const jb_Any *v
) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val_set(a->inner, idxv, v->inner);
}
void jb_Array_push(const jb_Array *a, const jb_Any *v) {
    em_Val_call(a->inner, "push", v->inner);
}
jb_Array jb_Array_slice(
    const jb_Array *a, size_t start, size_t end
) {
    em_Val startv = em_Val_from_int((int)start);
    em_Val endv   = em_Val_from_int((int)end);
    em_Val v = em_Val_call(a->inner, "slice", startv, endv);
    return (jb_Array){.inner = v};
}

jb_String jb_Array_toString(const jb_Array *a) {
    return (jb_String
    ){.inner = em_Val_call(a->inner, "toString")};
}

jb_String jb_Array_toLocaleString(const jb_Array *a) {
    return (jb_String
    ){.inner = em_Val_call(a->inner, "toLocaleString")};
}

jb_Any jb_Array_pop(jb_Array *a) {
    return (jb_Any){.inner = em_Val_call(a->inner, "pop")};
}

jb_Array jb_Array_concat(
    const jb_Array *a, const jb_Array *items
) {
    return (jb_Array
    ){.inner = em_Val_call(a->inner, "concat", items->inner)
    };
}

jb_String jb_Array_join(
    const jb_Array *a, const jb_String *separator
) {
    return (jb_String
    ){.inner =
          em_Val_call(a->inner, "join", separator->inner)};
}

jb_Array jb_Array_reverse(jb_Array *a) {
    return (jb_Array
    ){.inner = em_Val_call(a->inner, "reverse")};
}

jb_Any jb_Array_shift(jb_Array *a) {
    return (jb_Any
    ){.inner = em_Val_call(a->inner, "shift")};
}

jb_Array jb_Array_sort(
    jb_Array *a, const jb_Function *compareFn
) {
    return (jb_Array
    ){.inner =
          em_Val_call(a->inner, "sort", compareFn->inner)};
}

jb_Array jb_Array_splice(
    jb_Array *a,
    size_t start,
    size_t deleteCount,
    const jb_Array *items
) {
    return (jb_Array
    ){.inner = em_Val_call(
          a->inner,
          "splice",
          em_Val_from_int(start),
          em_Val_from_int(deleteCount),
          items->inner
      )};
}

size_t jb_Array_unshift(
    jb_Array *a, const jb_Array *items
) {
    return em_Val_as_int(
        em_Val_call(a->inner, "unshift", items->inner)
    );
}

int jb_Array_indexOf(
    const jb_Array *a,
    const jb_Any *searchElement,
    size_t fromIndex
) {
    return em_Val_as_int(em_Val_call(
        a->inner,
        "indexOf",
        searchElement->inner,
        em_Val_from_int(fromIndex)
    ));
}

int jb_Array_lastIndexOf(
    const jb_Array *a,
    const jb_Any *searchElement,
    size_t fromIndex
) {
    return em_Val_as_int(em_Val_call(
        a->inner,
        "lastIndexOf",
        searchElement->inner,
        em_Val_from_int(fromIndex)
    ));
}

bool jb_Array_every(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
) {
    return em_Val_as_bool(em_Val_call(
        a->inner, "every", predicate->inner, thisArg->inner
    ));
}

bool jb_Array_some(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
) {
    return em_Val_as_bool(em_Val_call(
        a->inner, "some", predicate->inner, thisArg->inner
    ));
}

void jb_Array_forEach(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *thisArg
) {
    em_Val_call(
        a->inner,
        "forEach",
        callbackfn->inner,
        thisArg->inner
    );
}

jb_Array jb_Array_map(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *thisArg
) {
    return (jb_Array
    ){.inner = em_Val_call(
          a->inner, "map", callbackfn->inner, thisArg->inner
      )};
}

jb_Array jb_Array_filter(
    const jb_Array *a,
    const jb_Function *predicate,
    const jb_Any *thisArg
) {
    return (jb_Array
    ){.inner = em_Val_call(
          a->inner,
          "filter",
          predicate->inner,
          thisArg->inner
      )};
}

jb_Any jb_Array_reduce(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *initialValue
) {
    return (jb_Any
    ){.inner = em_Val_call(
          a->inner,
          "reduce",
          callbackfn->inner,
          initialValue->inner
      )};
}

jb_Any jb_Array_reduceRight(
    const jb_Array *a,
    const jb_Function *callbackfn,
    const jb_Any *initialValue
) {
    return (jb_Any
    ){.inner = em_Val_call(
          a->inner,
          "reduceRight",
          callbackfn->inner,
          initialValue->inner
      )};
}

jb_Any jb_Array_entries(const jb_Array *a) {
    return (jb_Any
    ){.inner = em_Val_call(a->inner, "entries")};
}

jb_Any jb_Array_keys(const jb_Array *a) {
    return (jb_Any){.inner = em_Val_call(a->inner, "keys")};
}

jb_Any jb_Array_values(const jb_Array *a) {
    return (jb_Any
    ){.inner = em_Val_call(a->inner, "values")};
}

jb_ArrayBuffer jb_ArrayBuffer_new(size_t byteLen) {
    return (jb_ArrayBuffer
    ){.inner = em_Val_new(
          em_Val_global("ArrayBuffer"),
          em_Val_from_int(byteLen)
      )};
}

size_t jb_ArrayBuffer_byteLength(const jb_ArrayBuffer *buf
) {
    return em_Val_as_int(
        em_Val_get(buf->inner, em_Val_from("byteLength"))
    );
}

jb_ArrayBuffer jb_ArrayBuffer_slice(
    const jb_ArrayBuffer *buf, size_t begin, size_t end
) {
    return (jb_ArrayBuffer
    ){.inner = em_Val_call(
          buf->inner,
          "slice",
          em_Val_from_int(begin),
          em_Val_from_int(end)
      )};
}

bool jb_ArrayBuffer_isView(const jb_Any *v) {
    return em_Val_as_bool(em_Val_call(
        em_Val_global("ArrayBuffer"), "isView", v->inner
    ));
}

jb_DataView jb_DataView_new(
    const jb_ArrayBuffer *buf,
    size_t byteOffset,
    size_t byteLen
) {
    return (jb_DataView
    ){.inner = em_Val_new(
          em_Val_global("DataView"),
          buf->inner,
          em_Val_from_int(byteOffset),
          em_Val_from_int(byteLen)
      )};
}

size_t jb_DataView_byteLength(const jb_DataView *view) {
    return em_Val_as_int(
        em_Val_get(view->inner, em_Val_from("byteLength"))
    );
}

size_t jb_DataView_byteOffset(const jb_DataView *view) {
    return em_Val_as_int(
        em_Val_get(view->inner, em_Val_from("byteOffset"))
    );
}

jb_ArrayBuffer jb_DataView_buffer(const jb_DataView *view) {
    return (jb_ArrayBuffer
    ){.inner =
          em_Val_get(view->inner, em_Val_from("buffer"))};
}

#define JSBIND_DV_GET(Name, Cpp)                           \
    Cpp jb_DataView_##Name(                                \
        const jb_DataView *view, size_t off, bool le       \
    ) {                                                    \
        return em_Val_as_int(em_Val_call(                  \
            view->inner,                                   \
            #Name,                                         \
            em_Val_from_int(off),                          \
            em_Val_from_int(le)                            \
        ));                                                \
    }
#define JSBIND_DV_SET(Name, Cpp)                           \
    void jb_DataView_##Name(                               \
        jb_DataView *view, size_t off, Cpp v, bool le      \
    ) {                                                    \
        em_Val_call(                                       \
            view->inner,                                   \
            #Name,                                         \
            em_Val_from_int(off),                          \
            em_Val_from_int(v),                            \
            em_Val_from_int(le)                            \
        );                                                 \
    }

uint8_t jb_DataView_getUint8(
    const jb_DataView *view, size_t o
) {
    return em_Val_as_int(em_Val_call(
        view->inner, "getUint8", em_Val_from_int(o)
    ));
}
int8_t jb_DataView_getInt8(
    const jb_DataView *view, size_t o
) {
    return em_Val_as_int(em_Val_call(
        view->inner, "getInt8", em_Val_from_int(o)
    ));
}
void jb_DataView_setUint8(
    jb_DataView *view, size_t o, uint8_t v
) {
    em_Val_call(
        view->inner,
        "setUint8",
        em_Val_from_int(o),
        em_Val_from_int(v)
    );
}
void jb_DataView_setInt8(
    jb_DataView *view, size_t o, int8_t v
) {
    em_Val_call(
        view->inner,
        "setInt8",
        em_Val_from_int(o),
        em_Val_from_int(v)
    );
}

JSBIND_DV_GET(getUint16, uint16_t)
JSBIND_DV_GET(getInt16, int16_t)
JSBIND_DV_GET(getUint32, uint32_t)
JSBIND_DV_GET(getInt32, int32_t)
JSBIND_DV_GET(getFloat32, float)
JSBIND_DV_GET(getFloat64, double)

JSBIND_DV_SET(setUint16, uint16_t)
JSBIND_DV_SET(setInt16, int16_t)
JSBIND_DV_SET(setUint32, uint32_t)
JSBIND_DV_SET(setInt32, int32_t)
JSBIND_DV_SET(setFloat32, float)
JSBIND_DV_SET(setFloat64, double)

#undef JSBIND_DV_GET
#undef JSBIND_DV_SET
