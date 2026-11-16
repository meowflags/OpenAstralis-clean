// sub_132C8A50
// rva 0x132c8a50  size 67  section .text  group text
// window base 0x1932c8a50: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8A50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  __imp_KERNEL32.dll!GetSystemInfo(a1, a2, a3, a4: v11);
  __imp_KERNEL32.dll!QueryPerformanceFrequency = v12;
  result = MEMORY[0x796c8]/* 0x796c8 */(a1: v8, a2: v9, a3: v7, a4: &a7);
  if ( (_DWORD)result != 0 )
  {
    MEMORY[0x3377c0]/* 0x3377c0 */ = a7;
    return (unsigned int)a7;
  }
  return result;
}
