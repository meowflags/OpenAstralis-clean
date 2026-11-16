// sub_1932C7E88
// rva 0x132c7e88  size 1160  section .text  group text
// window base 0x1932c7e88: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C7E88(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        int a4,
        unsigned int a5,
        _DWORD **a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12)
{
  _DWORD **v13; // rdi
  __int64 v14; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int16 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rsi
  unsigned int v26; // r10d
  _WORD *v27; // rcx
  unsigned int v28; // r12d
  __int64 v29; // rcx
  __int64 j; // rdx
  unsigned int v31; // r9d
  _WORD *v32; // rdx
  unsigned int v33; // r11d
  char v34; // r15
  unsigned int v35; // r13d
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  _DWORD *v39; // rdi
  int v40; // esi
  int v41; // edx
  __int64 v42; // rbx
  unsigned int k; // edx
  _DWORD *v45; // rbx
  unsigned int v46; // ebx
  _DWORD *v47; // rax
  __int64 v48; // [rsp+0h] [rbp-A9h] BYREF
  int v49; // [rsp+20h] [rbp-89h]
  unsigned int v50; // [rsp+24h] [rbp-85h]
  int v51; // [rsp+28h] [rbp-81h]
  int v52; // [rsp+2Ch] [rbp-7Dh]
  _DWORD *v53; // [rsp+30h] [rbp-79h]
  int v54; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v55; // [rsp+40h] [rbp-69h]
  int v56; // [rsp+44h] [rbp-65h]
  __int64 v57; // [rsp+48h] [rbp-61h]
  __int64 v58; // [rsp+50h] [rbp-59h]
  _DWORD **v59; // [rsp+58h] [rbp-51h]
  __int64 v60; // [rsp+60h] [rbp-49h]
  _WORD *v61; // [rsp+68h] [rbp-41h]
  _DWORD *v62; // [rsp+70h] [rbp-39h]
  _WORD v64[16]; // [rsp+7Ah] [rbp-2Fh] BYREF
  _WORD v65[15]; // [rsp+9Ah] [rbp-Fh]
  __int64 v66; // [rsp+B8h] [rbp+Fh]

  v56 = a4;
  v13 = a6;
  v59 = a6;
  v14 = (__int64)a11;
  v61 = a3;
  i = 0;
  v62 = a11;
  v60 = a12;
  v58 = 0;
  v57 = 0;
  v50 = 0;
  do
  {
    v18 = (unsigned int)i;
    if ( v18 >= 16 )
    {
      sub_1932C925C(a1: v13, a2, a3: i);
      __builtin_debugtrap();
    }
    i = (unsigned int)(i + 1);
    v64[v18 - 1] = 0;
  }
  while ( (unsigned int)i <= 0xF );
  v19 = 2;
  if ( a5 != 0 )
  {
    v20 = a3;
    for ( i = a5; i != 0; --i )
    {
      v21 = *v20++;
      ++v64[v21 - 1];
    }
  }
  v22 = 15;
  v52 = -1;
  do
  {
    if ( v64[(unsigned int)v22 - 1] != 0 )
      break;
    v22 = (unsigned int)(v22 - 1);
  }
  while ( (_DWORD)v22 != 0 );
  if ( *a11 > (unsigned int)v22 )
    JUMPOUT(0x326521F54LL);
  v23 = *a11;
  v24 = 0;
  if ( (_DWORD)v22 == 0 )
  {
    v49 = 320;
    do
    {
      *(*v13)++ = 320;
      --v19;
    }
    while ( v19 != 0 );
    *a11 = 1;
    return sub_1932C8DE0(a1: v13, a2: v24, a3: i, a4: (unsigned __int64)&v48 ^ v66, a5: v22, a6: v14);
  }
  v26 = 1;
  if ( (unsigned int)v22 > 1 )
  {
    v27 = v64;
    do
    {
      if ( *v27 != 0 )
        break;
      ++v26;
      ++v27;
    }
    while ( v26 < (unsigned int)v22 );
  }
  if ( v23 < v26 )
    JUMPOUT(0x326521FC7LL);
  v28 = *a11;
  LODWORD(i) = 1;
  v14 = 1;
  do
  {
    i = 2 * (_DWORD)i - (unsigned int)(unsigned __int16)v64[(unsigned int)v14 - 1];
    if ( (i & 0x80000000) != 0LL )
      return sub_1932C8DE0(a1: v13, a2: v24, a3: i, a4: (unsigned __int64)&v48 ^ v66, a5: v22, a6: v14);
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 <= 0xF );
  if ( (int)i <= 0 || a4 != 0 && (_DWORD)v22 == 1 )
  {
    v65[0] = 0;
    v29 = 0;
    for ( j = 14; j != 0; --j )
    {
      v65[v29 + 1] = v65[v29] + v64[v29];
      ++v29;
    }
    v13 = v59;
    v31 = 0;
    if ( a5 != 0 )
    {
      v32 = a3;
      do
      {
        if ( *v32 != 0 )
          *(_WORD *)(a12 + 2LL * (unsigned __int16)v64[(unsigned __int16)*v32 + 15]++) = v31;
        ++v31;
        ++v32;
      }
      while ( v31 < a5 );
    }
    if ( a4 != 0 )
    {
      if ( a4 == 1 )
      {
        v58 = 557680;
        v57 = 557744;
        v50 = 257;
      }
      else if ( a4 == 2 )
      {
        v58 = 557808;
        v57 = 557872;
        v24 = 0;
      }
    }
    else
    {
      v50 = 20;
    }
    v53 = *v13;
    v14 = (unsigned int)(1 << v23);
    i = 0;
    v51 = 0;
    v33 = 0;
    v34 = v23;
    v35 = 0;
    v54 = v14 - 1;
    if ( (a4 != 1 || (unsigned int)v14 <= 0x354) && (a4 != 2 || (unsigned int)v14 <= 0x250) )
    {
      while ( 1 )
      {
        BYTE1(v49) = v26 - v35;
        v36 = *(unsigned __int16 *)(v60 + 2LL * (unsigned int)i);
        if ( v36 + 1 >= v50 )
        {
          if ( v36 < v50 )
          {
            LOBYTE(v49) = 96;
            HIWORD(v49) = 0;
          }
          else
          {
            v37 = v36 - v50;
            LOBYTE(v49) = *(_BYTE *)(v57 + 2LL * v37);
            HIWORD(v49) = *(_WORD *)(v58 + 2LL * v37);
          }
        }
        else
        {
          LOBYTE(v49) = 0;
          HIWORD(v49) = v36;
        }
        v38 = v49;
        v39 = v53;
        v40 = 1 << (v26 - v35);
        v41 = 1 << v34;
        LODWORD(v42) = (1 << v34) + (v33 >> v35);
        v55 = 1 << v34;
        do
        {
          v42 = (unsigned int)(v42 - v40);
          v39[v42] = v38;
          v41 -= v40;
        }
        while ( v41 != 0 );
        v13 = v59;
        for ( k = 1 << (v26 - 1); (k & v33) != 0; k >>= 1 )
          ;
        v24 = 0;
        if ( k != 0 )
          v33 = k + ((k - 1) & v33);
        else
          v33 = 0;
        i = (unsigned int)++v51;
        if ( v64[v26 - 1]-- == 1 )
        {
          if ( v26 == (_DWORD)v22 )
          {
            if ( v33 != 0 )
            {
              i = (unsigned __int64)v53;
              LOBYTE(v49) = 64;
              HIWORD(v49) = 0;
              v53[v33] = (unsigned __int16)v49;
            }
            *v13 += (unsigned int)v14;
            *v62 = v28;
            return sub_1932C8DE0(a1: v13, a2: v24, a3: i, a4: (unsigned __int64)&v48 ^ v66, a5: v22, a6: v14);
          }
          v26 = (unsigned __int16)v61[*(unsigned __int16 *)(v60 + 2 * i)];
        }
        if ( v26 > v28 )
        {
          v24 = v33 & v54;
          if ( (_DWORD)v24 != v52 )
          {
            if ( v35 != 0 )
              JUMPOUT(0x326522224LL);
            v35 = v28;
            v34 = v26 - v28;
            v45 = &v53[v55];
            v53 = v45;
            i = (unsigned int)(1 << (v26 - v28));
            if ( v26 < (unsigned int)v22 )
            {
              v46 = v26;
              do
              {
                i = (unsigned int)i - (unsigned __int16)v64[v46 - 1];
                if ( (int)i <= 0 )
                  break;
                ++v34;
                ++v46;
                i = (unsigned int)(2 * i);
              }
              while ( v46 < (unsigned int)v22 );
              v13 = v59;
              v45 = v53;
            }
            v14 = (unsigned int)((1 << v34) + v14);
            if ( v56 == 1 && (unsigned int)v14 > 0x354 || v56 == 2 && (unsigned int)v14 > 0x250 )
              return sub_1932C8DE0(a1: v13, a2: v24, a3: i, a4: (unsigned __int64)&v48 ^ v66, a5: v22, a6: v14);
            v47 = *v13;
            LODWORD(i) = v51;
            v52 = v33 & v54;
            LOBYTE(v47[v24]) = v34;
            BYTE1((*v13)[v24]) = v28;
            HIWORD((*v13)[v24]) = v45 - *v13;
          }
        }
      }
    }
  }
  return sub_1932C8DE0(a1: v13, a2: v24, a3: i, a4: (unsigned __int64)&v48 ^ v66, a5: v22, a6: v14);
}
