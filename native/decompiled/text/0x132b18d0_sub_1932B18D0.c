// sub_1932B18D0
// rva 0x132b18d0  size 391  section .text  group text
// window base 0x1932b18d0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B18D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi

  if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: 0, a2: a3, a3: 2) < 0 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 272LL))(
          a1: v7,
          a2: v8,
          a3: v8,
          a4,
          a5: MEMORY[0x337610],
          a6: MEMORY[0x337600]);
  if ( v10 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v11,
           a2: v12,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) == 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(
              a1: v13,
              a2: v14,
              a3: v10,
              a4);
      LODWORD(v18) = v15;
      if ( v15 > 0x7FFFFFFE )
        goto LABEL_16;
      if ( (int)(v15 + 1) >= 4 )
        JUMPOUT(0x32650B982LL);
      v19 = MEMORY[0x79AD0](a1: (int)v15, a2: v17, a3: v16, a4: 4);
      LODWORD(v17) = v19;
      if ( v19 == 0 )
      {
LABEL_16:
        JNU_ThrowByName(a1: v18, a2: v17, a3: 538568, a4, a5: 0);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
          a1: v26,
          a2: v27,
          a3: v10,
          a4);
        return 0;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 1600LL))(
        a1: v18,
        a2: v19,
        a3: v10,
        a4,
        a5: 0,
        a6: (unsigned int)v18);
      *(_BYTE *)(v20 + v14) = 0;
      v21 = v20;
      v13 = v14;
      if ( a5 != 0 && v21 > 0 )
      {
        v22 = 0;
        while ( *(_BYTE *)(v22 + v14) != 0 )
        {
          if ( ++v22 >= v21 )
            goto LABEL_13;
        }
        JNU_ThrowByName(a1: v14, a2: v14, a3: 542512, a4, a5: 542816);
        MEMORY[0x79AE0](a1: v24, a2: v25, a3: v23, a4: v25);
        v13 = 0;
      }
    }
LABEL_13:
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: v13, a2: v14, a3: v10, a4);
  }
  return v11;
}
