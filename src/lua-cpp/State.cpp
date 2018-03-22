#include "State.hpp"

#include <boost/filesystem.hpp>

namespace lp {
    State::State() {
        luaState = luaL_newstate();
    } // Default Constructor

    State::~State() {
        lua_close(luaState);
    } // Default destructor

    void State::loadFile(const std::string& file, const bool& clear) {
        if (clear) {
            ;// clean the state
        } 
        
        boost::filesystem::path filePath(file);
        if (boost::filesystem::exists(filePath)) {
            luaL_loadfile(luaState, file.c_str());
        } else {
            std::cerr << "File " << filePath << " does not exist.\n";
        }
    } // loadFile

    void State::push(const bool& value) {
        lua_pushboolean(luaState, value);
    } // push bool

    void State::push(const int& value) {
        lua_pushinteger(luaState, value);
    } // push integer

    void State::push(const float& value) {
        lua_pushnumber(luaState, value);
    }

    template <>
    bool State::read(int index) const {
        return static_cast<bool>(lua_toboolean(luaState, index));
    }

    template <>
    int State::read(int index) const {
        return static_cast<int>(lua_tointeger(luaState, index));
    }

    template <>
    float State::read(int index) const {
        return static_cast<float>(lua_tonumber(luaState, index));
    }

    int State::getStackSize() const {
        return lua_gettop(luaState);
    }
}