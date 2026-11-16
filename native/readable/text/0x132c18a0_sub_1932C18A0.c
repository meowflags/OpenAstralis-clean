// sub_132C18A0
// rva 0x132c18a0  size 1091  section .text  group text
// window base 0x1932c18a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C18A0(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 a5, int a6)
{
  _DWORD *v7; // rdi
  unsigned int v8; // r13d
  BOOL v9; // ebp
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  int v15; // r8d
  __int64 v16; // rdi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r14d
  int v21; // esi
  _QWORD *v22; // rax
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rcx
  int v39; // esi
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ebx
  int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  __int64 *v46; // rdi
  __int64 v47; // rcx
  int v48; // edx
  int v49; // esi
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // [rsp+0h] [rbp-48h]
  int v53; // [rsp+0h] [rbp-48h]
  int v54; // [rsp+0h] [rbp-48h]
  __int64 v55; // [rsp+8h] [rbp-40h]
  __int64 v56; // [rsp+10h] [rbp-38h]
  __int64 v57; // [rsp+18h] [rbp-30h]
  int v59; // [rsp+50h] [rbp+8h]

  v7 = a4;
  if ( (unsigned int)(a4[6] - 5) > a4[17] )
    JUMPOUT(0x32651B8D3LL);
  v8 = a4[6] - 5;
  v9 = false;
  v59 = *(_DWORD *)(*(_QWORD *)a4 + 8LL);
  do
  {
    v10 = 0xFFFF;
    v11 = (unsigned int)(v7[1476] + 42) >> 3;
    v12 = *(_DWORD *)(*(_QWORD *)v7 + 24LL);
    if ( v12 < v11 )
      break;
    v13 = v12 - v11;
    v14 = v7[37] - v7[33];
    v15 = *(_DWORD *)(*(_QWORD *)v7 + 8LL);
    if ( v15 + v14 < 0xFFFF )
      LODWORD(v10) = v15 + v14;
    if ( (unsigned int)v10 <= v13 )
      JUMPOUT(0x32651B928LL);
    v10 = v13;
    if ( v13 < v8 )
    {
      if ( v13 != 0 )
      {
        if ( a3 == 0 )
          break;
      }
      else if ( a3 != 4 )
      {
        break;
      }
      if ( v13 != v15 + v14 )
        break;
    }
    v9 = a3 == 4 && v13 == v14 + v15;
    sub_132C6A48(a1: (_DWORD)v7, a2: v13, a3: 0, a4: (_DWORD)v7, a5: 0, a6: v9, a7: v52);
    *(_BYTE *)((unsigned int)(*(_DWORD *)(v16 + 40) - 4) + *(_QWORD *)(v16 + 16)) = v17;
    *(_BYTE *)((unsigned int)(*(_DWORD *)(v16 + 40) - 3) + *(_QWORD *)(v16 + 16)) = BYTE1(v17);
    *(_BYTE *)((unsigned int)(*(_DWORD *)(v16 + 40) - 2) + *(_QWORD *)(v16 + 16)) = ~(_BYTE)v17;
    *(_BYTE *)((unsigned int)(*(_DWORD *)(v16 + 40) - 1) + *(_QWORD *)(v16 + 16)) = (unsigned __int16)~(_WORD)v17 >> 8;
    sub_132C417C(
      a1: v16,
      a2: v17,
      a3: (unsigned int)~v17 >> 8,
      a4: *(_QWORD *)v16,
      a5: v18,
      a6: v19,
      a7: v53,
      a8: v55,
      a9: v56,
      a10: v57);
    if ( v14 != 0 )
    {
      if ( v14 <= (unsigned int)v10 )
        JUMPOUT(0x32651B9DCLL);
      v20 = v10;
      sub_1932CA15B(
        a1: v7,
        a2: v10,
        a3: *((_QWORD *)v7 + 10) + (int)v7[33],
        a4: *(_QWORD *)(*(_QWORD *)v7 + 16LL),
        a5: (unsigned int)v10);
      *(_QWORD *)(*(_QWORD *)v7 + 16LL) += v20;
      *(_DWORD *)(*(_QWORD *)v7 + 24LL) -= v20;
      *(_DWORD *)(*(_QWORD *)v7 + 28LL) += v20;
      v7[33] += v20;
      v10 = v21 - v20;
    }
    if ( (_DWORD)v10 != 0 )
    {
      sub_132C4454(
        a1: (_DWORD)v7,
        a2: v10,
        a3: *(_QWORD *)(*(_QWORD *)v7 + 16LL),
        a4: *(_QWORD *)v7,
        a5: v10,
        a6,
        a7: v52,
        a8: v55,
        a9: v56);
      *(_QWORD *)(*(_QWORD *)v7 + 16LL) += (unsigned int)v10;
      *(_DWORD *)(*(_QWORD *)v7 + 24LL) -= v10;
      *(_DWORD *)(*(_QWORD *)v7 + 28LL) += v10;
    }
  }
  while ( !v9 );
  v22 = *(_QWORD **)v7;
  v23 = v59 - *(_DWORD *)(*(_QWORD *)v7 + 8LL);
  if ( v59 != *(_DWORD *)(*(_QWORD *)v7 + 8LL) )
  {
    v24 = (unsigned int)v7[17];
    if ( v23 < (unsigned int)v24 )
    {
      v28 = (unsigned int)v7[37];
      if ( v7[22] - (int)v28 <= v23 )
      {
        v29 = (unsigned int)(v28 - v24);
        v30 = *((_QWORD *)v7 + 10);
        v7[37] = v29;
        sub_1932CA15B(a1: v7, a2: v10, a3: v30 + v24, a4: v30, a5: v29);
        v31 = v7[1473];
        if ( v31 < 2 )
          v7[1473] = v31 + 1;
        v28 = (unsigned int)v7[37];
        if ( v7[1474] > (unsigned int)v28 )
          v7[1474] = v28;
      }
      sub_1932CA15B(a1: v7, a2: v10, a3: **(_QWORD **)v7 - v23, a4: *((_QWORD *)v7 + 10) + v28, a5: v23);
      v26 = v23 + v7[37];
      if ( v23 <= v7[17] - v7[1474] )
        JUMPOUT(0x32651BAFDLL);
      v27 = v7[17];
    }
    else
    {
      v25 = *((_QWORD *)v7 + 10);
      v7[1473] = 2;
      sub_1932CA15B(a1: v7, a2: v10, a3: *v22 - (unsigned int)v24, a4: v25, a5: (unsigned int)v24);
      v26 = v7[17];
      v27 = v26;
    }
    v7[37] = v26;
    v7[1474] = v27;
    v7[33] = v26;
  }
  v32 = v7[37];
  if ( v7[1478] < v32 )
    v7[1478] = v32;
  if ( v9 )
  {
    v7[1477] = 8;
    return 3;
  }
  if ( (a3 & 0xFFFFFFFB) != 0 && *(_DWORD *)(*(_QWORD *)v7 + 8LL) == 0 && v32 == v7[33] )
    return 1;
  v34 = v7[22] - v32;
  if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL) > (unsigned int)v34 )
  {
    v35 = (unsigned int)v7[17];
    v36 = v7[33];
    if ( v36 >= (int)v35 )
    {
      v37 = v32 - v35;
      v7[33] = v36 - v35;
      v38 = *((_QWORD *)v7 + 10);
      v7[37] = v37;
      sub_1932CA15B(a1: v7, a2: v34, a3: v38 + v35, a4: v38, a5: v37);
      v40 = v7[1473];
      if ( v40 < 2 )
        v7[1473] = v40 + 1;
      LODWORD(v34) = v7[17] + v39;
      v41 = v7[37];
      if ( v7[1474] > v41 )
        v7[1474] = v41;
    }
  }
  if ( (unsigned int)v34 > *(_DWORD *)(*(_QWORD *)v7 + 8LL) )
    JUMPOUT(0x32651BBD3LL);
  v42 = v34;
  if ( (_DWORD)v34 != 0 )
  {
    sub_132C4454(
      a1: (_DWORD)v7,
      a2: v34,
      a3: v7[20] + v7[37],
      a4: *(_QWORD *)v7,
      a5: v34,
      a6,
      a7: v52,
      a8: v55,
      a9: v56);
    v43 = v7[1474];
    v7[37] += v42;
    if ( v42 <= v7[17] - v43 )
      JUMPOUT(0x32651BBFFLL);
    v7[1474] = v7[17];
  }
  v44 = v7[37];
  if ( v7[1478] < v44 )
    v7[1478] = v44;
  if ( v7[6] - ((unsigned int)(v7[1476] + 42) >> 3) <= 0xFFFF )
    JUMPOUT(0x32651BC37LL);
  v45 = v44 - v7[33];
  if ( v7[17] < 0xFFFFu )
    JUMPOUT(0x32651BC45LL);
  if ( v45 >= 0xFFFF )
    goto LABEL_62;
  if ( v45 != 0 )
  {
    if ( a3 == 0 )
      return v9 ? 2 : 0;
  }
  else if ( a3 != 4 )
  {
    return v9 ? 2 : 0;
  }
  if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL) == 0 )
  {
LABEL_62:
    if ( v45 <= 0xFFFF )
      JUMPOUT(0x32651BC6ELL);
    v9 = false;
    sub_132C6A48(a1: (_DWORD)v7, a2: v34, a3: v7[20] + v7[33], a4: (_DWORD)v7, a5: 0xFFFF, a6: 0, a7: v52);
    v47 = *v46;
    *((_DWORD *)v46 + 33) += 0xFFFF;
    sub_132C417C(a1: (_DWORD)v46, a2: v49, a3: v48, a4: v47, a5: v50, a6: v51, a7: v54, a8: v55, a9: v56, a10: v57);
  }
  return v9 ? 2 : 0;
}
