// sub_2787AE0
// rva 0x02787ae0  size 122  section .text  group text
// window base 0x182787ae0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD v16[2]; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v17[8]; // [rsp+10h] [rbp-18h] BYREF
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 *v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v16 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2787B60();
  }
  else
  {
    v16[1] = a3;
    v19 = (__int64 *)v17;
    v18 = a5;
    if ( (unsigned int)sub_278AC60(a1, a2, a3: 6, a4, a5, a6: v17) != 0 )
    {
      result = sub_2787A20(a1: v9, a2: v10, a3: *v19);
      if ( *(int *)(v6 + 16) <= 0 )
        return sub_277F280(a1: v14, a2: v15, a3: v12, a4: v13);
    }
    else
    {
      if ( *(int *)(v6 + 16) <= 0 )
        sub_277F280(a1: v9, a2: v10, a3: v7, a4: v8);
      return v5;
    }
  }
  return result;
}
