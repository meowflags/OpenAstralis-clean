// sub_2760A00
// rva 0x02760a00  size 329  section .text  group text
// window base 0x182760a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_WORD *__fastcall sub_2760A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _WORD *result; // rax
  int v13; // r8d
  __int16 v14; // cx
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  v21 = a3;
  v20 = a5;
  v19 = a6;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_19;
  }
  sub_275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v21;
  if ( *(_BYTE *)(v21 + 16) != 0 )
  {
LABEL_19:
    v16 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v19 == v6 )
      goto LABEL_23;
    v17 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v19 >> 3) + 3]];
    goto LABEL_21;
  }
  if ( (_DWORD *)v19 == v6 )
  {
    while ( 1 )
    {
      v16 = sub_275BEC0(
              a1: v9,
              a2: v10,
              a3: v11,
              a4: v8,
              a5: (__int64)(v6 + 93320312),
              a6: (__int64)(v6 + 93320312),
              a7: v18);
LABEL_23:
      v17 = v16;
LABEL_21:
      sub_275BDA0(a1: v9, a2: v10, a3: v21, a4: v17, a5: v17, a6: v16, a7: v18);
    }
  }
  result = *(_WORD **)(v21 + 8);
  v13 = *(_DWORD *)v19 >> 3;
  if ( v13 == 4288437 )
  {
    v15 = *(char *)(v19 + 4);
    if ( v20 == v6 )
      *result = v15;
    else
      *(_WORD *)((char *)result + (_QWORD)v20) = v15;
    if ( *(int *)(v7 + 16) > 0 )
      return result;
    return (_WORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
  }
  if ( v13 != 4288459 )
  {
    sub_275BEC0(
      a1: v9,
      a2: v10,
      a3: v21,
      a4: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v19 >> 3) + 3]],
      a5: (__int64)&v6[2 * v6[2 * (*(_DWORD *)v19 >> 3) + 3]],
      a6: (__int64)(v6 + 93320312),
      a7: v18);
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
    return (_WORD *)sub_2760B60();
  }
  v14 = *(_WORD *)(v19 + 4);
  if ( v20 == v6 )
    *result = v14;
  else
    *(_WORD *)((char *)result + (_QWORD)v20) = v14;
  if ( *(int *)(v7 + 16) <= 0 )
    return (_WORD *)sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
