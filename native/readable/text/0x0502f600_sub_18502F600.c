// sub_502F600
// rva 0x0502f600  size 136  section .text  group text
// window base 0x18502f600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502F600(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 264)))(
         a1,
         a2,
         a3,
         a4: a3) != 0 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v8;
  }
  else
  {
    v15 = (unsigned int)v19[11];
    v16 = v8 + 8 * v15;
    if ( (_DWORD)v15 != 0 )
    {
      result = v8 + 8 * v15;
      v18 = v16;
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280(a1: v10, a2: v11, a3: v19, a4: v18);
    }
    else
    {
      return sub_18502F65F(a1: v10, a2: v11, a3: (_DWORD)v19, a4: v16, a5: v12, a6: v13, a7);
    }
  }
  return result;
}
