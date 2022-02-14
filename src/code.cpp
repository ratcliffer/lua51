#include <cpp11.hpp>
using namespace cpp11;

[[cpp11::register]]
void fun() {}

#include "lua51_types.h"

void close_lua(lua_State *L) {
  lua_close(L);
}

[[cpp11::register]]
external_pointer<lua_State, close_lua> open_lua() {
  return luaL_newstate();
}

extern "C"
int r_rand() {
  auto sample = cpp11::package("base")["sample"];
  return sample(0x8000, 1);
}

extern "C"
void r_srand(unsigned int seed) {
  auto set_seed = cpp11::package("base")["set.seed"];
  set_seed("seed"_nm = seed);
}

extern "C"
void r_exit(int status) {
  ;
}
