// sub_181EA1480
// rva 0x01ea1480  size 548  section .text  group text
// window base 0x181ea1480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_181EA1480(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 j; // rcx
  __int64 v20; // rbx
  __int64 v22; // rbx
  unsigned __int64 i; // rcx
  int v24; // eax
  int v25; // r8d
  int k; // ecx

  v10 = *(_QWORD *)(v7 + 48);
  if ( v10 != 0 )
    v11 = v10 - (_QWORD)a1;
  else
    v11 = 0;
  a1[2] = v11;
  *(_QWORD *)(v7 + 48) = a1;
  *(_QWORD *)(v7 + 168) += a6;
  v12 = *a1;
  __sync_fetch_and_add((volatile signed __int64 *)(v6 + 376655776), *a1);
  __sync_fetch_and_add((volatile signed __int64 *)(v6 + 376652832), v12);
  v13 = a1[4] - ((((a1[4] - 56) << 9) / 0x201) & 0xFFFFFFFFFFFFFFF8LL);
  v14 = (char *)a1 + v13;
  if ( v6 + 40462360 == a3 )
  {
    v20 = a3 - v6;
    if ( v20 != 0 )
      v20 += v6;
    *(unsigned __int64 *)((char *)a1 + v13) = (v20 - v6) | 1;
    *(_DWORD *)((char *)a1 + v13 + 8) = a5;
    *(unsigned __int64 *)((char *)a1 + v13 + 16) = 0;
  }
  else
  {
    v15 = (*(int *)(a3 + 32) >> 8) & 0xFFF;
    v16 = (((unsigned __int64)a5 << *(_DWORD *)(a3 + 32)) + v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v16 - 16;
    if ( a4 == v6 )
    {
      v22 = a3 - v6;
      if ( v22 != 0 )
        v22 += v6;
      *(unsigned __int64 *)((char *)a1 + v13) = (v22 - v6) | 1;
      *(_DWORD *)((char *)a1 + v13 + 8) = a5;
      *(_DWORD *)((char *)a1 + v13 + 12) = 0;
      if ( v17 >= 0x800 )
      {
        memset((char *)a1 + v13 + 16, 0, v17);
      }
      else
      {
        for ( i = 16; v16 > i; i += 8LL )
          *(_QWORD *)&v14[i] = 0;
      }
    }
    else
    {
      v18 = a3 - v6;
      if ( v18 != 0 )
        v18 += v6;
      *(unsigned __int64 *)((char *)a1 + v13) = (v18 - v6) | 1;
      *(_DWORD *)((char *)a1 + v13 + 8) = a5;
      *(_DWORD *)((char *)a1 + v13 + 12) = 0;
      if ( v17 >= 0x800 )
      {
        memset((char *)a1 + v13 + 16, 0, v17);
      }
      else
      {
        for ( j = 16; v16 > j; j += 8LL )
          *(_QWORD *)&v14[j] = 0;
      }
      v24 = *(_DWORD *)(a4 + 8);
      v25 = v15 + a5 - v24;
      for ( k = 0; v24 > k; ++k )
        v14[k + v25] = *(_BYTE *)(a4 + k + 12);
    }
  }
  return (char *)a1 + v13;
}
