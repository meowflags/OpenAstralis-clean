// sub_278EDE0
// rva 0x0278ede0  size 315  section .text  group text
// window base 0x18278ede0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278EDE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        char a8,
        char a9)
{
  __int64 v9; // r15
  __int64 v10; // rax
  char v11; // r10
  char v12; // bp
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  char v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-30h]
  __int64 v29; // [rsp+30h] [rbp-28h]
  __int64 v30; // [rsp+38h] [rbp-20h]
  __int64 v31; // [rsp+40h] [rbp-18h]
  unsigned int v32; // [rsp+4Ch] [rbp-Ch]
  unsigned int v33; // [rsp+50h] [rbp-8h]
  int v34; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_278EF20(a1: v25, a2: v26, a3: v24);
  }
  else
  {
    v31 = a3;
    v34 = a1;
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 64) > *(_QWORD *)(v9 + 32) )
    {
      v33 = a4;
      v30 = a2;
      v32 = a6;
      v29 = a5;
      v10 = sub_1EAA920(a1, a2, a3: 40544472);
      v11 = a9;
      v12 = a8;
      a4 = v33;
      a2 = v30;
      LODWORD(a1) = v34;
      a6 = v32;
      a5 = v29;
      v13 = v31;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 64;
      *(_DWORD *)v10 = 40544472;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 48) = 0;
      *(_QWORD *)(v10 + 56) = 0;
      v11 = a9;
      v12 = a8;
      v13 = a3;
    }
    v28 = v10;
    v29 = a5;
    v32 = a6;
    v30 = a2;
    v33 = a4;
    sub_278D8C0(a1: a6, a2: (unsigned int)a1, a3: v10, a4: a2, a5: v13, a6: a5, a7: v27, a8: a4, a9: v12, a10: v11);
    result = sub_278FC40(a1: v15, a2: v16, a3: v28, a4: v14, a5: v17, a6: v18, a7: v27);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v22, a2: v23, a3: v20, a4: v21);
  }
  return result;
}
