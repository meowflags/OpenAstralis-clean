// sub_181EBD160
// rva 0x01ebd160  size 845  section .text  group text
// window base 0x181ebd160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBD160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        int a16,
        __int64 a17)
{
  __int64 v17; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // [rsp+0h] [rbp-68h] BYREF
  int v26; // [rsp+60h] [rbp-8h]
  int v27; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v17 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EBD4C0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24);
  }
  else
  {
    v27 = a6;
    v26 = a1;
    return sub_181EBD1C0(
             a1,
             a2: ((int)a6 >> 8) & 0xFFF,
             a3,
             a4: ((int)a6 >> 8) & 0xFFF,
             a5,
             a6: (unsigned int)((unsigned __int64)(unsigned int)a1 << a6) + (((int)a6 >> 8) & 0xFFF),
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17);
  }
}
