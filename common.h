#define __user

#define __MAP0(m,...)
#define __MAP1(m,t,a) m(t,a)
#define __MAP2(m,t,a,...) m(t,a), __MAP1(m,__VA_ARGS__)
#define __MAP3(m,t,a,...) m(t,a), __MAP2(m,__VA_ARGS__)
#define __MAP4(m,t,a,...) m(t,a), __MAP3(m,__VA_ARGS__)
#define __MAP5(m,t,a,...) m(t,a), __MAP4(m,__VA_ARGS__)
#define __MAP6(m,t,a,...) m(t,a), __MAP5(m,__VA_ARGS__)
#define __MAP(n,...) __MAP##n(__VA_ARGS__)

#define __SC_DECL(t, a)	t a

#define SYSCALL_DEFINE0(sname) long sys_##sname(void)

#define SYSCALL_DEFINE1(name, ...) SYSCALL_DEFINEx(1, _##name, __VA_ARGS__)
#define SYSCALL_DEFINE2(name, ...) SYSCALL_DEFINEx(2, _##name, __VA_ARGS__)
#define SYSCALL_DEFINE3(name, ...) SYSCALL_DEFINEx(3, _##name, __VA_ARGS__)
#define SYSCALL_DEFINE4(name, ...) SYSCALL_DEFINEx(4, _##name, __VA_ARGS__)
#define SYSCALL_DEFINE5(name, ...) SYSCALL_DEFINEx(5, _##name, __VA_ARGS__)
#define SYSCALL_DEFINE6(name, ...) SYSCALL_DEFINEx(6, _##name, __VA_ARGS__)

#define SYSCALL_DEFINEx(x, sname, ...) __SYSCALL_DEFINEx(x, sname, __VA_ARGS__)
#define __SYSCALL_DEFINEx(x, name, ...) long sys##name(__MAP(x,__SC_DECL,__VA_ARGS__))

unsigned long copy_to_user (void __user * to, const void * from, unsigned long n);
unsigned long _copy_to_user (void __user * to, const void * from, unsigned long n);
unsigned long __copy_to_user (void __user * to, const void * from, unsigned long n);

unsigned long copy_from_user (void __user * to, const void * from, unsigned long n);
unsigned long _copy_from_user (void __user * to, const void * from, unsigned long n);
unsigned long __copy_from_user (void __user * to, const void * from, unsigned long n);