// sub_1E63720
// rva 0x01e63720  size 190  section .text  group text
// window base 0x181e63720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E63720(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (*v9)(void); // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD v17[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+10h] [rbp-8h]
  unsigned int v19; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)v17 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != v6 )
  {
    v19 = a5;
    v8 = *a3 >> 3;
    v9 = (__int64 (*)(void))(v5
                           + *(_QWORD *)((char *)&v6[2 * v8 + 10]
                                       + HIWORD(v6[2 * v6[2 * v8 + 5]
                                                 + 3
                                                 + (v6[2 * v8 + 11] & (0x749u >> HIBYTE(v6[2 * v8 + 11])))])));
    v17[1] = a3;
    v10 = v9();
    if ( v10 == -1 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280();
      return (__int64)v6;
    }
    else
    {
      v18 = v10;
      result = sub_1E60980(a1: v11, a2: v12, a3: (__int64)(v6 + 94162742), a4: v10, a5: v10, a6: v19);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v15, a2: v16, a3: v14, a4: v18);
    }
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1E637E0();
}
