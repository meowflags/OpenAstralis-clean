// sub_132C2134
// rva 0x132c2134  size 1372  section .text  group text
// window base 0x1932c2134: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C2134(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  unsigned int *v7; // r15
  int v8; // r12d
  unsigned int *v10; // rsi
  unsigned int *i; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  int v23; // ecx
  int v24; // r11d
  int v25; // ebp
  unsigned int v26; // r10d
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  unsigned int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // edx
  int v45; // edi
  int v46; // esi
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned int v53; // eax
  unsigned int v54; // r8d
  int v55; // eax
  __int64 v56; // rcx
  int v57; // edx
  int v58; // edi
  int v59; // esi
  int v60; // r8d
  int v61; // r9d
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // edx
  int v66; // edi
  int v67; // esi
  int v68; // r8d
  int v69; // r9d
  int v70; // edi
  __int64 v71; // [rsp+0h] [rbp-48h]
  int v72; // [rsp+0h] [rbp-48h]
  int v73; // [rsp+0h] [rbp-48h]
  int v74; // [rsp+0h] [rbp-48h]
  int v75; // [rsp+0h] [rbp-48h]
  __int64 v76; // [rsp+8h] [rbp-40h]
  __int64 v77; // [rsp+8h] [rbp-40h]
  __int64 v78; // [rsp+8h] [rbp-40h]
  __int64 v79; // [rsp+8h] [rbp-40h]
  __int64 v80; // [rsp+8h] [rbp-40h]
  __int64 v81; // [rsp+10h] [rbp-38h]
  __int64 v82; // [rsp+10h] [rbp-38h]
  __int64 v83; // [rsp+10h] [rbp-38h]
  __int64 v84; // [rsp+10h] [rbp-38h]
  __int64 v85; // [rsp+10h] [rbp-38h]
  __int64 v86; // [rsp+18h] [rbp-30h]
  __int64 v87; // [rsp+18h] [rbp-30h]
  __int64 v88; // [rsp+18h] [rbp-30h]
  __int64 v89; // [rsp+18h] [rbp-30h]
  __int64 v90; // [rsp+18h] [rbp-30h]

  LODWORD(v6) = 0;
  v7 = (unsigned int *)a4 + 37;
  v8 = a3;
  v10 = (unsigned int *)a4 + 37;
  for ( i = (unsigned int *)a4 + 37; ; i = v10 )
  {
    v12 = *((_DWORD *)a4 + 39);
    if ( v12 < 0x106 )
    {
      sub_132C3F60(a1: v6, a2: (_DWORD)v10, a3, (_DWORD)a4, a5, a6, a7: v71, a8: v76, a9: v81, a10: v86);
      v12 = *((_DWORD *)a4 + 39);
      if ( v12 < 0x106 )
      {
        if ( v8 == 0 )
          return 0;
        i = (unsigned int *)a4 + 37;
      }
      v10 = v7;
      if ( v12 == 0 )
        break;
    }
    LODWORD(a6) = v6;
    if ( v12 >= 3 )
    {
      v13 = a4[13];
      v14 = a4[12];
      v15 = *((_DWORD *)a4 + 31)
          & ((*((_DWORD *)a4 + 28) << *((_DWORD *)a4 + 32))
           ^ (unsigned int)*(unsigned __int8 *)(*v10 + 2 + a4[10]));
      a6 = *((_DWORD *)a4 + 19) & *v10;
      *((_DWORD *)a4 + 28) = v15;
      *(_WORD *)(v14 + 2 * a6) = *(_WORD *)(v13 + 2 * v15);
      a3 = *((unsigned int *)a4 + 28);
      LODWORD(a6) = *(unsigned __int16 *)(a4[12] + 2LL * (*v10 & *((_DWORD *)a4 + 19)));
      *(_WORD *)(a4[13] + 2 * a3) = *(_WORD *)v10;
    }
    v16 = *((_DWORD *)a4 + 34);
    LODWORD(a5) = 2;
    v17 = *((_DWORD *)a4 + 38);
    *((_DWORD *)a4 + 40) = v16;
    *((_DWORD *)a4 + 35) = v17;
    *((_DWORD *)a4 + 34) = 2;
    if ( (_DWORD)a6 != 0 && v16 < *((_DWORD *)a4 + 42) && *v10 - (unsigned int)a6 <= *((_DWORD *)a4 + 17) - 262 )
    {
      v18 = sub_132C42A4(a1: v6, a2: (_DWORD)v10, a3: a6, (_DWORD)a4, a5: 2, a6, a7: v71, a8: v76, a9: v81, a10: v86);
      *((_DWORD *)a4 + 34) = v18;
      LODWORD(a5) = v18;
      if ( v18 <= 5 )
      {
        if ( *((_DWORD *)a4 + 44) == 1
          || v18 == 3 && (LODWORD(a5) = 3, (unsigned int)(*((_DWORD *)a4 + 37) - *((_DWORD *)a4 + 38)) > 0x1000) )
        {
          *((_DWORD *)a4 + 34) = 2;
          LODWORD(a5) = 2;
        }
      }
    }
    v19 = *((_DWORD *)a4 + 40);
    if ( v19 < 3 || (unsigned int)a5 > v19 )
    {
      v10 = (unsigned int *)a4 + 37;
      v39 = *((_DWORD *)a4 + 37);
      if ( *((_DWORD *)a4 + 36) == (_DWORD)v6 )
      {
        *((_DWORD *)a4 + 36) = 1;
        --*((_DWORD *)a4 + 39);
        *v10 = v39 + 1;
      }
      else
      {
        a3 = 2;
        a5 = *(unsigned __int8 *)((unsigned int)(v39 - 1) + a4[10]);
        do
        {
          *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v6;
          v40 = *((_DWORD *)a4 + 1469) + 1;
          *((_DWORD *)a4 + 1469) = v40;
          --a3;
        }
        while ( a3 != 0 );
        *(_BYTE *)(v40 + a4[733]) = a5;
        ++*((_DWORD *)a4 + 1469);
        ++*((_WORD *)a4 + 2 * a5 + 94);
        if ( *((_DWORD *)a4 + 1469) == *((_DWORD *)a4 + 1470) )
        {
          v41 = *((_DWORD *)a4 + 33);
          if ( v41 < 0 )
            LODWORD(v42) = v6;
          else
            v42 = a4[10] + (unsigned int)v41;
          sub_132C66D4(
            a1: v6,
            a2: (_DWORD)v10,
            a3: v42,
            (_DWORD)a4,
            a5: *((_DWORD *)a4 + 37) - v41,
            a6: 0,
            a7: v71,
            a8: v76,
            a9: v81,
            a10: v86);
          v43 = *a4;
          *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
          sub_132C417C(a1: v45, a2: v46, a3: v44, a4: v43, a5: v47, a6: v48, a7: v73, a8: v78, a9: v83, a10: v88);
        }
        v49 = *a4;
        ++*((_DWORD *)a4 + 37);
        --*((_DWORD *)a4 + 39);
        if ( *(_DWORD *)(v49 + 24) == (_DWORD)v6 )
          return 0;
      }
    }
    else
    {
      v10 = (unsigned int *)a4 + 37;
      LODWORD(a6) = *((unsigned __int16 *)a4 + 74);
      LOWORD(a6) = a6 - *((_WORD *)a4 + 70) - 1;
      v20 = *((_DWORD *)a4 + 37) + *((_DWORD *)a4 + 39) - 3;
      *(_BYTE *)((unsigned int)(*((_DWORD *)a4 + 1469))++ + a4[733]) = a6;
      a3 = *((unsigned int *)a4 + 1469);
      *(_BYTE *)(a3 + a4[733]) = BYTE1(a6);
      *(_BYTE *)((unsigned int)++*((_DWORD *)a4 + 1469) + a4[733]) = v19 - 3;
      ++*((_DWORD *)a4 + 1469);
      LOWORD(a6) = a6 - 1;
      v21 = *(unsigned __int8 *)((unsigned __int8)(v19 - 3) - 321232896LL + 321787552);
      ++*((_WORD *)a4 + 2 * v21 + 608);
      if ( (unsigned __int16)a6 >= 0x100u )
        v22 = *(_BYTE *)(((unsigned __int64)(unsigned __int16)a6 >> 7) - 321232896 + 321788064);
      else
        v22 = *(_BYTE *)((unsigned __int16)a6 - 321232896LL + 321787808);
      ++*((_WORD *)a4 + 2 * v22 + 1240);
      v23 = *((_DWORD *)a4 + 40);
      *((_DWORD *)a4 + 39) += 1 - v23;
      v24 = *((_DWORD *)a4 + 1469);
      v25 = *((_DWORD *)a4 + 1470);
      *((_DWORD *)a4 + 40) = v23 - 2;
      do
      {
        v26 = *v10 + 1;
        *v10 = v26;
        if ( v26 <= v20 )
        {
          v27 = *((_DWORD *)a4 + 19);
          v28 = a4[12];
          a6 = *((_DWORD *)a4 + 31)
             & ((unsigned int)*(unsigned __int8 *)(v26 + 2 + a4[10])
              ^ (*((_DWORD *)a4 + 28) << *((_DWORD *)a4 + 32)));
          v29 = a4[13];
          *((_DWORD *)a4 + 28) = a6;
          *(_WORD *)(v28 + 2LL * (v26 & v27)) = *(_WORD *)(v29 + 2 * a6);
          a3 = *((unsigned int *)a4 + 28);
          *(_WORD *)(a4[13] + 2 * a3) = *(_WORD *)v10;
          v26 = *v10;
        }
      }
      while ( (*((_DWORD *)a4 + 40))-- != 1 );
      *((_DWORD *)a4 + 36) = v6;
      LODWORD(a5) = v26 + 1;
      *((_DWORD *)a4 + 37) = v26 + 1;
      *((_DWORD *)a4 + 34) = 2;
      if ( v24 == v25 )
      {
        v31 = *((_DWORD *)a4 + 33);
        if ( v31 < 0 )
          LODWORD(v32) = v6;
        else
          v32 = a4[10] + (unsigned int)v31;
        sub_132C66D4(
          a1: v6,
          a2: (_DWORD)v10,
          a3: v32,
          (_DWORD)a4,
          a5: a5 - v31,
          a6: 0,
          a7: v71,
          a8: v76,
          a9: v81,
          a10: v86);
        v33 = *a4;
        *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
        sub_132C417C(a1: v35, a2: v36, a3: v34, a4: v33, a5: v37, a6: v38, a7: v72, a8: v77, a9: v82, a10: v87);
        if ( *(_DWORD *)(*a4 + 24) == (_DWORD)v6 )
          return 0;
      }
    }
  }
  if ( *((_DWORD *)a4 + 36) != (_DWORD)v6 )
  {
    v51 = 2;
    v52 = *(unsigned __int8 *)(*i - 1 + a4[10]);
    do
    {
      *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v6;
      v53 = *((_DWORD *)a4 + 1469) + 1;
      *((_DWORD *)a4 + 1469) = v53;
      --v51;
    }
    while ( v51 != 0 );
    i = (unsigned int *)a4 + 37;
    *(_BYTE *)(v53 + a4[733]) = v52;
    ++*((_DWORD *)a4 + 1469);
    ++*((_WORD *)a4 + 2 * v52 + 94);
    *((_DWORD *)a4 + 36) = v6;
  }
  v54 = *i;
  if ( *i >= 2 )
    JUMPOUT(0x32651C5EFLL);
  *((_DWORD *)a4 + 1474) = v54;
  if ( v8 == 4 )
  {
    v55 = *((_DWORD *)a4 + 33);
    if ( v55 >= 0 )
      v6 = a4[10] + (unsigned int)v55;
    sub_132C66D4(a1: v6, a2: (_DWORD)v7, a3: v6, (_DWORD)a4, a5: v54 - v55, a6: 1, a7: v71, a8: v76, a9: v81, a10: v86);
    v56 = *a4;
    *((_DWORD *)a4 + 33) = *i;
    sub_132C417C(a1: v58, a2: v59, a3: v57, a4: v56, a5: v60, a6: v61, a7: v74, a8: v79, a9: v84, a10: v89);
    return (unsigned int)(*(_DWORD *)(*a4 + 24) != 0) + 2;
  }
  else
  {
    if ( *((_DWORD *)a4 + 1469) != (_DWORD)v6 )
    {
      v62 = *((_DWORD *)a4 + 33);
      if ( v62 < 0 )
        LODWORD(v63) = v6;
      else
        v63 = a4[10] + (unsigned int)v62;
      sub_132C66D4(
        a1: v6,
        a2: (_DWORD)v7,
        a3: v63,
        (_DWORD)a4,
        a5: v54 - v62,
        a6: 0,
        a7: v71,
        a8: v76,
        a9: v81,
        a10: v86);
      v64 = *a4;
      *((_DWORD *)a4 + 33) = *i;
      sub_132C417C(a1: v66, a2: v67, a3: v65, a4: v64, a5: v68, a6: v69, a7: v75, a8: v80, a9: v85, a10: v90);
      if ( *(_DWORD *)(*a4 + 24) == v70 )
        return 0;
    }
    return 1;
  }
}
