// sub_15A04E0
// rva 0x015a04e0  size 461  section .text  group text
// window base 0x1815a04e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A04E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *); // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  int v25; // [rsp+Ch] [rbp-3Ch]
  __int64 v26; // [rsp+10h] [rbp-38h]
  _DWORD *v27; // [rsp+18h] [rbp-30h]
  __int64 v28; // [rsp+20h] [rbp-28h]
  _DWORD *v29; // [rsp+28h] [rbp-20h]
  _DWORD *v30; // [rsp+30h] [rbp-18h]
  __int64 v31; // [rsp+38h] [rbp-10h]
  unsigned int v32; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15A06C0();
  }
  v31 = a3;
  if ( a5 == v6
    || (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x61Cu >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1564 )
  {
    v30 = a5;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 == 47076751 )
    v29 = v6;
  else
    v29 = &v6[2 * v9];
  v10 = *a5 >> 3;
  v11 = &v6[2 * v6[2 * v10 + 5]];
  v12 = v6[2 * v10 + 11] & (0x61Cu >> HIBYTE(v6[2 * v10 + 11]));
  v13 = &v6[2 * v10];
  v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)((char *)v13 + HIWORD(v11[v12 + 3]) + 8));
  v28 = (__int64)v13;
  v30 = a5;
  v27 = v11;
  v32 = v12;
  v15 = v14(a1, a2: v12, a3: a5);
  if ( (_DWORD *)v15 != v29 )
  {
    v26 = v15;
LABEL_11:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  v26 = v15;
  v17 = *(unsigned int *)(v31 + 20);
  v18 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v5 + *(_QWORD *)(v28 + HIWORD(v27[v32 + 3]) + 16));
  v27 = &v6[2 * v17];
  v25 = v17;
  v19 = v18(a1: v16, a2: v32, a3: v30);
  if ( v27 == (_DWORD *)v19 )
  {
    v28 = v19;
  }
  else
  {
    if ( v25 == 0 )
      goto LABEL_11;
    v22 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                              + *(_QWORD *)&v6[2 * (v6[2 * v25] >> 3)
                                                                                             + 20]);
    v28 = v19;
    v23 = v22(a1: v20, a2: v21, a3: v27, a4: v22, a5: v19);
    if ( v23 == 0 )
      goto LABEL_11;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v20, a2: v21, a3: v29, a4: v26);
  return 1;
}
