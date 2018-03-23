project(lua-cpp-test)

set(SOURCES
    ${gtest_SOURCE_DIR}/src/gtest_main.cc
    ${gtest_SOURCE_DIR}/src/gtest-all.cc
    trivialTest.cpp
)

add_executable(lua-cpp-ut
    ${SOURCES}
)

target_include_directories(lua-cpp-ut
    PUBLIC ${gtest_SOURCE_DIR}
    PUBLIC ${gtest_SOURCE_DIR}/include
)

target_link_libraries(lua-cpp-ut
    gtest
)
