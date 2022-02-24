#include "common.h"

void main() { }

unsigned long copy_to_user (void __user * to, const void * from, unsigned long n) { }
unsigned long _copy_to_user (void __user * to, const void * from, unsigned long n) { }
unsigned long __copy_to_user (void __user * to, const void * from, unsigned long n) { }

unsigned long copy_from_user (void __user * to, const void * from, unsigned long n) { }
unsigned long _copy_from_user (void __user * to, const void * from, unsigned long n) { }
unsigned long __copy_from_user (void __user * to, const void * from, unsigned long n) { }