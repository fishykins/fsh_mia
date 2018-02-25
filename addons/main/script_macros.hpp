#include "\x\fsh_core\addons\main\script_macros.hpp"

#define FSH_CORE_PREFFIX fsh_core

#define FSHGVAR(module,var) TRIPLES(FSH_CORE_PREFFIX,module,var)
#define QFSHGVAR(module,var) QUOTE(FSHGVAR(module,var))
