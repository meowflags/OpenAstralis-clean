// sub_504B220
// rva 0x0504b220  size 319  section .text  group text
// window base 0x18504b220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504B220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64, __int64, _QWORD, __int64, __int64); // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]
  __int64 v22; // [rsp+10h] [rbp-38h]
  __int64 v23; // [rsp+18h] [rbp-30h]
  __int64 v24; // [rsp+20h] [rbp-28h]
  _DWORD *v25; // [rsp+28h] [rbp-20h]
  _DWORD *v26; // [rsp+30h] [rbp-18h]
  __int64 v27; // [rsp+38h] [rbp-10h]
  __int64 v28; // [rsp+40h] [rbp-8h]

  v28 = a3;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a1;
    v26 = a6;
    v25 = a5;
    sub_1EB84E0();
LABEL_10:
    sub_2771080(a1: v27, a2: v16, a3: v28, a4: v17, a5: v25, a6: v26);
    __builtin_debugtrap();
    return sub_504B360();
  }
  v27 = a1;
  v26 = a6;
  v25 = a5;
  sub_504AC60(a1, a2, a3);
  v11 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v8 + 32) )
  {
    v12 = sub_1EAA920(a1: v9, a2: v10, a3: 43309568);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v11 + 40;
    *(_DWORD *)v11 = 43309568;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 32) = 0;
    v12 = v11;
  }
  v13 = *(unsigned int *)(v28 + 4);
  v14 = v7 + 8 * *(_DWORD *)(v28 + 8);
  v24 = v7 + 8LL * *(unsigned int *)(v28 + 8);
  v23 = v12;
  v22 = v7 + 8 * v13;
  v21 = v13;
  sub_504A080(a1: v24, a2: v14, a3: v12, a4: v13, a5: v25, a6: v26);
  v17 = v21;
  if ( v21 == 0 )
    goto LABEL_10;
  v18 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64))(v6
                                                                                    + *(_QWORD *)(v7
                                                                                                + 8LL
                                                                                                * (*(_DWORD *)(v7 + 8LL * v21) >> 3)
                                                                                                + 488));
  result = v18(a1: v15, a2: v16, a3: v22, a4: v18, a5: v23, a6: v27);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
