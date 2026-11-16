// sub_132C62DC
// rva 0x132c62dc  size 777  section .text  group text
// window base 0x1932c62dc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C62DC(_DWORD a1, _DWORD a2, _DWORD *a3, int a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r11
  _DWORD *v6; // r10
  unsigned int v8; // r9d
  __int64 v9; // rax
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r15d
  unsigned __int64 v14; // rbx
  unsigned int v15; // r9d
  unsigned int v16; // edi
  int v17; // r13d
  unsigned int v18; // esi
  unsigned int v19; // ebp
  unsigned int v20; // r15d
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r10
  __int64 v25; // r14
  char v26; // r8
  char v27; // cl
  __int64 v28; // rcx
  bool v29; // zf
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 i; // r8
  __int64 v33; // r8
  unsigned int v34; // r9d
  __int64 v35; // r8
  unsigned int v36; // r9d
  __int64 v37; // r8
  unsigned int v38; // r9d
  unsigned __int64 v39; // rdx
  __int64 j; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // [rsp+8h] [rbp-40h]
  _DWORD *v44; // [rsp+58h] [rbp+10h]
  unsigned __int64 v45; // [rsp+60h] [rbp+18h]
  unsigned __int64 v46; // [rsp+68h] [rbp+20h]

  v5 = a5;
  v6 = a3;
  if ( a3 == nullptr )
    return 0;
  v8 = ~a4;
  if ( a5 >= 0x17 )
  {
    do
    {
      if ( ((unsigned __int8)v6 & 3) == 0 )
        break;
      v9 = (unsigned __int8)(v8 ^ *(_BYTE *)v6);
      v6 = (_DWORD *)((char *)v6 + 1);
      v8 = *(_DWORD *)(4 * v9 - 321232896 + 321782304) ^ (v8 >> 8);
      --v5;
    }
    while ( v5 != 0 );
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = v5 / 0x14;
    v5 %= 0x14u;
    v45 = v5;
    v46 = v14 - 1;
    if ( v14 != 1 )
    {
      do
      {
        v15 = *v6 ^ v8;
        v16 = v6[1] ^ v10;
        v17 = 8;
        v18 = v6[2] ^ v11;
        v19 = v6[3] ^ v12;
        v20 = v6[4] ^ v13;
        v21 = v15;
        v22 = v16;
        v23 = v18;
        v8 = *(_DWORD *)(4LL * (unsigned __int8)v15 - 321232896 + 321783328);
        v44 = v6 + 5;
        v10 = *(_DWORD *)(4LL * (unsigned __int8)v16 - 321232896 + 321783328);
        v11 = *(_DWORD *)(4LL * (unsigned __int8)v18 - 321232896 + 321783328);
        v24 = v19;
        v12 = *(_DWORD *)(4LL * (unsigned __int8)v19 - 321232896 + 321783328);
        v43 = v20;
        v13 = *(_DWORD *)(4LL * (unsigned __int8)v20 - 321232896 + 321783328);
        v25 = 256;
        do
        {
          v26 = v17;
          v27 = v17;
          v17 += 8;
          v8 ^= *(_DWORD *)(4 * (v25 + (unsigned __int8)(v21 >> v27)) - 321232896 + 321783328);
          v10 ^= *(_DWORD *)(4 * (v25 + (unsigned __int8)(v22 >> v26)) - 321232896 + 321783328);
          v11 ^= *(_DWORD *)(4 * (v25 + (unsigned __int8)(v23 >> v26)) - 321232896 + 321783328);
          v12 ^= *(_DWORD *)(4 * (v25 + (unsigned __int8)(v24 >> v26)) - 321232896 + 321783328);
          v28 = v25 + (unsigned __int8)(v43 >> v26);
          v25 += 256;
          v13 ^= *(_DWORD *)(4 * v28 - 321232896 + 321783328);
        }
        while ( v17 != 32 );
        v29 = v46-- == 1;
        v6 = v44;
      }
      while ( !v29 );
      v5 = v45;
    }
    v30 = *v6 ^ v8;
    v31 = 4;
    for ( i = 4; i != 0; --i )
      v30 = *(_DWORD *)(4LL * (unsigned __int8)v30 - 321232896 + 321782304) ^ (v30 >> 8);
    v33 = 4;
    v34 = v10 ^ v6[1] ^ v30;
    do
    {
      v34 = *(_DWORD *)(4LL * (unsigned __int8)v34 - 321232896 + 321782304) ^ (v34 >> 8);
      --v33;
    }
    while ( v33 != 0 );
    v35 = 4;
    v36 = v11 ^ v6[2] ^ v34;
    do
    {
      v36 = *(_DWORD *)(4LL * (unsigned __int8)v36 - 321232896 + 321782304) ^ (v36 >> 8);
      --v35;
    }
    while ( v35 != 0 );
    v37 = 4;
    v38 = v12 ^ v6[3] ^ v36;
    do
    {
      v38 = *(_DWORD *)(4LL * (unsigned __int8)v38 - 321232896 + 321782304) ^ (v38 >> 8);
      --v37;
    }
    while ( v37 != 0 );
    v8 = v13 ^ v6[4] ^ v38;
    do
    {
      v8 = *(_DWORD *)(4LL * (unsigned __int8)v8 - 321232896 + 321782304) ^ (v8 >> 8);
      --v31;
    }
    while ( v31 != 0 );
    v6 += 5;
  }
  if ( v5 >= 8 )
  {
    v39 = v5 >> 3;
    v5 += -8LL * (v5 >> 3);
    do
    {
      for ( j = 8; j != 0; --j )
      {
        v41 = (unsigned __int8)(v8 ^ *(_BYTE *)v6);
        v6 = (_DWORD *)((char *)v6 + 1);
        v8 = *(_DWORD *)(4 * v41 - 321232896 + 321782304) ^ (v8 >> 8);
      }
      --v39;
    }
    while ( v39 != 0 );
  }
  for ( ; v5 != 0; --v5 )
  {
    v42 = (unsigned __int8)(v8 ^ *(_BYTE *)v6);
    v6 = (_DWORD *)((char *)v6 + 1);
    v8 = *(_DWORD *)(4 * v42 - 321232896 + 321782304) ^ (v8 >> 8);
  }
  return ~v8;
}
