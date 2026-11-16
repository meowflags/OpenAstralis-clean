// sub_1EC1CC0
// rva 0x01ec1cc0  size 1191  section .text  group text
// window base 0x181ec1cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC1CC0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int v7; // eax
  int v8; // r9d
  int v9; // r8d
  int v10; // ebx
  __int64 i; // rcx
  int v12; // r9d
  __int64 v14; // r9
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // r9
  int v18; // eax
  _DWORD *v19; // rdx
  int v20; // ebx
  _DWORD *v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  char v25; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v26; // [rsp+8h] [rbp-30h]
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  unsigned int v28; // [rsp+1Ch] [rbp-1Ch]
  int v29; // [rsp+20h] [rbp-18h]
  int v30; // [rsp+24h] [rbp-14h]
  int v31; // [rsp+28h] [rbp-10h]
  int v32; // [rsp+2Ch] [rbp-Ch]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  int v34; // [rsp+34h] [rbp-4h]

  v27 = a3;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v6 + 8) )
  {
    v23 = sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v25);
  }
  else
  {
    v7 = a3[2];
    if ( v7 < 2 )
    {
      if ( *(int *)(v6 + 16) <= 0 )
        sub_277F280();
      return 0;
    }
    v8 = a3[4];
    v9 = v8 & a3[3];
    v10 = v8 | a3[3];
    for ( i = 2; (int)v7 > (int)i; i = (unsigned int)(i + 1) )
    {
      if ( v7 <= (unsigned int)i )
      {
        v34 = v10;
        v33 = v9;
        v23 = sub_2771220(a1, a2, a3: (unsigned int)i, a4: i, a5: v7);
        goto LABEL_90;
      }
      v12 = a3[i + 3];
      v10 |= v12;
      v9 &= v12;
    }
    v14 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v6 + 32) )
    {
      v34 = v10;
      v33 = v9;
      v32 = i;
      v14 = sub_1EAA920(a1, a2, a3: 40465048);
      v10 = v34;
      v9 = v33;
      a3 = v27;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v14 + 32;
      *(_DWORD *)v14 = 40465048;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
    }
    v26 = (_DWORD *)v14;
    *(_DWORD *)(v14 + 12) = 47082197;
    v15 = v9 ^ v10;
    if ( (v9 ^ v10) >= 0 )
    {
      v16 = v9 ^ v10;
      v34 = v10;
      v33 = v9;
    }
    else
    {
      v34 = v10;
      v33 = v9;
      v32 = v9 ^ v10;
      v31 = v15 & 0x7FFFFFFF;
      if ( (unsigned int)sub_1EC2180(a1: v14, a2, a3, a4: v15 & 0x7FFFFFFF, a5: v15 & 0x7FFFFFFF) != 0 )
        v16 = v31;
      else
        v16 = v32;
      v17 = v26;
      v26[1] = 0;
      v17[2] = 0;
      v17[5] = 0;
      v17[4] = 0;
    }
    v18 = 30;
    v19 = v27;
    while ( v18 >= 0 )
    {
      if ( (v16 & (1 << v18)) != 0 )
      {
        v31 = v18 - 1;
        v32 = v18;
        v30 = 1 << v18;
        v29 = v16;
        v28 = v16 & ~(1 << v18);
        if ( (unsigned int)sub_1EC2180(a1, a2: v19, a3: v19, a4: v28, a5: v28) != 0 )
          v16 = v28;
        else
          v16 = v29;
        v20 = v31;
        v21 = v26;
        v26[1] = 0;
        v21[2] = 0;
        v21[5] = 0;
        v21[4] = 0;
        v18 = v20;
        v19 = v27;
      }
      else
      {
        --v18;
      }
    }
    v29 = v16;
    if ( (v16 & 1) != 0 )
    {
      v22 = 0;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 2) != 0 )
    {
      v22 = 1;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 4) != 0 )
    {
      v22 = 2;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 8) != 0 )
    {
      v22 = 3;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 0x10) != 0 )
    {
      v22 = 4;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 0x20) != 0 )
    {
      v22 = 5;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 0x40) != 0 )
    {
      v22 = 6;
      v23 = v29;
      goto LABEL_27;
    }
    if ( (v29 & 0x80u) != 0 )
    {
      v22 = 7;
      v23 = v29;
      goto LABEL_27;
    }
    v23 = v29;
    if ( (v29 & 0x100) != 0 )
    {
      v22 = 8;
      goto LABEL_27;
    }
    if ( (v29 & 0x200) != 0 )
    {
      v22 = 9;
      goto LABEL_27;
    }
    if ( (v29 & 0x400) != 0 )
    {
      v22 = 10;
      goto LABEL_27;
    }
    if ( (v29 & 0x800) != 0 )
    {
      v22 = 11;
      goto LABEL_27;
    }
    if ( (v29 & 0x1000) != 0 )
    {
      v22 = 12;
      goto LABEL_27;
    }
    if ( (v29 & 0x2000) != 0 )
    {
      v22 = 13;
      goto LABEL_27;
    }
    if ( (v29 & 0x4000) != 0 )
    {
      v22 = 14;
      goto LABEL_27;
    }
    if ( (v29 & 0x8000) != 0 )
    {
      v22 = 15;
      goto LABEL_27;
    }
    if ( (v29 & 0x10000) != 0 )
    {
      v22 = 16;
      goto LABEL_27;
    }
    if ( (v29 & 0x20000) != 0 )
    {
      v22 = 17;
      goto LABEL_27;
    }
    if ( (v29 & 0x40000) != 0 )
    {
      v22 = 18;
      goto LABEL_27;
    }
  }
  if ( (v23 & 0x80000) != 0 )
  {
    v22 = 19;
  }
  else if ( (v23 & 0x100000) != 0 )
  {
    v22 = 20;
  }
  else if ( (v23 & 0x200000) != 0 )
  {
    v22 = 21;
  }
  else if ( (v23 & 0x400000) != 0 )
  {
    v22 = 22;
  }
  else if ( (v23 & 0x800000) != 0 )
  {
    v22 = 23;
  }
  else if ( (v23 & 0x1000000) != 0 )
  {
    v22 = 24;
  }
  else if ( (v23 & 0x2000000) != 0 )
  {
    v22 = 25;
  }
  else if ( (v23 & 0x4000000) != 0 )
  {
    v22 = 26;
  }
  else
  {
LABEL_90:
    if ( (v23 & 0x8000000) != 0 )
    {
      v22 = 27;
    }
    else if ( (v23 & 0x10000000) != 0 )
    {
      v22 = 28;
    }
    else if ( (v23 & 0x20000000) != 0 )
    {
      v22 = 29;
    }
    else
    {
      if ( (v23 & 0x40000000) != 0 )
        JUMPOUT(0x303D4C162LL);
      v22 = 31;
    }
  }
LABEL_27:
  if ( v23 != 0 )
    v24 = ((_DWORD)v22 << 24) | (v23 >> v22);
  else
    v24 = 0;
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v22, a4: v27, a5: v33);
  return v24;
}
