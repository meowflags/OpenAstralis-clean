// sub_1EAA300
// rva 0x01eaa300  size 1010  section .text  group text
// window base 0x181eaa300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EAA300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  char v6; // al
  __int64 v7; // rcx
  char *v8; // rbx
  unsigned __int64 v9; // rcx
  char *v10; // r10
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  int v13; // r12d
  __int64 v14; // r8
  __int64 v15; // rdi
  char *v16; // rax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  _QWORD *v20; // r8
  char *v21; // rax
  char *v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+3Ch] [rbp-5Ch]
  char *v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+64h] [rbp-34h]
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]
  unsigned __int64 v29; // [rsp+78h] [rbp-20h]
  __int64 v30; // [rsp+80h] [rbp-18h]
  unsigned int v31; // [rsp+8Ch] [rbp-Ch]
  _QWORD *v32; // [rsp+90h] [rbp-8h]

  v32 = (_QWORD *)a5;
  v31 = *(char *)(a5 + 48);
  v6 = *(_BYTE *)(a5 + 48);
  v7 = *(_QWORD *)(a5 + 32);
  v8 = (char *)(a5 + 2112);
  v30 = a5 + 2112;
  *(_DWORD *)(a5 + 2104) = (a5 + 2112 - v5) / 8;
  *(_WORD *)(a5 + 2108) = 0;
  *(_WORD *)(a5 + 2110) = 0;
  *(_WORD *)(a5 + 56) = 264;
  v9 = a5 + v7;
  v29 = v9;
  v10 = (char *)(a5 + 2112);
  v28 = 0;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v27 = (unsigned __int64)&v8[-a5] >> 3;
    v13 = v11 >> 3;
    if ( v9 <= (unsigned __int64)v10 )
      break;
    v14 = *(_DWORD *)v10 & 6;
    if ( v14 == 4 )
    {
      v15 = *(_DWORD *)v10 & 0xFFFFFFF8;
    }
    else
    {
      v15 = *(unsigned int *)(v5 + 8LL * (*(_DWORD *)v10 >> 3) + 32);
      if ( (int)v15 < 0 )
        v15 = (((unsigned __int64)*((unsigned int *)v10 + 2) << v15) + (((int)v15 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v14 == 6 )
    {
      v11 += v15;
      if ( v12 != 0 )
      {
        *((_WORD *)v8 - 1) = (unsigned __int64)(v10 - v8) >> 3;
        *((_WORD *)v10 - 1) = 0;
        v12 = 0;
        v8 = v10;
        a5 = (__int64)v32;
        v10 += v15;
        v9 = v29;
      }
      else
      {
        v10 += v15;
        v9 = v29;
        a5 = (__int64)v32;
      }
    }
    else if ( v11 != 0 )
    {
      v26 = v15 + v12;
      v25 = &v10[v15];
      if ( v6 != 0 )
      {
        v16 = v8;
      }
      else
      {
        v24 = v11 >> 3;
        v23 = v10;
        v16 = sub_1EAA1E0(a1: v15, a2: v11, a3, a4: (__int64)&v10[v15], a5: v11);
        LOWORD(v13) = v24;
        v10 = v23;
      }
      *((_DWORD *)v8 - 2) = (__int64)&v16[-v5] / 8;
      *((_WORD *)v8 - 2) = v13;
      v17 = (unsigned __int64)&v10[-v30] >> 10;
      v18 = v28;
      a5 = (__int64)v32;
      while ( v17 > v18 )
        *((_WORD *)v32 + v18++ + 29) = v27;
      v10 = v25;
      v28 = v18;
      v11 = 0;
      v12 = v26;
      v9 = v29;
      v6 = v31;
    }
    else
    {
      v10 += v15;
      v12 += v15;
      v9 = v29;
      a5 = (__int64)v32;
    }
  }
  if ( v12 != 0 )
  {
    *(_QWORD *)(a5 + 32) -= v12;
  }
  else if ( v11 != 0 )
  {
    if ( v6 != 0 )
      v21 = v8;
    else
      v21 = sub_1EAA1E0(a1: a5, a2: v11, a3, a4: v9, a5: v11);
    *((_DWORD *)v8 - 2) = (__int64)&v21[-v5] / 8;
    *((_WORD *)v8 - 2) = v13;
  }
  result = v31;
  if ( (_BYTE)v31 != 0 )
  {
    v20 = v32;
    if ( v32 == *(_QWORD **)(a3 + 8) )
    {
      if ( *(_BYTE *)(v5 + 376654993) != 0 )
        result = (unsigned __int64)v32 + v32[4];
      else
        result = (unsigned __int64)v32 + *v32;
      *(_QWORD *)(a3 + 16) = result;
    }
  }
  else
  {
    v20 = v32;
  }
  if ( v28 + 1 < 0x1FE )
  {
    *((_WORD *)v20 + v28 + 29) = v27;
    for ( result = v28 + 2; result < 0x1FE; ++result )
      *((_WORD *)v20 + result + 28) = v27;
  }
  return result;
}
