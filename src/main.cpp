#include <iostream>
#include <stdio.h>

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"
}

int main() {
    lua_State* state = luaL_newstate();
    return 0;
}