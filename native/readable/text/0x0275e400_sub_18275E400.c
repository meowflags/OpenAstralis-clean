// sub_275E400
// rva 0x0275e400  size 601  section .text  group text
// window base 0x18275e400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_275E400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *result; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  _DWORD *v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  v24 = a3;
  v23 = a5;
  v22 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_38;
  }
  sub_275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v24;
  if ( *(_BYTE *)(v24 + 17) != 0 )
  {
LABEL_38:
    v19 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v22 == v6 )
      goto LABEL_42;
    v20 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v22 >> 3) + 3]];
    goto LABEL_40;
  }
  if ( (_DWORD *)v22 == v6 )
  {
    while ( 1 )
    {
      v19 = sub_275BEC0(
              a1: v9,
              a2: v10,
              a3: v11,
              a4: v8,
              a5: (__int64)(v6 + 93320312),
              a6: (__int64)(v6 + 93320312),
              a7: v21);
LABEL_42:
      v20 = v19;
LABEL_40:
      sub_275BDA0(a1: v9, a2: v10, a3: v24, a4: v20, a5: v20, a6: v19, a7: v21);
    }
  }
  result = *(_QWORD **)(v24 + 8);
  v13 = *(_DWORD *)v22 >> 3;
  switch ( v13 )
  {
    case 4288437:
      v15 = *(char *)(v22 + 4);
      if ( v23 == v6 )
        *result = v15;
      else
        *(_QWORD *)((char *)result + (_QWORD)v23) = v15;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_QWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288459:
      v16 = *(__int16 *)(v22 + 4);
      if ( v23 == v6 )
        *result = v16;
      else
        *(_QWORD *)((char *)result + (_QWORD)v23) = v16;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_QWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288481:
      v17 = *(unsigned __int16 *)(v22 + 4);
      if ( v23 == v6 )
        *result = v17;
      else
        *(_QWORD *)((char *)result + (_QWORD)v23) = v17;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_QWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4260808:
      v18 = *(int *)(v22 + 4);
      if ( v23 == v6 )
        *result = v18;
      else
        *(_QWORD *)((char *)result + (_QWORD)v23) = v18;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_QWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    default:
      break;
  }
  if ( v13 != 4260452 )
  {
    sub_275BEC0(
      a1: v9,
      a2: v10,
      a3: v24,
      a4: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v22 >> 3) + 3]],
      a5: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v22 >> 3) + 3]],
      a6: (__int64)(v6 + 93320312),
      a7: v21);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_QWORD *)sub_275E660();
  }
  v14 = *(_QWORD *)(v22 + 8);
  if ( v23 == v6 )
    *result = v14;
  else
    *(_QWORD *)((char *)result + (_QWORD)v23) = v14;
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return (_QWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
