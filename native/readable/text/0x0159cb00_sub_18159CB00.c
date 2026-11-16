// sub_159CB00
// rva 0x0159cb00  size 235  section .text  group text
// window base 0x18159cb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159CB00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v35; // [rsp+8h] [rbp-20h]
  _DWORD *v36; // [rsp+10h] [rbp-18h]
  __int64 v37; // [rsp+18h] [rbp-10h]
  _DWORD *v38; // [rsp+20h] [rbp-8h]

  v38 = a6;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v7 + 8) )
  {
    v37 = a5;
    v36 = a3;
    sub_1EB83C0();
  }
  else if ( a3 != v6 )
  {
    v37 = a5;
    v36 = a3;
    v35 = v6 + 94153030;
    v8 = sub_20841E0(a1, a2, a3: v6 + 94153030);
    v12 = sub_2084840(a1: v10, a2: v11, a3: v8, a4: v9, a5: v6 + 91455464);
    v16 = sub_2084840(a1: v14, a2: v15, a3: v12, a4: v13, a5: v37);
    v20 = sub_2084840(a1: v18, a2: v19, a3: v16, a4: v17, a5: v6 + 93109238);
    if ( v38 == v6 )
    {
LABEL_8:
      sub_276EFE0(a1: v22, a2: v23, a3: v36, a4: v21, a5: v37);
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
      return sub_159CC00(a1: v32, a2: v33, a3: v31);
    }
    v24 = sub_2084840(a1: v22, a2: v23, a3: v20, a4: v21, a5: &v6[2 * v6[2 * (*v38 >> 3) + 3]]);
    sub_2084840(a1: v26, a2: v27, a3: v24, a4: v25, a5: v6 + 91336886);
    v6[94153031] = 0;
    result = sub_20841E0(a1: v28, a2: v29, a3: v35);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v37 = a5;
  sub_276EFE0();
  goto LABEL_8;
}
