// sub_501D8E0
// rva 0x0501d8e0  size 158  section .text  group text
// window base 0x18501d8e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501D8E0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v20; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+Ch] [rbp-Ch]
  unsigned int v22; // [rsp+10h] [rbp-8h]
  unsigned int v23; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_501D980();
  }
  else
  {
    v23 = a5;
    v22 = a3;
    v22 = sub_4F4BFE0();
    v8 = sub_4F4BFE0(a1: v6, a2: v7, a3: v23);
    if ( v22 == v8 )
    {
      v21 = v8;
      if ( *(int *)(v5 + 16) <= 0 )
        sub_277F280(a1: v10, a2: v11, a3: v9, a4: v21);
      return 0;
    }
    else
    {
      v21 = v8;
      v22 = sub_4F4B900(a1: v10, a2: v11, a3: v22);
      v14 = sub_4F4B900(a1: v12, a2: v13, a3: v21);
      v18 = v22;
      if ( *(int *)(v5 + 16) <= 0 )
        v14 = sub_277F280(a1: v16, a2: v17, a3: v15, a4: v22);
      if ( v18 == v14 )
        return 0;
      else
        return v18 - v14;
    }
  }
}
