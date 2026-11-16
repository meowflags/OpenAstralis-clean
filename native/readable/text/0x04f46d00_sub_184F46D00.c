// sub_4F46D00
// rva 0x04f46d00  size 102  section .text  group text
// window base 0x184f46d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F46D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  v7 = a3;
  v8 = a5;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_9;
  }
  if ( a5 != v5 )
  {
    a3 = *a5 >> 3;
    if ( (_DWORD)a3 != 4288481 )
      goto LABEL_10;
  }
  if ( a5 == v5 )
  {
LABEL_9:
    sub_2771080(a1, a2, a3, a4: v8);
LABEL_10:
    sub_276FC00(a1, a2, a3: v8, a4: v8, a5: v5 + 8576962);
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
    return sub_4F46D80();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    v7 = sub_277F280(a1, a2, a3, a4: a5);
  return *(unsigned __int16 *)(v7 + 4) - (unsigned int)*((unsigned __int16 *)v8 + 2);
}
