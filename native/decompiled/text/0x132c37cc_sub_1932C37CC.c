// sub_1932C37CC
// rva 0x132c37cc  size 475  section .text  group text
// window base 0x1932c37cc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C37CC(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // r12
  unsigned int v17; // r10d
  __int64 v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // ecx
  int v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]

  if ( (unsigned int)sub_1932C39D8(a1: a4, a2: a5) != 0 )
    return 4294967294LL;
  if ( a3 == 0 )
    return 4294967294LL;
  v11 = v7[5];
  v12 = *(_DWORD *)(v11 + 44);
  if ( v12 == 2 || v12 == 1 && *(_DWORD *)(v11 + 8) != 42 )
    return 4294967294LL;
  if ( *(_DWORD *)(v11 + 156) != 0 )
    return 4294967294LL;
  if ( v12 == 1 )
  {
    v13 = sub_1932C5FE4(a1: v7, a2: v8, a3, a4: *((unsigned int *)v7 + 19), a5: v9);
    *((_DWORD *)v7 + 19) = v13;
  }
  *(_DWORD *)(v11 + 44) = 0;
  if ( (unsigned int)v8 >= *(_DWORD *)(v11 + 68) )
  {
    if ( v12 == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v11 + 104) + 2LL * (unsigned int)(*(_DWORD *)(v11 + 116) - 1)) = 0;
      sub_1932CA161(
        a1: v7,
        a2: v8,
        a3: 0,
        a4: *(_QWORD *)(v11 + 104),
        a5: 2LL * (unsigned int)(*(_DWORD *)(v11 + 116) - 1));
      *(_DWORD *)(v11 + 5916) = 0;
      *(_DWORD *)(v11 + 148) = 0;
      *(_DWORD *)(v11 + 132) = 0;
      *(_DWORD *)(v11 + 5896) = 0;
    }
    v14 = (unsigned int)(v8 - *(_DWORD *)(v11 + 68));
    LODWORD(v8) = *(_DWORD *)(v11 + 68);
    a3 += v14;
  }
  v15 = *((_DWORD *)v7 + 2);
  v16 = *v7;
  *((_DWORD *)v7 + 2) = v8;
  *v7 = a3;
  while ( 1 )
  {
    sub_1932C3F60(a1: (_DWORD)v7, a2: v8, a3: v6, a4: v11, a5: v9, a6: v10, a7: v23, a8: v24, a9: v25, a10: v26);
    v21 = *(_DWORD *)(v11 + 156);
    if ( v21 < 3 )
      break;
    v17 = *(_DWORD *)(v11 + 148);
    LODWORD(v8) = v21 - 2;
    v18 = v17 + 2;
    do
    {
      v6 = *(_QWORD *)(v11 + 104);
      v19 = *(unsigned __int8 *)(v18 + *(_QWORD *)(v11 + 80));
      v18 = (unsigned int)(v18 + 1);
      v20 = *(_QWORD *)(v11 + 96);
      v10 = *(_DWORD *)(v11 + 124) & ((*(_DWORD *)(v11 + 112) << *(_DWORD *)(v11 + 128)) ^ v19);
      v9 = v17 & *(_DWORD *)(v11 + 76);
      *(_DWORD *)(v11 + 112) = v10;
      *(_WORD *)(v20 + 2 * v9) = *(_WORD *)(v6 + 2 * v10);
      *(_WORD *)(*(_QWORD *)(v11 + 104) + 2LL * *(unsigned int *)(v11 + 112)) = v17++;
      LODWORD(v8) = v8 - 1;
    }
    while ( (_DWORD)v8 != 0 );
    *(_DWORD *)(v11 + 148) = v17;
    *(_DWORD *)(v11 + 156) = 2;
  }
  *(_DWORD *)(v11 + 148) += v21;
  *(_DWORD *)(v11 + 132) = *(_DWORD *)(v11 + 148);
  *(_DWORD *)(v11 + 5896) = v21;
  *(_DWORD *)(v11 + 156) = 0;
  *(_DWORD *)(v11 + 160) = 2;
  *(_DWORD *)(v11 + 136) = 2;
  *(_DWORD *)(v11 + 144) = 0;
  *v7 = v16;
  *((_DWORD *)v7 + 2) = v15;
  *(_DWORD *)(v11 + 44) = v12;
  return 0;
}
