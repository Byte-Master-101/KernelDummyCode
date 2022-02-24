#include "common.h"

struct structA {
    void* f_a;
    void* f_b;
    int f_value;
};

SYSCALL_DEFINE2(dummy1, unsigned long, a, char*, b)
{
    struct structA *sa = (struct structA *)a;
    copy_from_user(sa->f_a, b, 2);
}

SYSCALL_DEFINE2(dummy2, unsigned long, a, void*, b)
{
    struct structA *sa = (struct structA *)a;
    // copy_from_user(&sa->f_value, a, p_b);
    sa->f_value = a;
}