

set(SOURCES
    State.cpp
)

add_library(lua-cpp
    ${SOURCES}
)

target_include_directories(lua-cpp
    PUBLIC ${LUA_INCLUDE_DIR}
    PUBLIC ${LUACPP_INCLUDE_DIR}
    PUBLIC ${BOOST_INCLUDE_DIR}
)

target_link_libraries(lua-cpp
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
)