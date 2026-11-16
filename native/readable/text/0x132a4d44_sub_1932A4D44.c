// sub_132A4D44
// rva 0x132a4d44  size 262  section .text  group text
// window base 0x1932a4d44: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A4D44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        _DWORD *a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v13; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r9d
  int v23; // r13d
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // edi

  a9 = v9;
  sub_1932CA161(a1, a2: a3, a3: 0, a4: a5, a5: 110);
  *a5 = 1;
  if ( v13 != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, char *))(*(_QWORD *)a4 + 1472LL))(
            a1: 0,
            a2: v13,
            a3: v13,
            a4,
            a5: &a8);
    if ( v15 != 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(
              a1: v16,
              a2: v17,
              a3: v17,
              a4);
      v23 = v19;
      if ( (unsigned __int64)v19 <= 0x6A )
      {
        __imp_api-ms-win-crt-string-l1-1-0.dll!strncpy(a1: v20, a2: v21, a3: v15, a4: a5 + 1, a5: v19);
        *a6 = v23 + 2;
      }
      else
      {
        JNU_ThrowByName(a1: v20, a2: v21, a3: 534024, a4, a5: 535552, a6: v22);
        v25 = 0xFFFFFFFFLL;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1536LL))(
        a1: v25,
        a2: v24,
        a3: v24,
        a4,
        a5: v15,
        a6: 2);
      return v26;
    }
    else
    {
      JNU_ThrowByName(a1: v16, a2: v17, a3: 534024, a4, a5: 535520, a6: v18);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *a6 = 2;
    return 0;
  }
}
