/* Auto-generated by gen_syscall_header.py, do not edit! */

#ifndef GEN_SYSCALL_H
#define GEN_SYSCALL_H

#include <syscall.h>
#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE0_VOID(id, name) \
	extern void _impl_##name(void); \
	static inline void name(void) \
	{ \
		_impl_##name(); \
	}

#define K_SYSCALL_DECLARE0(id, name, ret) \
	extern ret _impl_##name(void); \
	static inline ret name(void) \
	{ \
		return _impl_##name(); \
	}

#define K_SYSCALL_DECLARE0_RET64(id, name, ret) \
	extern ret _impl_##name(void); \
	static inline ret name(void) \
	{ \
		return _impl_##name(); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE0_VOID(id, name) \
	static inline void name(void) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke0(id); \
	}

#define K_SYSCALL_DECLARE0(id, name, ret) \
	static inline ret name(void) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke0(id); \
	}

#define K_SYSCALL_DECLARE0_RET64(id, name, ret) \
	static inline ret name(void) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke0(id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE0_VOID(id, name) \
	extern void _impl_##name(void); \
	static inline void name(void) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke0(id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(); \
		} \
	}

#define K_SYSCALL_DECLARE0(id, name, ret) \
	extern ret _impl_##name(void); \
	static inline ret name(void) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke0(id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(); \
		} \
	}

#define K_SYSCALL_DECLARE0_RET64(id, name, ret) \
	extern ret _impl_##name(void); \
	static inline ret name(void) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke0(id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE1_VOID(id, name, t0, p0) \
	extern void _impl_##name(t0 p0); \
	static inline void name(t0 p0) \
	{ \
		_impl_##name(p0); \
	}

#define K_SYSCALL_DECLARE1(id, name, ret, t0, p0) \
	extern ret _impl_##name(t0 p0); \
	static inline ret name(t0 p0) \
	{ \
		return _impl_##name(p0); \
	}

#define K_SYSCALL_DECLARE1_RET64(id, name, ret, t0, p0) \
	extern ret _impl_##name(t0 p0); \
	static inline ret name(t0 p0) \
	{ \
		return _impl_##name(p0); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE1_VOID(id, name, t0, p0) \
	static inline void name(t0 p0) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke1((u32_t)p0, id); \
	}

#define K_SYSCALL_DECLARE1(id, name, ret, t0, p0) \
	static inline ret name(t0 p0) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke1((u32_t)p0, id); \
	}

#define K_SYSCALL_DECLARE1_RET64(id, name, ret, t0, p0) \
	static inline ret name(t0 p0) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke1((u32_t)p0, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE1_VOID(id, name, t0, p0) \
	extern void _impl_##name(t0 p0); \
	static inline void name(t0 p0) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke1((u32_t)p0, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0); \
		} \
	}

#define K_SYSCALL_DECLARE1(id, name, ret, t0, p0) \
	extern ret _impl_##name(t0 p0); \
	static inline ret name(t0 p0) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke1((u32_t)p0, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0); \
		} \
	}

#define K_SYSCALL_DECLARE1_RET64(id, name, ret, t0, p0) \
	extern ret _impl_##name(t0 p0); \
	static inline ret name(t0 p0) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke1((u32_t)p0, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE2_VOID(id, name, t0, p0, t1, p1) \
	extern void _impl_##name(t0 p0, t1 p1); \
	static inline void name(t0 p0, t1 p1) \
	{ \
		_impl_##name(p0, p1); \
	}

#define K_SYSCALL_DECLARE2(id, name, ret, t0, p0, t1, p1) \
	extern ret _impl_##name(t0 p0, t1 p1); \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		return _impl_##name(p0, p1); \
	}

#define K_SYSCALL_DECLARE2_RET64(id, name, ret, t0, p0, t1, p1) \
	extern ret _impl_##name(t0 p0, t1 p1); \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		return _impl_##name(p0, p1); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE2_VOID(id, name, t0, p0, t1, p1) \
	static inline void name(t0 p0, t1 p1) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke2((u32_t)p0, (u32_t)p1, id); \
	}

#define K_SYSCALL_DECLARE2(id, name, ret, t0, p0, t1, p1) \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke2((u32_t)p0, (u32_t)p1, id); \
	}

#define K_SYSCALL_DECLARE2_RET64(id, name, ret, t0, p0, t1, p1) \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke2((u32_t)p0, (u32_t)p1, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE2_VOID(id, name, t0, p0, t1, p1) \
	extern void _impl_##name(t0 p0, t1 p1); \
	static inline void name(t0 p0, t1 p1) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke2((u32_t)p0, (u32_t)p1, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1); \
		} \
	}

#define K_SYSCALL_DECLARE2(id, name, ret, t0, p0, t1, p1) \
	extern ret _impl_##name(t0 p0, t1 p1); \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke2((u32_t)p0, (u32_t)p1, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1); \
		} \
	}

#define K_SYSCALL_DECLARE2_RET64(id, name, ret, t0, p0, t1, p1) \
	extern ret _impl_##name(t0 p0, t1 p1); \
	static inline ret name(t0 p0, t1 p1) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke2((u32_t)p0, (u32_t)p1, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE3_VOID(id, name, t0, p0, t1, p1, t2, p2) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline void name(t0 p0, t1 p1, t2 p2) \
	{ \
		_impl_##name(p0, p1, p2); \
	}

#define K_SYSCALL_DECLARE3(id, name, ret, t0, p0, t1, p1, t2, p2) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		return _impl_##name(p0, p1, p2); \
	}

#define K_SYSCALL_DECLARE3_RET64(id, name, ret, t0, p0, t1, p1, t2, p2) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		return _impl_##name(p0, p1, p2); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE3_VOID(id, name, t0, p0, t1, p1, t2, p2) \
	static inline void name(t0 p0, t1 p1, t2 p2) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
	}

#define K_SYSCALL_DECLARE3(id, name, ret, t0, p0, t1, p1, t2, p2) \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
	}

#define K_SYSCALL_DECLARE3_RET64(id, name, ret, t0, p0, t1, p1, t2, p2) \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE3_VOID(id, name, t0, p0, t1, p1, t2, p2) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline void name(t0 p0, t1 p1, t2 p2) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2); \
		} \
	}

#define K_SYSCALL_DECLARE3(id, name, ret, t0, p0, t1, p1, t2, p2) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2); \
		} \
	}

#define K_SYSCALL_DECLARE3_RET64(id, name, ret, t0, p0, t1, p1, t2, p2) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2); \
	static inline ret name(t0 p0, t1 p1, t2 p2) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke3((u32_t)p0, (u32_t)p1, (u32_t)p2, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE4_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		_impl_##name(p0, p1, p2, p3); \
	}

#define K_SYSCALL_DECLARE4(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		return _impl_##name(p0, p1, p2, p3); \
	}

#define K_SYSCALL_DECLARE4_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		return _impl_##name(p0, p1, p2, p3); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE4_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
	}

#define K_SYSCALL_DECLARE4(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
	}

#define K_SYSCALL_DECLARE4_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE4_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3); \
		} \
	}

#define K_SYSCALL_DECLARE4(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3); \
		} \
	}

#define K_SYSCALL_DECLARE4_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke4((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE5_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4); \
	}

#define K_SYSCALL_DECLARE5(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4); \
	}

#define K_SYSCALL_DECLARE5_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE5_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
	}

#define K_SYSCALL_DECLARE5(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
	}

#define K_SYSCALL_DECLARE5_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE5_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4); \
		} \
	}

#define K_SYSCALL_DECLARE5(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4); \
		} \
	}

#define K_SYSCALL_DECLARE5_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke5((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE6_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4, p5); \
	}

#define K_SYSCALL_DECLARE6(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5); \
	}

#define K_SYSCALL_DECLARE6_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE6_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_arch_syscall_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
	}

#define K_SYSCALL_DECLARE6(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_arch_syscall_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
	}

#define K_SYSCALL_DECLARE6_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE6_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_arch_syscall_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4, p5); \
		} \
	}

#define K_SYSCALL_DECLARE6(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_arch_syscall_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5); \
		} \
	}

#define K_SYSCALL_DECLARE6_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke6((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE7_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4, p5, p6); \
	}

#define K_SYSCALL_DECLARE7(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6); \
	}

#define K_SYSCALL_DECLARE7_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE7_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_syscall_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
	}

#define K_SYSCALL_DECLARE7(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
	}

#define K_SYSCALL_DECLARE7_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE7_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_syscall_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4, p5, p6); \
		} \
	}

#define K_SYSCALL_DECLARE7(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6); \
		} \
	}

#define K_SYSCALL_DECLARE7_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke7((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE8_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
	}

#define K_SYSCALL_DECLARE8(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
	}

#define K_SYSCALL_DECLARE8_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE8_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_syscall_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
	}

#define K_SYSCALL_DECLARE8(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
	}

#define K_SYSCALL_DECLARE8_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE8_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_syscall_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
		} \
	}

#define K_SYSCALL_DECLARE8(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
		} \
	}

#define K_SYSCALL_DECLARE8_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke8((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE9_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
	}

#define K_SYSCALL_DECLARE9(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
	}

#define K_SYSCALL_DECLARE9_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE9_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_syscall_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
	}

#define K_SYSCALL_DECLARE9(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
	}

#define K_SYSCALL_DECLARE9_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE9_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_syscall_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
		} \
	}

#define K_SYSCALL_DECLARE9(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
		} \
	}

#define K_SYSCALL_DECLARE9_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke9((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8); \
		} \
	}

#endif /* mixed kernel/user macros */

#if !defined(CONFIG_USERSPACE) || defined(__UGELIS_SUPERVISOR__)
#define K_SYSCALL_DECLARE10_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
	}

#define K_SYSCALL_DECLARE10(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
	}

#define K_SYSCALL_DECLARE10_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
	}

#elif defined(__UGELIS_USER__)
#define K_SYSCALL_DECLARE10_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		_syscall_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
	}

#define K_SYSCALL_DECLARE10(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
	}

#define K_SYSCALL_DECLARE10_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
		return (ret)_syscall_ret64_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
	}

#else /* mixed kernel/user macros */
#define K_SYSCALL_DECLARE10_VOID(id, name, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern void _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline void name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			_syscall_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
		} else { \
			compiler_barrier(); \
			_impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
		} \
	}

#define K_SYSCALL_DECLARE10(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
		} \
	}

#define K_SYSCALL_DECLARE10_RET64(id, name, ret, t0, p0, t1, p1, t2, p2, t3, p3, t4, p4, t5, p5, t6, p6, t7, p7, t8, p8, t9, p9) \
	extern ret _impl_##name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9); \
	static inline ret name(t0 p0, t1 p1, t2 p2, t3 p3, t4 p4, t5 p5, t6 p6, t7 p7, t8 p8, t9 p9) \
	{ \
		if (_is_user_context()) { \
			static _GENERIC_SECTION(hndlr_ref) __used void *href = (void *)&_handler_##name; \
			return (ret)_syscall_ret64_invoke10((u32_t)p0, (u32_t)p1, (u32_t)p2, (u32_t)p3, (u32_t)p4, (u32_t)p5, (u32_t)p6, (u32_t)p7, (u32_t)p8, (u32_t)p9, id); \
		} else { \
			compiler_barrier(); \
			return _impl_##name(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); \
		} \
	}

#endif /* mixed kernel/user macros */

#endif /* GEN_SYSCALL_H */
