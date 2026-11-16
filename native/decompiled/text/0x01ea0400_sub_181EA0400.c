// sub_181EA0400
// rva 0x01ea0400  size 294  section .text  group text
// window base 0x181ea0400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA0400(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // r14d
  __int64 v14; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // [rsp+0h] [rbp-48h] BYREF
  int v23; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v14 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v22);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EA0540(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21);
  }
  else
  {
    if ( *(_BYTE *)(a3 + 52) == 0 )
      JUMPOUT(0x181EA0502LL);
    v23 = a2;
    return sub_181EA0462(
             a1,
             a2,
             a3: v13 + 376612120,
             a4: v13 + 376612120,
             a5: v13 + 352678304,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13);
  }
}
