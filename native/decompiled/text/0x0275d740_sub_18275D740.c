// sub_18275D740
// rva 0x0275d740  size 818  section .text  group text
// window base 0x18275d740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
double *__fastcall sub_18275D740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
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
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  _DWORD *v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  v26 = a3;
  v25 = a5;
  v24 = a6;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_52;
  }
  sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v26;
  if ( *(_BYTE *)(v26 + 17) != 0 )
  {
LABEL_52:
    v21 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v24 == v6 )
      goto LABEL_56;
    v22 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v24 >> 3) + 3]];
    goto LABEL_54;
  }
  if ( (_DWORD *)v24 == v6 )
  {
    while ( 1 )
    {
      v21 = sub_18275BEC0(
              a1: v9,
              a2: v10,
              a3: v11,
              a4: v8,
              a5: (__int64)(v6 + 93320312),
              a6: (__int64)(v6 + 93320312),
              a7: v23);
LABEL_56:
      v22 = v21;
LABEL_54:
      sub_18275BDA0(a1: v9, a2: v10, a3: v26, a4: v22, a5: v22, a6: v21, a7: v23);
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
        *(double *)((char *)result + (_QWORD)v25) = v15;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    case 4288459:
      v16 = (double)*(__int16 *)(v24 + 4);
      if ( v25 == v6 )
        *result = v16;
      else
        *(double *)((char *)result + (_QWORD)v25) = v16;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    case 4288481:
      v17 = (double)*(unsigned __int16 *)(v24 + 4);
      if ( v25 == v6 )
        *result = v17;
      else
        *(double *)((char *)result + (_QWORD)v25) = v17;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    case 4260808:
      v18 = (double)*(int *)(v24 + 4);
      if ( v25 == v6 )
        *result = v18;
      else
        *(double *)((char *)result + (_QWORD)v25) = v18;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    case 4260452:
      v19 = (double)*(__int64 *)(v24 + 8);
      if ( v25 == v6 )
        *result = v19;
      else
        *(double *)((char *)result + (_QWORD)v25) = v19;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    case 4279946:
      v20 = *(float *)(v24 + 4);
      if ( v25 == v6 )
        *result = v20;
      else
        *(double *)((char *)result + (_QWORD)v25) = v20;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
    default:
      break;
  }
  if ( v13 != 4260831 )
  {
    sub_18275BEC0(
      a1: v9,
      a2: v10,
      a3: v26,
      a4: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v24 >> 3) + 3]],
      a5: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v24 >> 3) + 3]],
      a6: (__int64)(v6 + 93320312),
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
    return (double *)sub_18275DA80();
  }
  v14 = *(_QWORD *)(v24 + 8);
  if ( v25 == v6 )
    *(_QWORD *)result = v14;
  else
    *(_QWORD *)((char *)result + (_QWORD)v25) = v14;
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return (double *)sub_18277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
