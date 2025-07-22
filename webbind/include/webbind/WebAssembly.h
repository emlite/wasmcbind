#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Module Module;
typedef struct Response Response;
typedef struct Instance Instance;


bool WebAssembly_validate(const jb_Any* bytes);
jb_Promise WebAssembly_compile(const jb_Any* bytes);
jb_Promise WebAssembly_instantiate(const jb_Any* bytes);
jb_Promise WebAssembly_instantiate(const jb_Any* bytes, const jb_Object* importObject);
jb_Promise WebAssembly_instantiate(const Module* moduleObject);
jb_Promise WebAssembly_instantiate(const Module* moduleObject, const jb_Object* importObject);
} // namespace WebAssembly



jb_Promise WebAssembly_compileStreaming(const jb_Promise* source);
jb_Promise WebAssembly_instantiateStreaming(const jb_Promise* source);
jb_Promise WebAssembly_instantiateStreaming(const jb_Promise* source, const jb_Object* importObject);
} // namespace WebAssembly

