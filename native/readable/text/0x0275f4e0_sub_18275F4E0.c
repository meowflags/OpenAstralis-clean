// sub_275F4E0
// rva 0x0275f4e0  size 710  section .text  group text
// window base 0x18275f4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275F4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  double *v9; // rbx
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm0_8
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_52;
  }
  v24 = a3;
  v23 = a5;
  v22 = a6;
  if ( *(_BYTE *)(a3 + 17) != 0 )
  {
LABEL_52:
    v19 = v6 + 373281248;
    if ( a6 == v6 )
      goto LABEL_56;
    v20 = v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12);
    goto LABEL_54;
  }
  if ( a6 == v6 )
  {
    while ( 1 )
    {
      v19 = sub_275BEC0(a1, a2, a3, a4, a5: v6 + 373281248, a6: v6 + 373281248, a7: v21);
LABEL_56:
      v20 = v19;
LABEL_54:
      sub_275BDA0(a1, a2, a3: v24, a4: v20, a5: v20, a6: v19, a7: v21);
    }
  }
  v8 = *(unsigned int *)(a3 + 20);
  v9 = *(double **)(a3 + 8);
  v10 = v6 + 8 * v8;
  result = *(_DWORD *)a6 >> 3;
  switch ( (_DWORD)result )
  {
    case 0x416FB5:
      result = (unsigned int)*(char *)(a6 + 4);
      v13 = (double)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v13;
      else
        *v9 = v13;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    case 0x416FCB:
      result = (unsigned int)*(__int16 *)(a6 + 4);
      v14 = (double)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v14;
      else
        *v9 = v14;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    case 0x416FE1:
      result = *(unsigned __int16 *)(a6 + 4);
      v15 = (double)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v15;
      else
        *v9 = v15;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    case 0x4103C8:
      v16 = (double)*(int *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v16;
      else
        *v9 = v16;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    case 0x410264:
      v17 = (double)*(__int64 *)(a6 + 8);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v17;
      else
        *v9 = v17;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    case 0x414E8A:
      v18 = *(float *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v18;
      else
        *v9 = v18;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280(a1, a2, a3);
    default:
      break;
  }
  if ( (_DWORD)result != 4260831 )
  {
    sub_275BEC0(
      a1,
      a2,
      a3,
      a4: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a6: v6 + 373281248,
      a7: v21);
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
    return sub_275F7C0();
  }
  v12 = *(_QWORD *)(a6 + 8);
  if ( (_DWORD)v8 != 0 )
    *(_QWORD *)((char *)v9 + v10) = v12;
  else
    *(_QWORD *)v9 = v12;
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1, a2, a3);
  return result;
}
