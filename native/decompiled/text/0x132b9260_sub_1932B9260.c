// sub_1932B9260
// rva 0x132b9260  size 360  section .text  group text
// window base 0x1932b9260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B9260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int16 *v20; // rdi
  int v21; // r9d
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  _WORD *v27; // rax

  v8 = 0;
  if ( a3 == 0 )
  {
    sub_1932B15C0(a1, a2, a3: 0, a4);
    goto LABEL_3;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
          a1,
          a2,
          a3,
          a4,
          a5: 0);
  v10 = v17;
  if ( v17 != 0 )
  {
    v18 = MEMORY[0x79CB0](a1: v17, a2: v11, a3: v9, a4: v17);
    v22 = v18;
    if ( (_DWORD)v18 == 0 )
      goto LABEL_22;
    if ( (int)v18 > 2 && (*v20 == 92 && v20[1] == 92 || v20[1] == 58 && v20[2] == 92) )
    {
      if ( (int)v18 > 247 )
      {
        v23 = v18;
LABEL_18:
        v8 = sub_1932B93C8(a1: (_DWORD)v20, a2: v22, a3: v22, a4: (_DWORD)v20, a5: v23, a6: v21);
        goto LABEL_22;
      }
      v24 = v18 + 6;
    }
    else
    {
      v25 = sub_1932B8C40(a1: (__int64)v20, a2: v18, a3: v18, a4: v20);
      v23 = v25 + v22;
      if ( v25 + (int)v22 + 1 > 247 )
        goto LABEL_18;
      v24 = v22 + 6;
    }
    v26 = MEMORY[0x79AD0](a1: v20, a2: v22, a3: v19, a4: 2LL * v24);
    v8 = v26;
    if ( v26 != 0 )
      MEMORY[0x79C88](a1: v20, a2: v22, a3: v20, a4: v26);
LABEL_22:
    (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64, __int64, unsigned __int16 *))(*(_QWORD *)a4 + 1328LL))(
      a1: v20,
      a2: v22,
      a3,
      a4,
      a5: v20);
    if ( (_DWORD)v11 != 0 )
    {
      if ( v8 != 0 )
        return v8;
LABEL_24:
      sub_1932B15D0(a1: v10, a2: v11, a3: 533920, a4);
      return v8;
    }
  }
LABEL_3:
  if ( a5 != 1 )
  {
    v27 = (_WORD *)MEMORY[0x79AD0](a1: v10, a2: v11, a3: v9, a4: 2);
    v8 = (__int64)v27;
    if ( v27 != nullptr )
    {
      *v27 = 0;
      return v8;
    }
    goto LABEL_24;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
         a1: v10,
         a2: v11,
         a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
         a4) == 0 )
    sub_1932B9738(a1: v12, a2: v13, a3, a4, a5: v14, a6: v15);
  return 0;
}
