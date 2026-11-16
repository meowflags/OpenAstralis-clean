// getJavaIDFromLangID
// rva 0x132ba484  size 260  section .text  group text
// window base 0x1932ba484: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall getJavaIDFromLangID(_DWORD a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int128 *v6; // rdi
  __int64 j; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  __int64 i; // rsi
  _BYTE *v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v19[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-18h]

  v5 = MEMORY[0x79AD0](a1: a4, a2, a3, a4: 86);
  if ( v5 != 0 )
  {
    v20 = 0;
    v21 = 0;
    if ( (unsigned int)sub_1932BA07C(
                         a1: (__int64)v6,
                         a2: j,
                         a3: (__int64)&v20,
                         a4: (unsigned int)v6,
                         a5: (__int64 *)&v20 + 1,
                         a6: (__int64 *)&v21,
                         a7: v19[0],
                         a8: v19[2],
                         a9: v19[4],
                         a10: v19[6],
                         a11: (__int64 *)&v21 + 1) != 0 )
    {
      sub_1932CA27B(a1: v11, a2: v12, a3: v20, a4: v5);
      v13 = (_QWORD *)&v20 + 1;
      for ( i = 3; i != 0; --i )
      {
        v15 = (_BYTE *)*v13;
        if ( *(_BYTE *)*v13 != 0 )
        {
          sub_1932CA281(a1: v13, a2: i, a3: 545420, a4: v5);
          sub_1932CA281(a1: v16, a2: v17, a3: v15, a4: v5);
        }
        ++v13;
      }
    }
    else
    {
      MEMORY[0x79AE0](a1: v11, a2: v12, a3: v10, a4: v5);
    }
    v6 = &v20;
    for ( j = 4; j != 0; --j )
    {
      if ( *(_QWORD *)v6 != 0 )
        MEMORY[0x79AE0](a1: v6, a2: j, a3: v4, a4: *(_QWORD *)v6);
      v6 = (__int128 *)((char *)v6 + 8);
    }
  }
  return sub_1932C8DE0(a1: v6, a2: j, a3: v4, a4: (unsigned __int64)v19 ^ v22, a5: v8, a6: v9);
}
