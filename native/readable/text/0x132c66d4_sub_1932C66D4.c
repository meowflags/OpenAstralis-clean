// sub_132C66D4
// rva 0x132c66d4  size 775  section .text  group text
// window base 0x1932c66d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C66D4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  _WORD *v6; // rdi
  int v7; // esi
  int v11; // r10d
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _WORD *v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rax
  int v18; // eax
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  int v23; // edi
  int v24; // esi
  int v25; // r9d
  int v26; // r14d
  int v27; // ecx
  int v28; // edi
  int v29; // esi
  int v30; // r9d
  int v31; // ecx
  int v32; // edi
  int v33; // esi
  int v34; // r8d
  int v35; // r9d
  __int64 i; // rcx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  int v43; // edx
  _WORD *v44; // r9
  bool v45; // zf
  char v46; // cl
  unsigned __int16 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  char v51; // al
  __int16 v52; // r8
  int v53; // edx
  int v54; // r8d
  unsigned __int16 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  char v59; // al
  __int16 v60; // r8
  __int64 result; // rax
  int v62; // esi
  __int64 v63; // [rsp+0h] [rbp-38h]
  __int64 v64; // [rsp+0h] [rbp-38h]
  __int64 v65; // [rsp+8h] [rbp-30h]
  __int64 v66; // [rsp+8h] [rbp-30h]
  __int64 v67; // [rsp+10h] [rbp-28h]
  __int64 v68; // [rsp+10h] [rbp-28h]

  v6 = (_WORD *)a4 + 94;
  v7 = a6;
  v11 = 0;
  if ( *((int *)a4 + 43) <= 0 )
  {
    v38 = a5 + 5;
    v26 = (_DWORD)a4 + 2480;
LABEL_23:
    v39 = v38;
    goto LABEL_24;
  }
  v12 = *a4;
  if ( *(_DWORD *)(*a4 + 72) == 2 )
  {
    v13 = 0xF3FFC07F;
    v14 = 0;
    v15 = v6;
    do
    {
      if ( (v13 & 1) != 0 && *v15 != 0 )
      {
LABEL_13:
        v18 = 0;
        goto LABEL_15;
      }
      ++v14;
      v13 >>= 1;
      v15 += 2;
    }
    while ( v14 <= 31 );
    if ( *((_WORD *)a4 + 112) == 0 && *((_WORD *)a4 + 114) == 0 && *((_WORD *)a4 + 120) == 0 )
    {
      v16 = 32;
      v17 = (_WORD *)a4 + 158;
      while ( *v17 == 0 )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= 256 )
          goto LABEL_13;
      }
    }
    v18 = 1;
LABEL_15:
    *(_DWORD *)(v12 + 72) = v18;
  }
  sub_132C6C48(a1: (_DWORD)v6, a2: a6, a3: (_DWORD)a4 + 2880, (_DWORD)a4, a5: v12, a6);
  sub_132C6C48(a1: v19, a2: v20, a3: (_DWORD)a4 + 2904, (_DWORD)a4, a5: v21, a6: v22);
  sub_132C7624(a1: v23, a2: v24, a3: v23, (_DWORD)a4, a5: *((_DWORD *)a4 + 722), a6: v25, a7: v63, a8: v65, a9: v67);
  v26 = (_DWORD)a4 + 2480;
  sub_132C7624(
    a1: v28,
    a2: v29,
    a3: (_DWORD)a4 + 2480,
    a4: v27,
    a5: *((_DWORD *)a4 + 728),
    a6: v30,
    a7: v64,
    a8: v66,
    a9: v68);
  sub_132C6C48(a1: v32, a2: v33, a3: (_DWORD)a4 + 2928, a4: v31, a5: v34, a6: v35);
  v11 = 18;
  for ( i = 18; i >= 3; --i )
  {
    if ( *((_WORD *)a4 + 2 * *(unsigned __int8 *)(i + 557128) + 1363) != 0 )
      break;
    --v11;
  }
  v37 = *((_DWORD *)a4 + 1472) + 10;
  *((_DWORD *)a4 + 1471) += v11 + 2 * v11 + 17;
  v38 = v37 >> 3;
  v39 = (unsigned int)(*((_DWORD *)a4 + 1471) + 10) >> 3;
  if ( v38 <= v39 || *((_DWORD *)a4 + 44) == 4 )
    goto LABEL_23;
LABEL_24:
  if ( a5 + 4 <= v39 && a3 != 0 )
  {
    sub_132C6A48(a1: (_DWORD)v6, a2: v7, a3, (_DWORD)a4, a5, a6: v7);
  }
  else
  {
    v43 = *((_DWORD *)a4 + 1476);
    v44 = (_WORD *)a4 + 2950;
    v45 = v38 == v39;
    v46 = v43;
    if ( v45 )
    {
      v47 = v7 + 2;
      if ( v43 <= 13 )
      {
        v52 = *v44 | (v47 << v43);
        *((_DWORD *)a4 + 1476) = v43 + 3;
      }
      else
      {
        v48 = *((unsigned int *)a4 + 10);
        *v44 |= v47 << v46;
        *(_BYTE *)(v48 + a4[2]) = *(_BYTE *)v44;
        v49 = a4[2];
        v50 = (unsigned int)(*((_DWORD *)a4 + 10) + 1);
        v51 = *((_BYTE *)a4 + 5901);
        *((_DWORD *)a4 + 10) = v50;
        *(_BYTE *)(v50 + v49) = v51;
        LOBYTE(v49) = 16 - *((_BYTE *)a4 + 5904);
        ++*((_DWORD *)a4 + 10);
        v52 = v47 >> v49;
        *((_DWORD *)a4 + 1476) -= 13;
      }
      *v44 = v52;
      v53 = 555760;
      v54 = 556912;
    }
    else
    {
      v55 = v7 + 4;
      if ( v43 <= 13 )
      {
        v60 = *v44 | (v55 << v43);
        *((_DWORD *)a4 + 1476) = v43 + 3;
      }
      else
      {
        v56 = *((unsigned int *)a4 + 10);
        *v44 |= v55 << v46;
        *(_BYTE *)(v56 + a4[2]) = *(_BYTE *)v44;
        v57 = a4[2];
        v58 = (unsigned int)(*((_DWORD *)a4 + 10) + 1);
        v59 = *((_BYTE *)a4 + 5901);
        *((_DWORD *)a4 + 10) = v58;
        *(_BYTE *)(v58 + v57) = v59;
        LOBYTE(v57) = 16 - *((_BYTE *)a4 + 5904);
        ++*((_DWORD *)a4 + 10);
        v60 = v55 >> v57;
        *((_DWORD *)a4 + 1476) -= 13;
      }
      *v44 = v60;
      sub_132C7738(
        a1: (_DWORD)v6,
        a2: v7,
        a3: *((_DWORD *)a4 + 722) + 1,
        (_DWORD)a4,
        a5: *((_DWORD *)a4 + 728) + 1,
        a6: v11 + 1,
        a7: v63,
        a8: v65,
        a9: v67);
      v54 = v26;
      v53 = (int)v6;
    }
    sub_132C6EF8(a1: (_DWORD)v6, a2: v7, a3: v53, (_DWORD)a4, a5: v54, a6: (_DWORD)v44, a7: v63, a8: v65, a9: v67);
  }
  result = sub_1932C7500(a1: v41, a2: v42, a3: v40, a4);
  if ( v62 != 0 )
    return sub_1932C6BD0();
  return result;
}
