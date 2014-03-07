#ifndef CTEMPLATE_H
#define CTEMPLATE_H

#define ECHO_X(STRING) #STRING
#define ECHO(STRING)    ECHO_X(STRING)

#define CONCATENATE_2_X(A, B) A##_##B
#define CONCATENATE_2(A, B) CONCATENATE_2_X(A, B)

#define TEMPLATE(name) CONCATENATE_2(name, TYPE)
#define TEMPLATE_1(name) CONCATENATE_2(name, TYPE1)
#define TEMPLATE_2(name) CONCATENATE_2(name, TYPE2)

#define CONCATENATE_3_X(A, B, C) A##_##B##_##C
#define CONCATENATE_3(A, B, C) CONCATENATE_3_X(A, B, C)
#define TEMPLATE_1_2(name) CONCATENATE_3(name, TYPE1, TYPE2)

// TODO: #define make_base

int* make_int(size_t size);
void free_int(int* i);

float* make_float(size_t size);
void free_float(float* f);

#endif
