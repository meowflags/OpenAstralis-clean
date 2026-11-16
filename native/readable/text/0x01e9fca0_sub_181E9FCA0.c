// sub_1E9FCA0
// rva 0x01e9fca0  size 338  section .text  group text
// window base 0x181e9fca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9FCA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  double v23; // xmm0_8
  char v24; // [rsp+0h] [rbp-8h] BYREF

  v7 = a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v6 + 8) )
  {
    v23 = sub_1EB83C0(a1, a2, a3, a4: a3, a5, a6, a7: v24);
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
    return sub_1E9FE00(a1: v23);
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16);
    if ( v8 != 0 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 != 0 )
        v10 = v8 + v9;
      else
        v10 = 0;
      v11 = *(_QWORD *)(v8 + 32) - 2112LL;
      while ( v10 != 0 )
      {
        v12 = *(_QWORD *)(v10 + 32);
        v13 = *(_QWORD *)(v10 + 16);
        if ( *(int *)(v6 + 16) <= 0 )
          v11 = sub_277F280(a1, a2, a3: v12, a4: v7);
        v11 += v12 - 2112;
        if ( v13 != 0 )
          v10 += v13;
        else
          v10 = 0;
      }
      v14 = v11;
    }
    else
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)(v7 + 32);
    if ( v15 != 0 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 != 0 )
        v17 = v15 + v16;
      else
        v17 = 0;
      v18 = (((*(_QWORD *)(v15 + 32) - 56LL) << 9) / 0x201uLL) & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v17;
      while ( v19 != 0 )
      {
        a1 = 513;
        v20 = ((*(_QWORD *)(v19 + 32) - 56LL) << 9) / 0x201uLL;
        v21 = *(_QWORD *)(v19 + 16);
        if ( *(int *)(v6 + 16) <= 0 )
          v20 = sub_277F280(a1: 513, a2: v18, a3: v21);
        v18 += v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v21 != 0 )
          v19 += v21;
        else
          v19 = 0;
      }
    }
    else
    {
      v18 = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1, a2: v18);
    return v18 + v14;
  }
}
