// sub_275E040
// rva 0x0275e040  size 519  section .text  group text
// window base 0x18275e040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_275E040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _DWORD *result; // rax
  int v13; // r8d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  _DWORD *v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v23 = a3;
  v22 = a5;
  v21 = a6;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_31;
  }
  sub_275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v23;
  if ( *(_BYTE *)(v23 + 17) != 0 )
  {
LABEL_31:
    v18 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v21 == v6 )
      goto LABEL_35;
    v19 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v21 >> 3) + 3]];
    goto LABEL_33;
  }
  if ( (_DWORD *)v21 == v6 )
  {
    while ( 1 )
    {
      v18 = sub_275BEC0(
              a1: v9,
              a2: v10,
              a3: v11,
              a4: v8,
              a5: (__int64)(v6 + 93320312),
              a6: (__int64)(v6 + 93320312),
              a7: v20);
LABEL_35:
      v19 = v18;
LABEL_33:
      sub_275BDA0(a1: v9, a2: v10, a3: v23, a4: v19, a5: v19, a6: v18, a7: v20);
    }
  }
  result = *(_DWORD **)(v23 + 8);
  v13 = *(_DWORD *)v21 >> 3;
  switch ( v13 )
  {
    case 4288437:
      v15 = *(char *)(v21 + 4);
      if ( v22 == v6 )
        *result = v15;
      else
        *(_DWORD *)((char *)result + (_QWORD)v22) = v15;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_DWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288459:
      v16 = *(__int16 *)(v21 + 4);
      if ( v22 == v6 )
        *result = v16;
      else
        *(_DWORD *)((char *)result + (_QWORD)v22) = v16;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_DWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    case 4288481:
      v17 = *(unsigned __int16 *)(v21 + 4);
      if ( v22 == v6 )
        *result = v17;
      else
        *(_DWORD *)((char *)result + (_QWORD)v22) = v17;
      __faststorefence();
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return (_DWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
    default:
      break;
  }
  if ( v13 != 4260808 )
  {
    sub_275BEC0(
      a1: v9,
      a2: v10,
      a3: v23,
      a4: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v21 >> 3) + 3]],
      a5: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v21 >> 3) + 3]],
      a6: (__int64)(v6 + 93320312),
      a7: v20);
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
    return (_DWORD *)sub_275E260();
  }
  v14 = *(_DWORD *)(v21 + 4);
  if ( v22 == v6 )
    *result = v14;
  else
    *(_DWORD *)((char *)result + (_QWORD)v22) = v14;
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
