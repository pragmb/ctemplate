#define PAIR_C

#define TYPE1 int
#define TYPE2 float
#include "pair.h"
#undef TYPE2
#undef TYPE1

#define TYPE int
#include "vector.h"
#undef TYPE

#define TYPE float
#include "vector.h"
#undef TYPE

#define TYPE1 vector_int
#define TYPE2 vector_float
#include "pair.h"
#undef TYPE2
#undef TYPE1
