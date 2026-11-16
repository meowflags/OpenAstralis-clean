// sub_275C120
// rva 0x0275c120  size 652  section .text  group text
// window base 0x18275c120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
float *__fastcall sub_275C120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  float *result; // rax
  int v13; // r8d
  int v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+10h] [rbp-18h]
  _DWORD *v24; // [rsp+18h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-8h]

  v25 = a3;
  v24 = a5;
  v23 = a6;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_45;
  }
  sub_275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v25;
  if ( *(_BYTE *)(v25 + 16) != 0 )
  {
LABEL_45:
    v20 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v23 == v6 )
      goto LABEL_49;
    v21 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v23 >> 3) + 3]];
    goto LABEL_47;
  }
  if ( (_DWORD *)v23 == v6 )
  {
    while ( 1 )
    {
      v20 = sub_275BEC0(
              a1: v9,
              a2: v10,
              a3: v11,
              a4: v8,
              a5: (__int64)(v6 + 93320312),
              a6: (__int64)(v6 + 93320312),
              a7: v22);
LABEL_49:
      v21 = v20;
LABEL_47:
      sub_275BDA0(a1: v9, a2: v10, a3: v25, a4: v21, a5: v21, a6: v20, a7: v22);
    }
  }
  result = *(float **)(v25 + 8);
  v13 = *(_DWORD *)v23 >> 3;
  switch ( v13 )
  {
    case 4288437:
      v15 = (float)*(char *)(v23 + 4);
      if ( v24 == v6 )
        *result = v15;
      else
        *(float *)((char *)result + (_QWORD)v24) = v15;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288459:
      v16 = (float)*(__int16 *)(v23 + 4);
      if ( v24 == v6 )
        *result = v16;
      else
        *(float *)((char *)result + (_QWORD)v24) = v16;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288481:
      v17 = (float)*(unsigned __int16 *)(v23 + 4);
      if ( v24 == v6 )
        *result = v17;
      else
        *(float *)((char *)result + (_QWORD)v24) = v17;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4260808:
      v18 = (float)*(int *)(v23 + 4);
      if ( v24 == v6 )
        *result = v18;
      else
        *(float *)((char *)result + (_QWORD)v24) = v18;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4260452:
      v19 = (float)*(__int64 *)(v23 + 8);
      if ( v24 == v6 )
        *result = v19;
      else
        *(float *)((char *)result + (_QWORD)v24) = v19;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
    default:
      break;
  }
  if ( v13 != 4279946 )
  {
    sub_275BEC0(
      a1: v9,
      a2: v10,
      a3: v25,
      a4: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v23 >> 3) + 3]],
      a5: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v23 >> 3) + 3]],
      a6: (__int64)(v6 + 93320312),
      a7: v22);
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
    return (float *)sub_275C3C0();
  }
  v14 = *(_DWORD *)(v23 + 4);
  if ( v24 == v6 )
    *(_DWORD *)result = v14;
  else
    *(_DWORD *)((char *)result + (_QWORD)v24) = v14;
  if ( *(int *)(v7 + 16) <= 0 )
    return (float *)sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
