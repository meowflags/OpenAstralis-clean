// sub_132C1CE4
// rva 0x132c1ce4  size 1103  section .text  group text
// window base 0x1932c1ce4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C1CE4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  _DWORD *v7; // r14
  int v8; // ebp
  _DWORD *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // edx
  __int16 v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  unsigned int v22; // ecx
  int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // r8
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // edx
  int v39; // edi
  int v40; // esi
  int v41; // r8d
  int v42; // r9d
  unsigned int v44; // r8d
  int v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  int v48; // edi
  int v49; // esi
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edx
  int v56; // edi
  int v57; // esi
  int v58; // r8d
  int v59; // r9d
  int v60; // edi
  __int64 v61; // [rsp+0h] [rbp-38h]
  int v62; // [rsp+0h] [rbp-38h]
  int v63; // [rsp+0h] [rbp-38h]
  int v64; // [rsp+0h] [rbp-38h]
  __int64 v65; // [rsp+8h] [rbp-30h]
  __int64 v66; // [rsp+8h] [rbp-30h]
  __int64 v67; // [rsp+8h] [rbp-30h]
  __int64 v68; // [rsp+8h] [rbp-30h]
  __int64 v69; // [rsp+10h] [rbp-28h]
  __int64 v70; // [rsp+10h] [rbp-28h]
  __int64 v71; // [rsp+10h] [rbp-28h]
  __int64 v72; // [rsp+10h] [rbp-28h]
  __int64 v73; // [rsp+18h] [rbp-20h]
  __int64 v74; // [rsp+18h] [rbp-20h]
  __int64 v75; // [rsp+18h] [rbp-20h]
  __int64 v76; // [rsp+18h] [rbp-20h]

  LODWORD(v6) = 0;
  v7 = (_DWORD *)a4 + 37;
  v8 = a3;
  v10 = (_DWORD *)a4 + 37;
  while ( 1 )
  {
    v11 = *((_DWORD *)a4 + 39);
    if ( v11 < 0x106 )
    {
      sub_132C3F60(a1: v6, a2: (_DWORD)v10, a3, (_DWORD)a4, a5, a6, a7: v61, a8: v65, a9: v69, a10: v73);
      v11 = *((_DWORD *)a4 + 39);
      if ( v11 < 0x106 && v8 == 0 )
        return 0;
      v10 = v7;
      if ( v11 == 0 )
        break;
    }
    if ( v11 >= 3 )
    {
      v12 = a4[13];
      v13 = a4[12];
      v14 = *((_DWORD *)a4 + 31)
          & ((*((_DWORD *)a4 + 28) << *((_DWORD *)a4 + 32))
           ^ (unsigned int)*(unsigned __int8 *)((unsigned int)(*v10 + 2) + a4[10]));
      a6 = (unsigned int)(*((_DWORD *)a4 + 19) & *v10);
      *((_DWORD *)a4 + 28) = v14;
      *(_WORD *)(v13 + 2 * a6) = *(_WORD *)(v12 + 2 * v14);
      v15 = *((unsigned int *)a4 + 28);
      v16 = *(unsigned __int16 *)(a4[12] + 2LL * (unsigned int)(*((_DWORD *)a4 + 19) & *v10));
      *(_WORD *)(a4[13] + 2 * v15) = *(_WORD *)v10;
      if ( v16 != 0 && *v10 - v16 <= (unsigned int)(*((_DWORD *)a4 + 17) - 262) )
        *((_DWORD *)a4 + 34) = sub_132C42A4(
                                 a1: v6,
                                 a2: (_DWORD)v10,
                                 a3: v16,
                                 (_DWORD)a4,
                                 a5: v15,
                                 a6,
                                 a7: v61,
                                 a8: v65,
                                 a9: v69,
                                 a10: v73);
    }
    if ( *((_DWORD *)a4 + 34) < 3u )
    {
      a3 = 2;
      v32 = *(unsigned __int8 *)((unsigned int)*v10 + a4[10]);
      do
      {
        *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v6;
        v33 = *((_DWORD *)a4 + 1469) + 1;
        *((_DWORD *)a4 + 1469) = v33;
        --a3;
      }
      while ( a3 != 0 );
      v23 = v6;
      *(_BYTE *)(v33 + a4[733]) = v32;
      ++*((_DWORD *)a4 + 1469);
      ++*((_WORD *)a4 + 2 * v32 + 94);
      v34 = *((_DWORD *)a4 + 37);
      LOBYTE(v23) = *((_DWORD *)a4 + 1469) == *((_DWORD *)a4 + 1470);
      --*((_DWORD *)a4 + 39);
      *((_DWORD *)a4 + 37) = ++v34;
      a5 = v34;
    }
    else
    {
      v17 = *(_WORD *)v10 - *((_WORD *)a4 + 76);
      v18 = *((_BYTE *)a4 + 136);
      *(_BYTE *)(*((unsigned int *)a4 + 1469) + a4[733]) = v17;
      v18 -= 3;
      *(_BYTE *)((unsigned int)++*((_DWORD *)a4 + 1469) + a4[733]) = HIBYTE(v17);
      *(_BYTE *)((unsigned int)++*((_DWORD *)a4 + 1469) + a4[733]) = v18;
      ++*((_DWORD *)a4 + 1469);
      v19 = v17 - 1;
      v20 = *(unsigned __int8 *)(v18 - 321232896LL + 321787552);
      ++*((_WORD *)a4 + 2 * v20 + 608);
      if ( v19 >= 0x100u )
        v21 = *(_BYTE *)(((unsigned __int64)v19 >> 7) - 321232896 + 321788064);
      else
        v21 = *(_BYTE *)(v19 - 321232896LL + 321787808);
      v23 = v6;
      ++*((_WORD *)a4 + 2 * v21 + 1240);
      v22 = *((_DWORD *)a4 + 34);
      LOBYTE(v23) = *((_DWORD *)a4 + 1469) == *((_DWORD *)a4 + 1470);
      v24 = *((_DWORD *)a4 + 39) - v22;
      *((_DWORD *)a4 + 39) = v24;
      if ( v22 > *((_DWORD *)a4 + 42) || v24 < 3 )
      {
        a3 = a4[10];
        a6 = v22 + *((_DWORD *)a4 + 37);
        v30 = *((_DWORD *)a4 + 32);
        *((_DWORD *)a4 + 37) = a6;
        *((_DWORD *)a4 + 34) = v6;
        v31 = *(unsigned __int8 *)(a6 + a3);
        *((_DWORD *)a4 + 28) = v31;
        *((_DWORD *)a4 + 28) = *((_DWORD *)a4 + 31) & (*(unsigned __int8 *)((unsigned int)(a6 + 1) + a3) ^ (v31 << v30));
        a5 = a6;
      }
      else
      {
        *((_DWORD *)a4 + 34) = v22 - 1;
        do
        {
          v25 = ++*((_DWORD *)a4 + 37);
          v26 = a4[13];
          v27 = a4[12];
          v28 = *((_DWORD *)a4 + 31)
              & ((*((_DWORD *)a4 + 28) << *((_DWORD *)a4 + 32))
               ^ (unsigned int)*(unsigned __int8 *)(v25 + 2 + a4[10]));
          a6 = *((_DWORD *)a4 + 19) & v25;
          *((_DWORD *)a4 + 28) = v28;
          *(_WORD *)(v27 + 2 * a6) = *(_WORD *)(v26 + 2 * v28);
          a3 = *((unsigned int *)a4 + 28);
          *(_WORD *)(a4[13] + 2 * a3) = *((_WORD *)a4 + 74);
        }
        while ( (*((_DWORD *)a4 + 34))-- != 1 );
        a5 = *((_DWORD *)a4 + 37) + 1;
        *((_DWORD *)a4 + 37) = a5;
      }
    }
    if ( v23 != 0 )
    {
      v35 = *((_DWORD *)a4 + 33);
      if ( v35 < 0 )
        LODWORD(v36) = v6;
      else
        v36 = a4[10] + (unsigned int)v35;
      sub_132C66D4(
        a1: v6,
        a2: (_DWORD)v10,
        a3: v36,
        (_DWORD)a4,
        a5: a5 - v35,
        a6: 0,
        a7: v61,
        a8: v65,
        a9: v69,
        a10: v73);
      v37 = *a4;
      *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
      sub_132C417C(a1: v39, a2: v40, a3: v38, a4: v37, a5: v41, a6: v42, a7: v62, a8: v66, a9: v70, a10: v74);
      if ( *(_DWORD *)(*a4 + 24) == (_DWORD)v6 )
        return 0;
    }
  }
  v44 = *((_DWORD *)a4 + 37);
  if ( v44 >= 2 )
    JUMPOUT(0x32651C08FLL);
  *((_DWORD *)a4 + 1474) = v44;
  if ( v8 == 4 )
  {
    v45 = *((_DWORD *)a4 + 33);
    if ( v45 >= 0 )
      v6 = a4[10] + (unsigned int)v45;
    sub_132C66D4(a1: v6, a2: (_DWORD)v7, a3: v6, (_DWORD)a4, a5: v44 - v45, a6: 1, a7: v61, a8: v65, a9: v69, a10: v73);
    v46 = *a4;
    *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
    sub_132C417C(a1: v48, a2: v49, a3: v47, a4: v46, a5: v50, a6: v51, a7: v63, a8: v67, a9: v71, a10: v75);
    return (unsigned int)(*(_DWORD *)(*a4 + 24) != 0) + 2;
  }
  else
  {
    if ( *((_DWORD *)a4 + 1469) != (_DWORD)v6 )
    {
      v52 = *((_DWORD *)a4 + 33);
      if ( v52 < 0 )
        LODWORD(v53) = v6;
      else
        v53 = a4[10] + (unsigned int)v52;
      sub_132C66D4(
        a1: v6,
        a2: (_DWORD)v7,
        a3: v53,
        (_DWORD)a4,
        a5: v44 - v52,
        a6: 0,
        a7: v61,
        a8: v65,
        a9: v69,
        a10: v73);
      v54 = *a4;
      *((_DWORD *)a4 + 33) = *((_DWORD *)a4 + 37);
      sub_132C417C(a1: v56, a2: v57, a3: v55, a4: v54, a5: v58, a6: v59, a7: v64, a8: v68, a9: v72, a10: v76);
      if ( *(_DWORD *)(*a4 + 24) == v60 )
        return 0;
    }
    return 1;
  }
}
