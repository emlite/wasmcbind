add_library(jscbind)

set(JSCBIND_SOURCES
    src/Function.c 
    src/Any.c 
    src/lib.c
    src/Object.c 
    src/Undefined.c
    src/Array.c
    src/String.c
    src/Reflect.c
    src/Null.c
    src/Console.c
    src/Error.c
    src/Promise.c
    src/Date.c
    src/JSON.c
    src/Math.c
    src/Response.c
    src/text.c
    src/time.c
    src/url.c
    src/Map.c
    src/Set.c
    src/BigInt.c
    src/BigIntArray.c
    src/Number.c
    src/Symbol.c
    src/RegExp.c
    src/global.c
)

set(JSCBIND_HEADERS
    include/jscbind/Function.h 
    include/jscbind/Promise.h 
    include/jscbind/Any.h 
    include/jscbind/jscbind.h
    include/jscbind/Object.h 
    include/jscbind/Undefined.h
    include/jscbind/Array.h
    include/jscbind/String.h
    include/jscbind/Reflect.h
    include/jscbind/Null.h
    include/jscbind/Console.h
    include/jscbind/utils.h
    include/jscbind/Set.h
    include/jscbind/Map.h
    include/jscbind/Math.h
    include/jscbind/Date.h
    include/jscbind/JSON.h
    include/jscbind/Error.h
    include/jscbind/time.h
    include/jscbind/Response.h
    include/jscbind/url.h
    include/jscbind/text.h
    include/jscbind/BigInt.h
    include/jscbind/BigIntArray.h
    include/jscbind/Number.h
    include/jscbind/Symbol.h
    include/jscbind/RegExp.h
    include/jscbind/global.h
)

target_sources(jscbind 
    PRIVATE 
        ${JSCBIND_SOURCES} 
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${JSCBIND_HEADERS}
)

target_compile_features(jscbind PUBLIC c_std_11)
target_link_libraries(jscbind PUBLIC emlitec::emlitec)
set_target_properties(jscbind PROPERTIES
    LINKER_LANGUAGE C
)

add_library(wasmcbind::jscbind ALIAS jscbind)

if (WASMCBIND_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

include(GNUInstallDirs)

install(
    TARGETS   jscbind
    EXPORT    wasmcbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
