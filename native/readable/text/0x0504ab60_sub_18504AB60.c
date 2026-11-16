// sub_504AB60
// rva 0x0504ab60  size 254  section .text  group text
// window base 0x18504ab60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504AB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, _QWORD, unsigned __int64); // rcx
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+Ch] [rbp-2Ch]
  __int64 v21; // [rsp+10h] [rbp-28h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]
  __int64 v23; // [rsp+20h] [rbp-18h]
  __int64 v24; // [rsp+28h] [rbp-10h]
  __int64 v25; // [rsp+30h] [rbp-8h]

  v25 = a3;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a6;
    v23 = a5;
    sub_1EB84E0();
LABEL_10:
    sub_2771080(a1: v14, a2: v15, a3: v25, a4: v16, a5: v23, a6: v24);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_504AC60();
  }
  v24 = a6;
  v23 = a5;
  sub_504AC60();
  v11 = *(_QWORD *)(v8 + 40);
  if ( v11 + 24 > *(_QWORD *)(v8 + 32) )
  {
    v12 = sub_1EAA920(a1: v9, a2: v10, a3: 43309440);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v11 + 24;
    *(_DWORD *)v11 = 43309440;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    v12 = v11;
  }
  v13 = *(unsigned int *)(v25 + 4);
  v22 = v12;
  v21 = v7 + 8 * v13;
  v20 = v13;
  sub_5049AA0(a1: v9, a2: v10, a3: v12, a4: v13, a5: v23, a6: v24, a7: v19);
  v16 = v20;
  if ( v20 == 0 )
    goto LABEL_10;
  v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned __int64))(v6
                                                                                    + *(_QWORD *)(v7
                                                                                                + 8LL
                                                                                                * (*(_DWORD *)(v7 + 8LL * v20) >> 3)
                                                                                                + 280));
  result = v17(a1: v14, a2: v15, a3: v21, a4: v17, a5: v22);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
