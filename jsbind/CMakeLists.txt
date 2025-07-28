add_library(jsbind)

set(JSBIND_SOURCES
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
    # src/Date.c
    # src/JSON.c
    src/Error.c
    # src/time.c
    # src/Response.c
    # src/url.c
    # src/Math.c
    # src/text.c
    src/Promise.c
    src/Array.c
    src/Record.c
    src/Sequence.c
)

set(JSBIND_HEADERS
    include/jsbind/Function.h 
    include/jsbind/Promise.h 
    include/jsbind/Any.h 
    include/jsbind/jsbind.h
    include/jsbind/Object.h 
    include/jsbind/Sequence.h 
    include/jsbind/Record.h 
    include/jsbind/Undefined.h
    include/jsbind/Array.h
    include/jsbind/String.h
    include/jsbind/Reflect.h
    include/jsbind/Null.h
    include/jsbind/Console.h
    include/jsbind/utils.h
    # include/jsbind/Set.h
    # include/jsbind/Map.h
    # include/jsbind/Math.h
    # include/jsbind/Date.h
    # include/jsbind/JSON.h
    include/jsbind/Error.h
    # include/jsbind/time.h
    # include/jsbind/Response.h
    # include/jsbind/url.h
    # include/jsbind/text.h
)

target_sources(jsbind 
    PRIVATE 
        ${JSBIND_SOURCES} 
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${JSBIND_HEADERS}
)

target_compile_features(jsbind PUBLIC c_std_11)
target_link_libraries(jsbind PUBLIC emlite::emlite)
set_target_properties(jsbind PROPERTIES
    LINKER_LANGUAGE C
)

add_library(jsbind::jsbind ALIAS jsbind)

include(GNUInstallDirs)

install(
    TARGETS   jsbind
    EXPORT    jsbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT jsbindTargets
    FILE jsbindTargets.cmake
    NAMESPACE jsbind::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/jsbind
)