#if __cplusplus
extern "C" {
#endif

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

  int r_sand();
  void r_srand(unsigned int seed);
  void r_exit(int status);

#if __cplusplus
}

void close_lua(lua_State *L);

#endif
