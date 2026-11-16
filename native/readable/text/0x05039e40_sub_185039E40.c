// sub_5039E40
// rva 0x05039e40  size 154  section .text  group text
// window base 0x185039e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5039E40(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25[3]; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5039EE0();
  }
  else
  {
    v11 = (__int64 (*)(void))(v8 + *(_QWORD *)(v9 + 8LL * (*a3 >> 3) + 144));
    v27 = a5;
    v26 = a3;
    v12 = v11();
    if ( v12 == v9 )
    {
      return sub_185039EA7(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7, a8);
    }
    else
    {
      v19 = sub_5037F00(
              a1: v15,
              a2: v16,
              a3: v12,
              a4: v14,
              a5: (__int64)v26,
              a6: v18,
              a7: v25[0],
              a8: v25[1],
              a9: v12,
              a10: (int)v26);
      if ( v19 == v9 )
      {
        result = sub_503A2E0(a1: v22, a2: v23, a3: v26, a4: v21, a5: v27);
        if ( *(int *)(v10 + 16) <= 0 )
          return sub_277F280();
      }
      else
      {
        if ( *(int *)(v10 + 16) <= 0 )
          v19 = sub_277F280(a1: v22, a2: v23, a3: v20, a4: v25[2]);
        return v9 + 8LL * *(unsigned int *)(v19 + 20);
      }
    }
  }
  return result;
}
