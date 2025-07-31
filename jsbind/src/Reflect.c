#include <jsbind/Reflect.h>

static inline em_Val R() {
    return em_Val_global("Reflect");
}

jb_Any Reflect_apply(
    const jb_Function *target,
    const jb_Any *thisArg,
    const jb_Array *argumentsList
) {
    return em_Val_as(
        jb_Any,
        em_Val_call(
            R(),
            "apply",
            target->inner,
            thisArg->inner,
            argumentsList->inner
        )
    );
}

jb_Any Reflect_construct(
    const jb_Function *target,
    const jb_Array *args,
    const jb_Any *newTarget
) {
    return em_Val_as(
        jb_Any,
        em_Val_call(
            R(),
            "construct",
            target->inner,
            args->inner,
            newTarget->inner
        )
    );
}

bool Reflect_defineProperty(
    const jb_Any *target,
    const jb_Any *key,
    const jb_Any *attributes
) {
    return em_Val_as(
        bool,
        em_Val_call(
            R(),
            "defineProperty",
            target->inner,
            key->inner,
            attributes->inner
        )
    );
}

bool Reflect_deleteProperty(
    const jb_Any *target, const jb_Any *key
) {
    return em_Val_as(
        bool,
        em_Val_call(
            R(), "deleteProperty", target->inner, key->inner
        )
    );
}

jb_Any Reflect_get(
    const jb_Any *target,
    const jb_Any *key,
    const jb_Any *receiver
) {
    return em_Val_as(
        jb_Any,
        em_Val_call(
            R(),
            "get",
            target->inner,
            key->inner,
            receiver->inner
        )
    );
}

jb_Any Reflect_getOwnPropertyDescriptor(
    const jb_Any *target, const jb_Any *key
) {
    return em_Val_as(
        jb_Any,
        em_Val_call(
            R(),
            "getOwnPropertyDescriptor",
            target->inner,
            key->inner
        )
    );
}

jb_Any Reflect_getPrototypeOf(const jb_Any *target) {
    return em_Val_as(
        jb_Any,
        em_Val_call(R(), "getPrototypeOf", target->inner)
    );
}

bool Reflect_has(const jb_Any *target, const jb_Any *key) {
    return em_Val_as(
        bool,
        em_Val_call(R(), "has", target->inner, key->inner)
    );
}

bool Reflect_isExtensible(const jb_Any *target) {
    return em_Val_as(
        bool,
        em_Val_call(R(), "isExtensible", target->inner)
    );
}

jb_Array ownKeys(const jb_Any *target) {
    return em_Val_as(
        jb_Array, em_Val_call(R(), "ownKeys", target->inner)
    );
}

bool Reflect_preventExtensions(const jb_Any *target) {
    return em_Val_as(
        bool,
        em_Val_call(R(), "preventExtensions", target->inner)
    );
}

bool Reflect_set(
    const jb_Any *target,
    const jb_Any *key,
    const jb_Any *value,
    const jb_Any *receiver
) {
    return em_Val_as(
        bool,
        em_Val_call(
            R(),
            "set",
            target->inner,
            key->inner,
            value->inner,
            receiver->inner
        )
    );
}

bool Reflect_setPrototypeOf(
    const jb_Any *target, const jb_Any *proto
) {
    return em_Val_as(
        bool,
        em_Val_call(
            R(),
            "setPrototypeOf",
            target->inner,
            proto->inner
        )
    );
}
