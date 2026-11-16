// sub_132C8FEC
// rva 0x132c8fec  size 296  section .text  group text
// window base 0x1932c8fec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8FEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v6 = a5;
  v7 = (unsigned int)a3;
  if ( (_DWORD)a3 == 0 && sub_132CA350 <= 0 )
    return 0;
  if ( (unsigned int)(a3 - 1) > 1
    || (sub_132CA350 != 0 ? (v10 = sub_132CA350(a1: (unsigned int)a3, a2: a5, a3, a4, a5)) : (v10 = 1),
        v10 != 0 && (v10 = sub_132C8E00(a1: v7, a2: v6, a3: v7, a4, a5: v6, a6, a7: v22)) != 0) )
  {
    v11 = sub_132C9924(a1: v7, a2: v6, a3: (unsigned int)v7, a4, a5: v6);
    v10 = v11;
    if ( (_DWORD)v12 == 1 && v11 == 0 )
    {
      sub_132C9924(a1: v12, a2: v13, a3: 0, a4, a5: v13);
      sub_132C8F68(a1: v16, a2: v17, a3: v15, a4: v17 != 0, a5: v18, a6: v19, a7: v22, a8: v23, a9: v24, a10: v25);
      if ( MEMORY[0x88f20]/* 0x88f20 */ != 0 )
        MEMORY[0x79d60]/* 0x79d60 */(a1: v12, a2: v13, a3: 0, a4, a5: v13);
    }
    if ( (_DWORD)v12 == 0 || (_DWORD)v12 == 3 )
    {
      v10 = sub_132C8E00(a1: v12, a2: v13, a3: v12, a4, a5: v13, a6: v14, a7: v22);
      if ( v10 != 0 )
      {
        if ( MEMORY[0x88f20]/* 0x88f20 */ != 0 )
          return (unsigned int)MEMORY[0x79d60]/* 0x79d60 */(a1: v20, a2: v21, a3: (unsigned int)v20, a4, a5: v21);
        else
          return 1;
      }
    }
  }
  return v10;
}
