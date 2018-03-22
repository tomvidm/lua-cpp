set(SOURCES
    main.cpp
)

add_subdirectory(lua-cpp)

add_executable(lua-cpp-main
    ${SOURCES}
)

target_include_directories(lua-cpp-main
    PUBLIC ${LUA_INCLUDE_DIR}
    PUBLIC ${LUACPP_INCLUDE_DIR}
)

target_link_libraries(lua-cpp-main
    lua-cpp
    ${LUA_LIBRARIES}
)