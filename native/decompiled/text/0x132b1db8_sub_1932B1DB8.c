// sub_1932B1DB8
// rva 0x132b1db8  size 517  section .text  group text
// window base 0x1932b1db8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B1DB8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r15
  char *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  char v27; // dl
  char *v28; // r9
  int v29; // edi
  int v30; // esi
  __int64 v31; // r8
  int v32; // edx
  int v33; // esi
  __int64 v34; // rdi

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 776LL))(
         a1: a3,
         a2,
         a3,
         a4,
         a5: MEMORY[0x337618]) != 0 )
    return sub_1932B18D0(a1: v7, a2: v8, a3: v7, a4, a5);
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 208LL))(a1: v7, a2: v8, a3: 2, a4) < 0 )
    return 0;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 760LL))(
          a1: v10,
          a2: v11,
          a3: v10,
          a4,
          a5: MEMORY[0x337620]);
  v15 = v12;
  if ( v12 == 0 )
    return 0;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(
          a1: v13,
          a2: v14,
          a3: v12,
          a4);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
          a1: v17,
          a2: v16,
          a3: v15,
          a4,
          a5: 0);
  v22 = v18;
  if ( v18 == 0 )
    return 0;
  v23 = v21;
  if ( (int)v21 > 0 )
  {
    v24 = (char *)v18;
    while ( a5 == 0 || *v24 != 0 )
    {
      if ( *v24 < 0 )
        v21 = (unsigned int)(v21 + 1);
      if ( (__int64)&(++v24)[-v18] >= v23 )
        goto LABEL_13;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1784LL))(
      a1: v20,
      a2: v21,
      a3: v15,
      a4,
      a5: v18,
      a6: 2);
    v31 = 542816;
    v32 = 542512;
    goto LABEL_25;
  }
LABEL_13:
  if ( (unsigned int)v21 <= 0x7FFFFFFE )
  {
    if ( (int)v21 + 1 >= 4 )
      JUMPOUT(0x32650BEC3LL);
    v20 = MEMORY[0x79AD0](a1: v20, a2: v21, a3: v19, a4: 4);
    if ( v20 != 0 )
    {
      if ( v23 > 0 )
      {
        v25 = 0;
        v26 = 0;
        do
        {
          v27 = *(_BYTE *)(v22 + v25);
          v28 = (char *)(v26 + v20);
          ++v26;
          if ( v27 >= 0 )
          {
            *v28 = v27;
          }
          else
          {
            *v28 = (*(char *)(v22 + v25) >> 6) & 3 | 0xC0;
            *(_BYTE *)(v26 + v20) = v27 & 0x3F | 0x80;
            ++v26;
          }
          ++v25;
        }
        while ( v25 < v23 );
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1784LL))(
        a1: v20,
        a2: v21,
        a3: v15,
        a4,
        a5: v22,
        a6: 2);
      *(_BYTE *)(v33 + v34) = 0;
      return v34;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1784LL))(
    a1: v20,
    a2: v21,
    a3: v15,
    a4,
    a5: v22,
    a6: 2);
  v31 = 543232;
  v32 = 538568;
LABEL_25:
  JNU_ThrowByName(a1: v29, a2: v30, a3: v32, a4, a5: v31);
  return 0;
}
