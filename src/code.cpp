#include <cpp11.hpp>
using namespace cpp11;

[[cpp11::register]]
void fun() {}

#include "lua.hpp"

void close_lua(lua_State *L) {
  lua_close(L);
}

[[cpp11::register]]
external_pointer<lua_State, close_lua> open_lua() {
  return luaL_newstate();
}
