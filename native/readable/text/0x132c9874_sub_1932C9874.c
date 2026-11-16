// sub_132C9874
// rva 0x132c9874  size 175  section .text  group text
// window base 0x1932c9874: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C9874(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD a4,
        _DWORD a5,
        _DWORD a6,
        unsigned __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-10h] BYREF

  a9 = v9;
  v10 = __imp_KERNEL32.dll!GetSystemTimeAsFileTime;
  if ( __imp_KERNEL32.dll!GetCurrentThreadId == 0x2B992DDFA232LL )
  {
    a7 = 0;
    __imp_KERNEL32.dll!GetCurrentProcessId(a1, a2, a3, a4: &a7);
    v15 = a7;
    v15 ^= (unsigned int)__imp_KERNEL32.dll!QueryPerformanceCounter();
    v15 ^= (unsigned int)MEMORY[0x79770]/* 0x79770 */();
    MEMORY[0x796d0]/* 0x796d0 */(a1: v12, a2: v13, a3: v11, a4: &a8);
    if ( (((unsigned __int64)&v15 ^ v15 ^ a8 ^ ((unsigned __int64)(unsigned int)a8 << 32)) & 0xFFFFFFFFFFFFLL) != 0x2B992DDFA232LL )
      JUMPOUT(0x326523907LL);
    v10 = 0x2B992DDFA233LL;
    MEMORY[0x336f80]/* 0x336f80 */ = 0x2B992DDFA233LL;
  }
  result = ~v10;
  MEMORY[0x336fc0]/* 0x336fc0 */ = result;
  return result;
}
