// sub_4F385E0
// rva 0x04f385e0  size 186  section .text  group text
// window base 0x184f385e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F385E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  unsigned int v23; // [rsp+18h] [rbp-10h]
  unsigned int v24; // [rsp+1Ch] [rbp-Ch]
  unsigned int v25; // [rsp+20h] [rbp-8h]
  unsigned int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F386A0();
  }
  else
  {
    v26 = *(char *)(a3 + 12);
    v8 = *(unsigned int *)(a3 + 8);
    v9 = v6 + 8LL * *(unsigned int *)(a3 + 4);
    v22 = a3;
    v25 = a5;
    v24 = a6;
    v21 = v9;
    v23 = v8;
    sub_632A360(a1: v6, a2, a3: a5, a4: v8, a5: a6, a6: (unsigned int)v8);
    if ( v26 != 0 )
    {
      result = sub_501D4A0(a1: 1, a2: v12, a3: v21, a4: v11, a5: v25, a6: v24);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v16, a2: v17, a3: v15, a4: v26, a5: v18, a6: v24);
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280(a1: v21, a2: v12, a3: v10, a4: v23, a5: v13, a6: v24);
      else
        v19 = v24;
      return v19 - v25;
    }
  }
  return result;
}
