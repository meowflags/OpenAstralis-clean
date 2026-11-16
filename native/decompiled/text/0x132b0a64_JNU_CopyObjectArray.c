// JNU_CopyObjectArray
// rva 0x132b0a64  size 171  section .text  group text
// window base 0x1932b0a64: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_CopyObjectArray(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // edi

  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1, a2: a4, a3: 1);
  v11 = 0;
  if ( v9 < 0 )
    return 0xFFFFFFFFLL;
  if ( a6 > 0 )
  {
    do
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 1384LL))(
              a1: v11,
              a2: v10,
              a3: a5,
              a4: v10,
              a5: (unsigned int)v11);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v13 + 1392LL))(
        a1: v15,
        a2: v13,
        a3,
        a4: v13,
        a5: (unsigned int)v15,
        a6: v14);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 184LL))(
        a1: v17,
        a2: v16,
        a3: v14,
        a4: v16);
      v11 = (unsigned int)(v18 + 1);
    }
    while ( (int)v11 < a6 );
  }
  return 0;
}
