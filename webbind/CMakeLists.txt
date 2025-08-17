file(GLOB WEBBIND_HEADERS CONFIGURE_DEPENDS "include/webbind/*.h")
file(GLOB WEBBIND_SOURCES CONFIGURE_DEPENDS "src/*.c")

# This is here for testing purposes!
set(WEBBIND_HTMLSOURCES
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

add_library(webbind)

target_sources(webbind 
    PRIVATE 
       ${WEBBIND_SOURCES}
    PUBLIC 
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}/include
        FILES ${WEBBIND_HEADERS}
)

target_link_libraries(webbind PUBLIC emlite::emlite jsbind::jsbind)
target_compile_features(webbind PUBLIC c_std_11)
set_target_properties(webbind PROPERTIES
    LINKER_LANGUAGE C
)
target_precompile_headers(webbind PRIVATE
    <jsbind/jsbind.h>
)
add_library(webbind::webbind ALIAS webbind)

include(GNUInstallDirs)

install(
    TARGETS   webbind
    EXPORT    webbindTargets
    FILE_SET  HEADERS
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT webbindTargets
    FILE webbindTargets.cmake
    NAMESPACE webbind::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/webbind
)