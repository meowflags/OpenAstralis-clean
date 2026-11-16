// sub_132B1624
// rva 0x132b1624  size 338  section .text  group text
// window base 0x1932b1624: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B1624(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // edi
  int v22; // esi
  __int64 v23; // r8
  int v24; // edx

  v8 = (*(__int64 (**)(void))(*(_QWORD *)a4 + 1312LL))();
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1792LL))(
          a1: v9,
          a2: v8,
          a3,
          a4,
          a5: 0);
  if ( v13 != 0 )
  {
    if ( (unsigned int)v12 > 0x7FFFFFFE )
      goto LABEL_13;
    if ( (int)v12 + 1 >= 4 )
      JUMPOUT(0x32650B698LL);
    v11 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v11, a2: v12, a3: v10, a4: 4);
    if ( v11 != 0 )
    {
      if ( (int)v12 <= 0 )
      {
LABEL_11:
        *(_BYTE *)(v12 + v11) = 0;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
          a1: v11,
          a2: v12,
          a3,
          a4,
          a5: v13);
        return v16;
      }
      v14 = 0;
      while ( 1 )
      {
        v15 = *(unsigned __int16 *)(v13 + 2 * v14);
        if ( a5 != 0 && (_WORD)v15 == 0 )
          break;
        if ( v15 > 0x7F )
          JUMPOUT(0x32650B6D4LL);
        *(_BYTE *)(v14 + v11) = v15;
        if ( ++v14 >= v12 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
        a1: v11,
        a2: v12,
        a3,
        a4,
        a5: v13);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v19, a2: v20, a3: v18, a4: v19);
      v23 = 542816;
      v24 = 542512;
    }
    else
    {
LABEL_13:
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1800LL))(
        a1: v11,
        a2: v12,
        a3,
        a4,
        a5: v13);
      v23 = 0;
      v24 = 538568;
    }
    JNU_ThrowByName(a1: v21, a2: v22, a3: v24, a4, a5: v23);
  }
  return 0;
}
