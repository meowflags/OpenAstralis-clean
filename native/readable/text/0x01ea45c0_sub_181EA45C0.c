// sub_1EA45C0
// rva 0x01ea45c0  size 390  section .text  group text
// window base 0x181ea45c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA45C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  double v10; // xmm1_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  double v13; // xmm5_8
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  double v17; // xmm3_8
  double v18; // xmm2_8
  double v19; // xmm4_8
  double v20; // xmm2_8
  double v21; // xmm4_8
  int v22; // ebp
  int v23; // eax
  __int64 v24; // rbx
  __int64 result; // rax
  int v26; // edx
  double v27; // xmm4_8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // [rsp+0h] [rbp-28h] BYREF
  __int64 v35; // [rsp+10h] [rbp-18h]
  double v36; // [rsp+18h] [rbp-10h]
  double v37; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v8 + 8) )
  {
    a7 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v34);
LABEL_18:
    a7 = sub_276EFE0(a1: a7, a2: v10);
    goto LABEL_19;
  }
  v9 = *(_DWORD *)(a3 + 4);
  v10 = 0.0;
  if ( v9 != 0 )
  {
    v11 = *(double *)(a3 + 24);
    v12 = *(double *)(a3 + 40);
    v13 = (a7 - v11) * v12;
    *(double *)(a3 + 24) = v11 + v13;
    *(double *)(a3 + 32) = (MEMORY[0x11b129d8]/* 0x11b129d8 */ - v12) * ((a7 - v11) * v13 + *(double *)(a3 + 32));
  }
  else
  {
    *(double *)(a3 + 24) = a7;
    *(_QWORD *)(a3 + 32) = 0;
  }
  v14 = *(unsigned int *)(a3 + 48);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_18;
  v15 = *(unsigned int *)(a3 + 56);
  if ( (unsigned int)v15 >= *(_DWORD *)(v7 + 8 * v14 + 8) )
  {
LABEL_19:
    a7 = sub_276F0E0(a1: a7, a2: v10);
    goto LABEL_20;
  }
  v16 = v7 + 8 * v14;
  v17 = *(double *)(v16 + 8 * v15 + 16);
  v18 = *(double *)(a3 + 8) - v17;
  *(double *)(a3 + 8) = v18;
  v19 = *(double *)(a3 + 16) - v17 * v17;
  *(double *)(a3 + 16) = v19;
  v20 = v18 + a7;
  *(double *)(a3 + 8) = v20;
  v21 = v19 + a7 * a7;
  *(double *)(a3 + 16) = v21;
  *(double *)(v16 + 8 * v15 + 16) = a7;
  v22 = *(_DWORD *)(a3 + 52);
  if ( v22 == 0 )
  {
LABEL_20:
    v24 = a3;
    a7 = sub_276E7E0(a1: a7, a2: v10);
    goto LABEL_21;
  }
  v23 = v15 + 1;
  v24 = a3;
  v26 = v23 % v22;
  result = (unsigned int)(v23 / v22);
  *(_DWORD *)(v24 + 56) = v26;
  if ( v22 > v9 )
    *(_DWORD *)(v24 + 4) = ++v9;
  if ( v9 < 2 )
    goto LABEL_11;
  v27 = v21 / (double)v9 - v20 / (double)v9 * (v20 / (double)v9);
  if ( v27 < 0.0 )
    goto LABEL_11;
  if ( v27 <= MEMORY[0x11b129e0]/* 0x11b129e0 */ )
  {
LABEL_21:
    v37 = v17;
    v36 = a7;
    v35 = v24;
    sub_28C1C40(a1, a2, a3: v7 + 361300432);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EA4760(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32, a6: v33);
  }
  v10 = v27;
LABEL_11:
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: a7, a2: v10);
  return result;
}
