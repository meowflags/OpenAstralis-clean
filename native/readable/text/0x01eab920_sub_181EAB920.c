// sub_1EAB920
// rva 0x01eab920  size 666  section .text  group text
// window base 0x181eab920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EAB920(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // r10
  _DWORD *v12; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  char *i; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  _DWORD *v25; // [rsp+8h] [rbp-60h]
  _DWORD *v26; // [rsp+8h] [rbp-60h]
  _DWORD *v27; // [rsp+10h] [rbp-58h]
  _DWORD *v28; // [rsp+18h] [rbp-50h]
  unsigned int v30; // [rsp+2Ch] [rbp-3Ch]

  v8 = a3 + 2112;
  v9 = (unsigned __int64)(a5 - (a3 + 2112)) >> 9;
  v10 = (unsigned int)*(char *)(a3 + v9 + 1080);
  if ( (int)v10 < 1 )
  {
    v11 = (unsigned __int64)(a5 - (a3 + 2112)) >> 9;
  }
  else
  {
    if ( (int)v10 < 64 )
    {
      v11 = (unsigned __int64)(a5 - (a3 + 2112)) >> 9;
    }
    else
    {
      v10 = (unsigned int)*(char *)(a3 + v9 - (1LL << (*(_BYTE *)(a3 + v9 + 1080) - 58)) + 1080);
      v11 = v9 - (1LL << (*(_BYTE *)(a3 + v9 + 1080) - 58));
      while ( (int)v10 >= 64 )
      {
        v11 -= 1LL << ((unsigned __int8)v10 - 58);
        v10 = (unsigned int)*(char *)(a3 + v11 + 1080);
      }
    }
    if ( (int)v10 >= 1 )
    {
      v11 -= v10;
      LODWORD(v10) = *(char *)(a3 + v11 + 1080);
    }
  }
  v12 = (_DWORD *)(v8 + (v11 << 9) - 8LL * (unsigned int)-(int)v10);
  result = v8 + ((a5 - (a3 + 2112)) & 0xFFFFFFFFFFFFFE00LL);
  if ( result > (unsigned __int64)v12 )
  {
    v14 = (unsigned int)v7[2 * (*v12 >> 3) + 8];
    if ( (v14 & 0x80000000) != 0LL )
      v14 = (((unsigned __int64)(unsigned int)v12[2] << v14) + (((int)v14 >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    result = (unsigned __int64)v12 + v14;
  }
  if ( a6 > result )
  {
    if ( a1 == v7 )
    {
      sub_276EFE0(a1, a2: result);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1EABBC0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24);
    }
    else
    {
      v15 = *a1 >> 3;
      v28 = &v7[2 * v7[2 * v15 + 5]];
      v30 = v7[2 * v15 + 11] & (0x14CDu >> HIBYTE(v7[2 * v15 + 11]));
      v27 = &v7[2 * v15];
      v16 = *(_QWORD *)((char *)v27 + HIWORD(v28[v30 + 3]));
      v25 = (_DWORD *)result;
      result = ((__int64 (__fastcall *)(_DWORD *, unsigned __int64, _DWORD *, __int64, unsigned __int64))(v6 + v16))(
                 a1,
                 a2: result,
                 a3: a1,
                 a4: v16,
                 a5: result);
      v17 = (unsigned int)v7[2 * (*v25 >> 3) + 8];
      if ( (v17 & 0x80000000) != 0LL )
        v17 = (((unsigned __int64)(unsigned int)v25[2] << v17) + (((int)v17 >> 8) & 0xFFF) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      for ( i = (char *)v25 + v17; a6 > (unsigned __int64)i; i = (char *)v26 + v19 )
      {
        v26 = i;
        result = ((__int64 (__fastcall *)(_DWORD *, char *, _DWORD *, char *, char *))(v6
                                                                                     + *(_QWORD *)((char *)v27
                                                                                                 + HIWORD(v28[v30 + 3]))))(
                   a1,
                   a2: i,
                   a3: a1,
                   a4: i,
                   a5: i);
        v19 = (unsigned int)v7[2 * (*v26 >> 3) + 8];
        if ( (v19 & 0x80000000) != 0LL )
        {
          result = (((unsigned __int64)(unsigned int)v26[2] << v19) + (((int)v19 >> 8) & 0xFFF) + 7)
                 & 0xFFFFFFFFFFFFFFF8LL;
          v19 = result;
        }
      }
    }
  }
  return result;
}
