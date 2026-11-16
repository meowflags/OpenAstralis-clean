// sub_18275D4E0
// rva 0x0275d4e0  size 277  section .text  group text
// window base 0x18275d4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275D4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // r9
  __int64 result; // rax
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  v21 = a3;
  v20 = a5;
  v19 = a6;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
  v11 = v21;
  if ( *(_BYTE *)(v21 + 17) != 0 )
  {
LABEL_12:
    v15 = (__int64)(v6 + 93320312);
    if ( (_DWORD *)v19 == v6 )
      goto LABEL_17;
    v16 = (__int64)&v6[2 * v6[2 * (*(_DWORD *)v19 >> 3) + 3]];
    v17 = v11;
    goto LABEL_14;
  }
  v12 = (_DWORD *)v19;
  if ( (_DWORD *)v19 == v6 )
    goto LABEL_15;
  if ( *(_DWORD *)v19 >> 3 != 4288481 )
  {
    while ( 1 )
    {
      v15 = sub_18275BEC0(
              a1: v9,
              a2: v10,
              a3: v21,
              a4: v8,
              a5: (__int64)&v6[2 * v6[2 * (*v12 >> 3) + 3]],
              a6: (__int64)(v6 + 93320312),
              a7: v18);
LABEL_17:
      v16 = v15;
      v17 = v21;
LABEL_14:
      sub_18275BDA0(a1: v9, a2: v10, a3: v17, a4: v17, a5: v16, a6: v15, a7: v18);
LABEL_15:
      sub_18275BEC0(
        a1: v9,
        a2: v10,
        a3: v11,
        a4: v8,
        a5: (__int64)(v6 + 93320312),
        a6: (__int64)(v6 + 93320312),
        a7: v18);
    }
  }
  result = (unsigned int)*(__int16 *)(v19 + 4);
  v14 = *(_WORD **)(v21 + 8);
  if ( v20 == v6 )
    *v14 = *(_WORD *)(v19 + 4);
  else
    *(_WORD *)((char *)v14 + (_QWORD)v20) = *(_WORD *)(v19 + 4);
  __faststorefence();
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
