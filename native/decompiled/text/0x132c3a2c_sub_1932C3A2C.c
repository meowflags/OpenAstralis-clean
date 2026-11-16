// sub_1932C3A2C
// rva 0x132c3a2c  size 460  section .text  group text
// window base 0x1932c3a2c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C3A2C(_DWORD a1, _DWORD a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edi
  int v28; // esi
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  int v39; // edi
  __int64 v40; // [rsp+0h] [rbp-28h]
  __int64 v41; // [rsp+8h] [rbp-20h]
  __int64 v42; // [rsp+10h] [rbp-18h]
  __int64 v43; // [rsp+18h] [rbp-10h]

  LODWORD(v6) = 0;
  v7 = a3;
  while ( 1 )
  {
    if ( *((_DWORD *)a4 + 39) == (_DWORD)v6 )
    {
      sub_1932C3F60(a1: v6, a2: v7, a3, (_DWORD)a4, a5, a6, a7: v40, a8: v41, a9: v42, a10: v43);
      if ( *((_DWORD *)a4 + 39) == (_DWORD)v6 )
        break;
    }
    v9 = *((unsigned int *)a4 + 37);
    a3 = 2;
    v10 = a4[10];
    *((_DWORD *)a4 + 34) = v6;
    v11 = *(unsigned __int8 *)(v9 + v10);
    do
    {
      *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v6;
      v12 = *((_DWORD *)a4 + 1469) + 1;
      *((_DWORD *)a4 + 1469) = v12;
      --a3;
    }
    while ( a3 != 0 );
    *(_BYTE *)(v12 + a4[733]) = v11;
    ++*((_DWORD *)a4 + 1469);
    ++*((_WORD *)a4 + 2 * v11 + 94);
    v13 = *((_DWORD *)a4 + 37);
    --*((_DWORD *)a4 + 39);
    a5 = v13 + 1;
    v14 = *((_DWORD *)a4 + 1470);
    *((_DWORD *)a4 + 37) = a5;
    if ( *((_DWORD *)a4 + 1469) == v14 )
    {
      v15 = *((_DWORD *)a4 + 33);
      if ( v15 < 0 )
        LODWORD(v16) = v6;
      else
        v16 = a4[10] + (unsigned int)v15;
      sub_1932C66D4(a1: v6, a2: v7, a3: v16, (_DWORD)a4, a5: a5 - v15, a6: 0, a7: v40, a8: v41, a9: v42, a10: v43);
      v17 = *a4;
      *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
      sub_1932C417C(a1: v19, a2: v20, a3: v18, a4: v17, a5: v21, a6: v22);
      if ( *(_DWORD *)(*a4 + 24) == (_DWORD)v6 )
        return 0;
    }
  }
  if ( v7 == 0 )
    return 0;
  *((_DWORD *)a4 + 1474) = v6;
  if ( v7 != 4 )
  {
    if ( *((_DWORD *)a4 + 1469) == (_DWORD)v6 )
      return 1;
    v31 = *((_DWORD *)a4 + 33);
    if ( v31 < 0 )
      LODWORD(v32) = v6;
    else
      v32 = a4[10] + (unsigned int)v31;
    sub_1932C66D4(
      a1: v6,
      a2: v7,
      a3: v32,
      (_DWORD)a4,
      a5: *((_DWORD *)a4 + 37) - v31,
      a6: 0,
      a7: v40,
      a8: v41,
      a9: v42,
      a10: v43);
    v33 = *a4;
    *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
    sub_1932C417C(a1: v35, a2: v36, a3: v34, a4: v33, a5: v37, a6: v38);
    return *(_DWORD *)(*a4 + 24) != v39;
  }
  v24 = *((_DWORD *)a4 + 33);
  if ( v24 >= 0 )
    v6 = a4[10] + (unsigned int)v24;
  sub_1932C66D4(
    a1: v6,
    a2: 4,
    a3: v6,
    (_DWORD)a4,
    a5: *((_DWORD *)a4 + 37) - v24,
    a6: 1,
    a7: v40,
    a8: v41,
    a9: v42,
    a10: v43);
  v25 = *a4;
  *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
  sub_1932C417C(a1: v27, a2: v28, a3: v26, a4: v25, a5: v29, a6: v30);
  return (unsigned int)(*(_DWORD *)(*a4 + 24) != 0) + 2;
}
