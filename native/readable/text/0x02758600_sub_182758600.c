// sub_2758600
// rva 0x02758600  size 748  section .text  group text
// window base 0x182758600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
double *__fastcall sub_2758600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  double *result; // rax
  int v13; // r8d
  __int64 v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm0_8
  double v20; // xmm0_8
  int v21; // eax
  int v22; // ecx
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  v26 = a3;
  v25 = a5;
  v24 = a6;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_52;
  }
  sub_275A260(a1, a2, a3, a4: a5);
  v11 = v26;
  if ( *(_BYTE *)(v26 + 16) != 0 )
  {
LABEL_52:
    v21 = v6 + 373281248;
    if ( v24 == v6 )
      goto LABEL_56;
    v22 = v6 + 8 * *(_DWORD *)(v6 + 8LL * (*(_DWORD *)v24 >> 3) + 12);
    goto LABEL_54;
  }
  if ( v24 == v6 )
  {
    while ( 1 )
    {
      v21 = sub_275BEC0(a1: v9, a2: v10, a3: v11, a4: v8, a5: (int)v6 + 373281248, a6: (int)v6 + 373281248, a7: v23);
LABEL_56:
      v22 = v21;
LABEL_54:
      sub_275BDA0(a1: v9, a2: v10, a3: v26, a4: v22, a5: v22, a6: v21, a7: v23);
    }
  }
  result = *(double **)(v26 + 8);
  v13 = *(_DWORD *)v24 >> 3;
  switch ( v13 )
  {
    case 4288437:
      v15 = (double)*(char *)(v24 + 4);
      if ( v25 == v6 )
        *result = v15;
      else
        *(double *)((char *)result + v25) = v15;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288459:
      v16 = (double)*(__int16 *)(v24 + 4);
      if ( v25 == v6 )
        *result = v16;
      else
        *(double *)((char *)result + v25) = v16;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288481:
      v17 = (double)*(unsigned __int16 *)(v24 + 4);
      if ( v25 == v6 )
        *result = v17;
      else
        *(double *)((char *)result + v25) = v17;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4260808:
      v18 = (double)*(int *)(v24 + 4);
      if ( v25 == v6 )
        *result = v18;
      else
        *(double *)((char *)result + v25) = v18;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4260452:
      v19 = (double)*(__int64 *)(v24 + 8);
      if ( v25 == v6 )
        *result = v19;
      else
        *(double *)((char *)result + v25) = v19;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4279946:
      v20 = *(float *)(v24 + 4);
      if ( v25 == v6 )
        *result = v20;
      else
        *(double *)((char *)result + v25) = v20;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
    default:
      break;
  }
  if ( v13 != 4260831 )
  {
    sub_275BEC0(
      a1: v9,
      a2: v10,
      a3: v26,
      a4: v6 + 8 * *(_DWORD *)(v6 + 8LL * (*(_DWORD *)v24 >> 3) + 12),
      a5: v6 + 8 * *(_DWORD *)(v6 + 8LL * (*(_DWORD *)v24 >> 3) + 12),
      a6: v6 + 373281248,
      a7: v23);
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
    return (double *)sub_2758900();
  }
  v14 = *(_QWORD *)(v24 + 8);
  if ( v25 == v6 )
    *(_QWORD *)result = v14;
  else
    *(_QWORD *)((char *)result + v25) = v14;
  if ( *(int *)(v7 + 16) <= 0 )
    return (double *)sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
