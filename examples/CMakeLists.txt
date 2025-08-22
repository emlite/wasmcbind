set(DEFAULT_LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--import-memory,--export-memory,--strip-all")

set(JSCBIND_EXAMPLES jscbind_example typedarray_example)
foreach(item IN LISTS JSCBIND_EXAMPLES)
  add_executable(${item} ${item}.c)
  target_link_libraries(${item} PRIVATE wasmcbind::jscbind)
  target_compile_options(${item} PRIVATE -Wno-incompatible-pointer-types)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE C
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()

set(WEBCBIND_EXAMPLES button audio)
foreach(item IN LISTS WEBCBIND_EXAMPLES)
  add_executable(${item} ${item}.c)
  target_link_libraries(${item} PRIVATE wasmcbind::webcbind)
  target_compile_options(${item} PRIVATE -Wno-incompatible-pointer-types)
  set_target_properties(${item} PROPERTIES
    LINKER_LANGUAGE C
    SUFFIX ".wasm"
    LINK_FLAGS "${DEFAULT_LINK_FLAGS}"
  )
endforeach()