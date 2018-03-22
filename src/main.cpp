#include <iostream>
#include <stdio.h>
#include <string>
#include <cassert>

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"
}

#include "State.hpp"

int main() {
    lp::State state;
    state.loadFile("../resources/lua_scripts/test1.lua");
/*
    lua_getglobal(l, "add_two_numbers");
    lua_pushinteger(l, 1);
    lua_pushinteger(l, 2);

    const int num_args = 2;
    const int num_return_vals = 1;
    lua_call(l, num_args, num_return_vals);

    const int result = lua_tointeger(l, 1);
    lua_pop(l, 1);

    assert(result == 3);

    lua_close(l); */
    return 0;
}