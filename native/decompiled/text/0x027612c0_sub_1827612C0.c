// sub_1827612C0
// rva 0x027612c0  size 646  section .text  group text
// window base 0x1827612c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827612C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  __int64 v29; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_52;
  }
  v29 = a3;
  v28 = a5;
  v27 = a6;
  if ( *(_BYTE *)(a3 + 16) != 0 )
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
      v19 = sub_18275BEC0(a1, a2, a3, a4, a5: v6 + 373281248, a6: v6 + 373281248, a7: v26);
LABEL_56:
      v20 = v19;
LABEL_54:
      sub_18275BDA0(a1, a2, a3: v29, a4: v20, a5: v20, a6: v19, a7: v26);
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
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x416FCB:
      result = (unsigned int)*(__int16 *)(a6 + 4);
      v14 = (double)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v14;
      else
        *v9 = v14;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x416FE1:
      result = *(unsigned __int16 *)(a6 + 4);
      v15 = (double)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v15;
      else
        *v9 = v15;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x4103C8:
      v16 = (double)*(int *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v16;
      else
        *v9 = v16;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x410264:
      v17 = (double)*(__int64 *)(a6 + 8);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v17;
      else
        *v9 = v17;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x414E8A:
      v18 = *(float *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(double *)((char *)v9 + v10) = v18;
      else
        *v9 = v18;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    default:
      break;
  }
  if ( (_DWORD)result != 4260831 )
  {
    sub_18275BEC0(
      a1,
      a2,
      a3,
      a4: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a6: v6 + 373281248,
      a7: v26);
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
    return sub_182761560(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25);
  }
  v12 = *(_QWORD *)(a6 + 8);
  if ( (_DWORD)v8 != 0 )
    *(_QWORD *)((char *)v9 + v10) = v12;
  else
    *(_QWORD *)v9 = v12;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3);
  return result;
}
