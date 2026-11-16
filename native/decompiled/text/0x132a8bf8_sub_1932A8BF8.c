// sub_1932A8BF8
// rva 0x132a8bf8  size 360  section .text  group text
// window base 0x1932a8bf8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A8BF8(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rdi
  _QWORD *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // ebx
  int v14; // ebx
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 *v18; // rdx
  _QWORD *v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  int v23; // [rsp+0h] [rbp-28h]
  int v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]

  v7 = a3;
  MEMORY[0x79798](a1: a4, a2: a5, a3, a4: a4 + 112);
  v13 = v7 - 1;
  if ( v13 == 0 )
  {
    v17 = sub_1932A88A8(a1: (__int64)v9, a2: (__int64)v10, a3: (__int64)v10, a4: v9, a5: a6, a6: v12);
    goto LABEL_33;
  }
  v14 = v13 - 1;
  if ( v14 != 0 )
  {
    if ( v14 != 1 )
    {
      v15 = 87;
      goto LABEL_12;
    }
    v16 = (_QWORD *)v9[1];
    v17 = 0;
    while ( v16 != nullptr )
    {
      if ( (unsigned __int64)v10 >= v16[3] )
      {
        if ( (unsigned __int64)v10 <= v16[3] )
        {
          v18 = v16 - 8;
          if ( v16 == (_QWORD *)64 )
            goto LABEL_13;
          sub_1932A9114(a1: (_DWORD)v9, a2: (_DWORD)v10, a3: (_DWORD)v18, a4: (_DWORD)v9, a5: 0, a6: v12);
          goto LABEL_33;
        }
        v16 = (_QWORD *)v16[1];
      }
      else
      {
        v16 = (_QWORD *)*v16;
      }
    }
  }
  else
  {
    v19 = (_QWORD *)v9[1];
    v17 = 0;
    while ( v19 != nullptr )
    {
      if ( (unsigned __int64)v10 >= v19[3] )
      {
        if ( (unsigned __int64)v10 <= v19[3] )
        {
          v18 = v19 - 8;
          if ( v19 == (_QWORD *)64 )
            goto LABEL_13;
          v20 = *(_DWORD *)a6 | 0x18;
          *((_DWORD *)v18 + 32) = v20;
          v18[15] = *(_QWORD *)(a6 + 8);
          if ( (v20 & ~*((_DWORD *)v18 + 33) & 0x27DF) != 0 )
          {
            v18 += 6;
            if ( (__int64 *)*v18 == v18 )
            {
              v18[1] = (__int64)(v9 + 2);
              v21 = v9[2];
              *v18 = v21;
              *(_QWORD *)(v21 + 8) = v18;
              v9[2] = (__int64)v18;
            }
          }
          if ( v9[19] != 0 )
          {
            v10 = v9 + 2;
            while ( (_QWORD *)*v10 != v10
                 && (int)sub_1932A9288(
                           a1: (_DWORD)v9,
                           a2: (_DWORD)v10,
                           a3: (unsigned int)v10[1] - 48,
                           a4: (_DWORD)v9,
                           a5: v11,
                           a6: v12,
                           a7: v23,
                           a8: v24,
                           a9: v25) >= 0 )
              ;
          }
          goto LABEL_33;
        }
        v19 = (_QWORD *)v19[1];
      }
      else
      {
        v19 = (_QWORD *)*v19;
      }
    }
  }
  v15 = 1168;
LABEL_12:
  sub_1932A85F8(a1: (__int64)v9, a2: (__int64)v10, a3: v8, a4: v15);
LABEL_13:
  v17 = 0xFFFFFFFF;
LABEL_33:
  MEMORY[0x796E8](a1: v9, a2: v10, a3: v18, a4: v9 + 14);
  return v17;
}
