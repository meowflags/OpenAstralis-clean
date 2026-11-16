// sub_132C8310
// rva 0x132c8310  size 1086  section .text  group text
// window base 0x1932c8310: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C8310(__int64 a1, __int64 a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // rbp
  unsigned __int8 *v6; // r8
  __int64 v7; // r15
  unsigned __int8 *v8; // rdi
  int v9; // ecx
  unsigned __int8 *v10; // r15
  __int64 v11; // r11
  __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  unsigned __int8 *v15; // r12
  unsigned int v16; // r10d
  int v17; // r9d
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int64 i; // rcx
  char *v21; // r9
  int v22; // ecx
  char v23; // dl
  unsigned int v24; // r11d
  unsigned int v25; // edx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  unsigned __int64 j; // rcx
  char *v31; // r9
  int v32; // ecx
  char v33; // dl
  unsigned int v34; // edx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // esi
  int v38; // eax
  unsigned int v39; // ecx
  unsigned __int8 *v40; // r9
  unsigned __int8 v41; // al
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r9
  unsigned int v45; // ecx
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  __int64 v48; // rdx
  unsigned __int8 v49; // al
  bool v50; // cc
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // rdx
  unsigned __int8 v53; // al
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int8 *v56; // rdi
  int v57; // r10d
  __int64 result; // rax
  __int64 v59; // [rsp+0h] [rbp-68h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v61; // [rsp+10h] [rbp-58h]
  int v62; // [rsp+18h] [rbp-50h]
  int v64; // [rsp+70h] [rbp+8h]
  int v66; // [rsp+78h] [rbp+10h]
  unsigned int v68; // [rsp+80h] [rbp+18h]
  int v70; // [rsp+88h] [rbp+20h]

  v4 = a4[5];
  v6 = a4[2];
  v7 = (unsigned int)(*((_DWORD *)a4 + 2) - 5);
  v8 = *a4;
  v9 = *((_DWORD *)a4 + 6);
  v10 = &v8[v7];
  v11 = *((_QWORD *)v4 + 12);
  v12 = *((_QWORD *)v4 + 13);
  v13 = *((_DWORD *)v4 + 15);
  v14 = *((_DWORD *)v4 + 18);
  v15 = &v6[v9 - 257];
  v16 = *((_DWORD *)v4 + 19);
  v17 = (1 << *((_DWORD *)v4 + 28)) - 1;
  v66 = *((_DWORD *)v4 + 13);
  v68 = *((_DWORD *)v4 + 14);
  v61 = *((unsigned __int8 **)v4 + 8);
  v62 = (_DWORD)v6 - (a3 - v9);
  v64 = (1 << *((_DWORD *)v4 + 29)) - 1;
  v59 = v11;
  v60 = v12;
  v70 = v17;
  while ( 2 )
  {
    if ( v16 < 0xF )
    {
      v18 = (*v8 << v16) + v14;
      v19 = v8[1] << (v16 + 8);
      v8 += 2;
      v14 = v19 + v18;
      v16 += 16;
    }
    for ( i = v14 & v17; ; i = *((unsigned __int16 *)v21 + 1) + (unsigned __int64)(v14 & ((1 << v23) - 1)) )
    {
      v21 = (char *)(v11 + 4 * i);
      v22 = (unsigned __int8)v21[1];
      v23 = *v21;
      v16 -= v22;
      v14 >>= v22;
      if ( *v21 == 0 )
      {
        *v6++ = v21[2];
        goto LABEL_56;
      }
      if ( (v23 & 0x10) != 0 )
        break;
      if ( (v23 & 0x40) != 0 )
      {
        if ( (v23 & 0x20) == 0 )
        {
          v54 = 549264;
          goto LABEL_64;
        }
        *((_DWORD *)v4 + 2) = 16191;
        goto LABEL_65;
      }
    }
    v24 = *((unsigned __int16 *)v21 + 1);
    v25 = v23 & 0xF;
    if ( v25 != 0 )
    {
      if ( v16 < v25 )
      {
        v26 = *v8++ << v16;
        v14 += v26;
        v16 += 8;
      }
      v27 = v14 & ((1 << v25) - 1);
      v14 >>= v25;
      v24 += v27;
      v16 -= v25;
    }
    if ( v16 < 0xF )
    {
      v28 = (*v8 << v16) + v14;
      v29 = v8[1] << (v16 + 8);
      v8 += 2;
      v14 = v29 + v28;
      v16 += 16;
    }
    for ( j = v14 & v64; ; j = *((unsigned __int16 *)v31 + 1) + (unsigned __int64)(v14 & ((1 << v33) - 1)) )
    {
      v31 = (char *)(v12 + 4 * j);
      v32 = (unsigned __int8)v31[1];
      v33 = *v31;
      v16 -= v32;
      v14 >>= v32;
      if ( (*v31 & 0x10) != 0 )
        break;
      if ( (v33 & 0x40) != 0 )
      {
        v54 = 549296;
        goto LABEL_64;
      }
    }
    v34 = v33 & 0xF;
    if ( v16 < v34 )
    {
      v35 = *v8 << v16;
      v16 += 8;
      v14 += v35;
      ++v8;
      if ( v16 < v34 )
      {
        v14 += *v8++ << v16;
        v16 += 8;
      }
    }
    v16 -= v34;
    v36 = v14 & ((1 << v34) - 1);
    v14 >>= v34;
    v37 = v36 + *((unsigned __int16 *)v31 + 1);
    v38 = (_DWORD)v6 - v62;
    if ( v37 <= (int)v6 - v62 )
    {
      v52 = &v6[-v37];
      do
      {
        v24 -= 3;
        *v6 = *v52;
        v53 = v52[1];
        v52 += 3;
        v6[1] = v53;
        v6[2] = *(v52 - 1);
        v6 += 3;
      }
      while ( v24 > 2 );
      if ( v24 == 0 )
        goto LABEL_55;
      v12 = v60;
      *v6++ = *v52;
      v50 = v24 <= 1;
      v11 = v59;
      if ( v50 )
        goto LABEL_56;
      v51 = v52[1];
LABEL_49:
      *v6++ = v51;
      goto LABEL_56;
    }
    v39 = v37 - v38;
    if ( v37 - v38 <= v68 || *((_DWORD *)v4 + 1784) == 0 )
    {
      if ( v13 != 0 )
      {
        v42 = v13 - v39;
        if ( v13 >= v39 )
        {
          v40 = &v61[v42];
          if ( v39 >= v24 )
            goto LABEL_43;
          v24 -= v39;
          do
          {
            v47 = *v40++;
            *v6++ = v47;
            --v39;
          }
          while ( v39 != 0 );
        }
        else
        {
          v43 = v39 - v13;
          v40 = &v61[v42 + v66];
          if ( v43 >= v24 )
            goto LABEL_43;
          v24 -= v43;
          v44 = v40 - v6;
          do
          {
            *v6 = v6[v44];
            ++v6;
            --v43;
          }
          while ( v43 != 0 );
          v40 = v61;
          if ( v13 >= v24 )
            goto LABEL_43;
          v45 = v13;
          v24 -= v13;
          do
          {
            v46 = *v40++;
            *v6++ = v46;
            --v45;
          }
          while ( v45 != 0 );
        }
LABEL_42:
        v40 = &v6[-v37];
        goto LABEL_43;
      }
      v40 = &v61[v66 - v39];
      if ( v39 < v24 )
      {
        v24 -= v39;
        do
        {
          v41 = *v40++;
          *v6++ = v41;
          --v39;
        }
        while ( v39 != 0 );
        goto LABEL_42;
      }
LABEL_43:
      if ( v24 > 2 )
      {
        v48 = (v24 - 3) / 3 + 1;
        do
        {
          v24 -= 3;
          *v6 = *v40;
          v6[1] = v40[1];
          v49 = v40[2];
          v40 += 3;
          v6[2] = v49;
          v6 += 3;
          --v48;
        }
        while ( v48 != 0 );
      }
      if ( v24 != 0 )
      {
        v12 = v60;
        *v6++ = *v40;
        v50 = v24 <= 1;
        v11 = v59;
        if ( v50 )
          goto LABEL_56;
        v51 = v40[1];
        goto LABEL_49;
      }
LABEL_55:
      v12 = v60;
      v11 = v59;
LABEL_56:
      if ( v8 >= v10 || v6 >= v15 )
        goto LABEL_65;
      v17 = v70;
      continue;
    }
    break;
  }
  v54 = 549320;
LABEL_64:
  a4[4] = (unsigned __int8 *)v54;
  *((_DWORD *)v4 + 2) = 16209;
LABEL_65:
  a4[2] = v6;
  v55 = v16 >> 3;
  v56 = &v8[-v55];
  *((_DWORD *)a4 + 6) = (_DWORD)v15 - (_DWORD)v6 + 257;
  *a4 = v56;
  v57 = v16 - 8 * v55;
  *((_DWORD *)a4 + 2) = (_DWORD)v10 - (_DWORD)v56 + 5;
  *((_DWORD *)v4 + 19) = v57;
  result = v14 & ((1 << v57) - 1);
  *((_DWORD *)v4 + 18) = result;
  return result;
}
