#define TYPE int
#include "vector.h"
#undef TYPE

#define TYPE vector_int
#include "vector.h"
#undef TYPE

#define TYPE vector_vector_int
#include "vector.h"
#undef TYPE

#define TYPE float
#include "vector.h"
#undef TYPE

#define TYPE1 int
#define TYPE2 float
#include "pair.h"
#undef TYPE2
#undef TYPE1

#define TYPE1 int
#define TYPE2 long
#include "pair.h"
#undef TYPE2
#undef TYPE1

#define TYPE1 vector_int
#define TYPE2 vector_float
#include "pair.h"
#undef TYPE2
#undef TYPE1

#define TYPE float
#include "list.h"
#undef TYPE

int main()
{

	pair_vector_int_vector_float* s = make_pair_vector_int_vector_float(make_vector_int(5), make_vector_float(5));
	free_pair_vector_int_vector_float(s);

	vector_vector_vector_int* w = make_vector_vector_vector_int(5);
	free_vector_vector_vector_int(w);

	return 0;
}
