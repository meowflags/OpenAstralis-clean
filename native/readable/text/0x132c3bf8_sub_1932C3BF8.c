// sub_132C3BF8
// rva 0x132c3bf8  size 872  section .text  group text
// window base 0x1932c3bf8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C3BF8(_DWORD a1, _DWORD a2, int a3, __int64 *a4, int a5, unsigned __int64 a6)
{
  __int64 v6; // rdi
  int v7; // esi
  int v8; // ebp
  unsigned int v10; // eax
  _DWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // cl
  _BYTE *v16; // rax
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx
  _BYTE *v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r8d
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // eax
  int v30; // r8d
  int v31; // eax
  __int64 v32; // rdx
  _DWORD *v33; // rsi
  __int64 v34; // rcx
  int v35; // edx
  int v36; // edi
  int v37; // r8d
  int v38; // r9d
  int v40; // eax
  _DWORD *v41; // rsi
  __int64 v42; // rcx
  int v43; // edx
  int v44; // edi
  int v45; // r8d
  int v46; // r9d
  int v47; // eax
  __int64 v48; // rdx
  _DWORD *v49; // rsi
  __int64 v50; // rcx
  int v51; // edx
  int v52; // edi
  int v53; // r8d
  int v54; // r9d
  int v55; // edi
  __int64 v56; // [rsp+0h] [rbp-28h]
  __int64 v57; // [rsp+8h] [rbp-20h]
  __int64 v58; // [rsp+10h] [rbp-18h]
  __int64 v59; // [rsp+18h] [rbp-10h]

  LODWORD(v6) = 0;
  v7 = (_DWORD)a4 + 148;
  v8 = a3;
  while ( 1 )
  {
    v10 = *((_DWORD *)a4 + 39);
    if ( v10 <= 0x102 )
    {
      sub_132C3F60(a1: v6, a2: v7, a3, (_DWORD)a4, a5, a6, a7: v56, a8: v57, a9: v58, a10: v59);
      v10 = *((_DWORD *)a4 + 39);
      if ( v10 <= 0x102 )
      {
        if ( v8 == 0 )
          return 0;
        v11 = (_DWORD *)a4 + 37;
      }
      if ( v10 == 0 )
        break;
    }
    *((_DWORD *)a4 + 34) = v6;
    if ( v10 < 3 )
      goto LABEL_26;
    v12 = *((unsigned int *)a4 + 37);
    if ( (_DWORD)v12 == 0 )
      goto LABEL_26;
    v13 = a4[10];
    v14 = (unsigned int)v12;
    v15 = *(_BYTE *)(v13 + v12 - 1);
    if ( v15 != *(_BYTE *)(v13 + v12) )
      goto LABEL_26;
    if ( v15 != *(_BYTE *)(v13 + v12 + 1) )
      goto LABEL_26;
    v16 = (_BYTE *)((unsigned int)v12 + v13 + 2);
    if ( v15 != *v16 )
      goto LABEL_26;
    a6 = v14 + v13 + 258;
    do
    {
      if ( v15 != *++v16 )
        break;
      if ( v15 != *++v16 )
        break;
      v17 = v16 + 1;
      LODWORD(v16) = (_DWORD)v16 + 1;
      if ( v15 != *v17 )
        break;
      LODWORD(v16) = (_DWORD)v17 + 1;
      if ( v15 != v17[1] )
        break;
      v18 = v17 + 2;
      LODWORD(v16) = (_DWORD)v18;
      if ( v15 != *v18 )
        break;
      LODWORD(v16) = (_DWORD)v18 + 1;
      if ( v15 != v18[1] )
        break;
      v19 = v18 + 2;
      LODWORD(v16) = (_DWORD)v19;
      if ( v15 != *v19 )
        break;
      v16 = v19 + 1;
      if ( v15 != v19[1] )
        break;
    }
    while ( (unsigned __int64)v16 < a6 );
    v20 = *((_DWORD *)a4 + 39);
    v21 = (_DWORD)v16 - a6 + 258;
    *((_DWORD *)a4 + 34) = v21;
    if ( v21 > v20 )
    {
      *((_DWORD *)a4 + 34) = v20;
      v21 = v20;
    }
    if ( v21 >= 3 )
    {
      v7 = (_DWORD)a4 + 148;
      v22 = *((_BYTE *)a4 + 136) - 3;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a4 + 1469))++ + a4[733]) = 1;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a4 + 1469))++ + a4[733]) = v6;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a4 + 1469))++ + a4[733]) = v22;
      v23 = v22;
      a3 = v6;
      ++*((_WORD *)a4 + 2 * *(unsigned __int8 *)(v23 + 554656) + 608);
      ++*((_WORD *)a4 + 2 * MEMORY[0x877a0]/* 0x877a0 */ + 1240);
      v24 = *((_DWORD *)a4 + 34);
      v25 = *((_DWORD *)a4 + 37);
      v26 = *((_DWORD *)a4 + 1469) == *((_DWORD *)a4 + 1470);
      *((_DWORD *)a4 + 34) = v6;
      LOBYTE(a3) = v26;
      *((_DWORD *)a4 + 39) -= v24;
      a5 = v24 + v25;
      *((_DWORD *)a4 + 37) = a5;
    }
    else
    {
LABEL_26:
      v27 = 2;
      v28 = *(unsigned __int8 *)(*((unsigned int *)a4 + 37) + a4[10]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v6;
        v29 = *((_DWORD *)a4 + 1469) + 1;
        *((_DWORD *)a4 + 1469) = v29;
        --v27;
      }
      while ( v27 != 0 );
      v7 = (_DWORD)a4 + 148;
      a3 = v6;
      *(_BYTE *)(v29 + a4[733]) = v28;
      ++*((_DWORD *)a4 + 1469);
      ++*((_WORD *)a4 + 2 * v28 + 94);
      v30 = *((_DWORD *)a4 + 37);
      LOBYTE(a3) = *((_DWORD *)a4 + 1469) == *((_DWORD *)a4 + 1470);
      --*((_DWORD *)a4 + 39);
      a5 = v30 + 1;
      *((_DWORD *)a4 + 37) = a5;
    }
    if ( a3 != 0 )
    {
      v31 = *((_DWORD *)a4 + 33);
      if ( v31 < 0 )
        LODWORD(v32) = v6;
      else
        v32 = a4[10] + (unsigned int)v31;
      sub_132C66D4(a1: v6, a2: v7, a3: v32, (_DWORD)a4, a5: a5 - v31, a6: 0, a7: v56, a8: v57, a9: v58, a10: v59);
      v34 = *a4;
      *((_DWORD *)a4 + 33) = *v33;
      sub_132C417C(a1: v36, a2: (_DWORD)v33, a3: v35, a4: v34, a5: v37, a6: v38);
      if ( *(_DWORD *)(*a4 + 24) == (_DWORD)v6 )
        return 0;
    }
  }
  *((_DWORD *)a4 + 1474) = v6;
  if ( v8 == 4 )
  {
    v40 = *((_DWORD *)a4 + 33);
    if ( v40 >= 0 )
      v6 = a4[10] + (unsigned int)v40;
    sub_132C66D4(
      a1: v6,
      a2: (_DWORD)v11,
      a3: v6,
      (_DWORD)a4,
      a5: *v11 - v40,
      a6: 1,
      a7: v56,
      a8: v57,
      a9: v58,
      a10: v59);
    v42 = *a4;
    *((_DWORD *)a4 + 33) = *v41;
    sub_132C417C(a1: v44, a2: (_DWORD)v41, a3: v43, a4: v42, a5: v45, a6: v46);
    return (unsigned int)(*(_DWORD *)(*a4 + 24) != 0) + 2;
  }
  else
  {
    if ( *((_DWORD *)a4 + 1469) != (_DWORD)v6 )
    {
      v47 = *((_DWORD *)a4 + 33);
      if ( v47 < 0 )
        LODWORD(v48) = v6;
      else
        v48 = a4[10] + (unsigned int)v47;
      sub_132C66D4(
        a1: v6,
        a2: (_DWORD)v11,
        a3: v48,
        (_DWORD)a4,
        a5: *v11 - v47,
        a6: 0,
        a7: v56,
        a8: v57,
        a9: v58,
        a10: v59);
      v50 = *a4;
      *((_DWORD *)a4 + 33) = *v49;
      sub_132C417C(a1: v52, a2: (_DWORD)v49, a3: v51, a4: v50, a5: v53, a6: v54);
      if ( *(_DWORD *)(*a4 + 24) == v55 )
        return 0;
    }
    return 1;
  }
}
