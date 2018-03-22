set(SOURCES
    main.cpp
)

add_executable(lua-cpp
    ${SOURCES}
)

target_include_directories(lua-cpp
    PUBLIC ${LUA_INCLUDE_DIR}
)

target_link_libraries(lua-cpp
    ${LUA_LIBRARIES}
)