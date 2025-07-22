set(DEFAULT_LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--import-memory,--export-memory,--strip-all")

set(JSBIND_EXAMPLES jsbind_example)
foreach(item IN LISTS JSBIND_EXAMPLES)
  add_executable(${item} ${item}.c)
  target_link_libraries(${item} PRIVATE jsbind::jsbind)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE C
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()

set(WEBBIND_EXAMPLES button)
foreach(item IN LISTS WEBBIND_EXAMPLES)
  add_executable(${item} ${item}.c)
  target_link_libraries(${item} PRIVATE webbind::webbind)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE C
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()