file(GLOB WEBCBIND_HEADERS CONFIGURE_DEPENDS "include/webcbind/*.h")
file(GLOB WEBCBIND_SOURCES CONFIGURE_DEPENDS "src/*.c")

# This is here for testing purposes!
set(WEBCBIND_HTMLSOURCES
    src/EventTarget.c
    src/Node.c
    src/Element.c
    src/HTMLElement.c
    src/HTMLButtonElement.c
    src/HTMLCollection.c
    src/Document.c
    src/Window.c
    src/console.c
    src/enums.c
    src/Event.c
    src/UIEvent.c
    src/MouseEvent.c
    src/PointerEvent.c
    src/CSSStyleDeclaration.c
    src/CSSStyleProperties.c
    src/WindowProxy.c
)

add_library(webcbind)

target_sources(webcbind 
    PRIVATE 
       ${WEBCBIND_SOURCES}
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${WEBCBIND_HEADERS}
)

target_link_libraries(webcbind PUBLIC emlite::emlite wasmcbind::jscbind)
target_compile_features(webcbind PUBLIC c_std_11)
set_target_properties(webcbind PROPERTIES
    LINKER_LANGUAGE C
)
target_precompile_headers(webcbind PRIVATE
    <jscbind/jscbind.h>
)
add_library(wasmcbind::webcbind ALIAS webcbind)

include(GNUInstallDirs)

install(
    TARGETS   webcbind
    EXPORT    wasmcbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
