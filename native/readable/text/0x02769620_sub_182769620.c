// sub_2769620
// rva 0x02769620  size 181  section .text  group text
// window base 0x182769620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2769620(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _DWORD *v30; // [rsp+8h] [rbp-10h]

  v30 = v4 + 94153220;
  sub_2084840(a1, a2, a3: v4 + 94153220, a4, a5: v4 + 92661774);
  v11 = (int)a3;
  if ( a3 == v4 )
    goto LABEL_4;
  sub_2084840(a1: v7, a2: v8, a3: v30, a4: v6, a5: &v4[2 * v4[2 * (*a3 >> 3) + 3]]);
  sub_2084840(a1: v13, a2: v14, a3: v30, a4: v12, a5: v4 + 93223554);
  v20 = *(unsigned int *)(v5 + 272);
  if ( (_DWORD)v20 != 0 )
  {
    v21 = sub_2084840(a1: v16, a2: v17, a3: v30, a4: v15, a5: &v4[2 * v4[2 * (v4[2 * v20] >> 3) + 3]]);
    v24 = sub_20841E0(a1: v22, a2: v23, a3: v21);
    sub_20841E0(a1: v25, a2: v26, a3: v24);
    sub_28C1C40(a1: v27, a2: v28, a3: v4 + 91913978);
LABEL_4:
    sub_276EFE0(a1: v7, a2: v8, a3: v11, a4: v6, a5: v9, a6: v10);
  }
  sub_276EFE0(a1: v16, a2: v17, (_DWORD)a3, a4: v15, a5: v18, a6: v19);
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
  return sub_27696E0();
}
