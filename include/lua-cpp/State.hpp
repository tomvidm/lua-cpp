#pragma once

#include <iostream>
#include <string>
#include <memory>

extern "C" {
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"
}

namespace lp {
    class State {
    public:
        State();
        ~State();
        void loadFile(const std::string& file, const bool& clear = false);

        void push(const bool& value);
        void push(const int& value);
        void push(const float& value);

        template <class T> T read(int index) const;

        int getStackSize() const;
    private:
        lua_State* luaState;
    }; // class State
}