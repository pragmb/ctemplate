#define LIST_C

#define TYPE int
#include "list.h"
#undef TYPE

#define TYPE list_int
#include "list.h"
#undef TYPE

#define TYPE list_list_int
#include "list.h"
#undef TYPE

#define TYPE float
#include "list.h"
#undef TYPE
