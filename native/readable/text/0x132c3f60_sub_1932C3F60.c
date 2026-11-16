// sub_132C3F60
// rva 0x132c3f60  size 537  section .text  group text
// window base 0x1932c3f60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_132C3F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // rdi
  int *v9; // r14
  unsigned int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rdx
  __int64 v20; // r10
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rsi
  int v33; // esi
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // ebx
  __int64 v37; // rdi
  __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+10h] [rbp-38h]

  v6 = *(unsigned int *)(a4 + 68);
  v7 = (_QWORD *)(a4 + 80);
  v8 = a4;
  v9 = (int *)(a4 + 5896);
  do
  {
    v10 = *(_DWORD *)(v8 + 148);
    v11 = *(_DWORD *)(v8 + 88) - *(_DWORD *)(v8 + 156) - v10;
    if ( v10 >= (int)v6 + *(_DWORD *)(v8 + 68) - 262 )
    {
      sub_1932CA15B(a1: v8, a2: v6, a3: *v7 + v6, a4: *v7, a5: (unsigned int)v6 - v11);
      v15 = v13[37];
      v13[38] -= v14;
      v16 = v15 - v14;
      v13[33] -= v14;
      v13[37] = v16;
      if ( *v9 > v16 )
        *v9 = v16;
      sub_1932C44E8(a1: v13, a2: v14, a3: v12, a4: v13);
      v11 += v6;
    }
    if ( *(_DWORD *)(*(_QWORD *)v8 + 8LL) == 0 )
      break;
    v17 = sub_132C4454(
            a1: v8,
            a2: v6,
            a3: *(_DWORD *)v7 + *(_DWORD *)(v8 + 148) + *(_DWORD *)(v8 + 156),
            a4: *(_QWORD *)v8,
            a5: v11,
            a6,
            a7: v38,
            a8: v39,
            a9: v40);
    v18 = *v9;
    a6 = v17 + *(_DWORD *)(v8 + 156);
    *(_DWORD *)(v8 + 156) = a6;
    if ( a6 + v18 >= 3 )
    {
      v19 = *v7;
      v20 = (unsigned int)(*(_DWORD *)(v8 + 148) - v18);
      v21 = *(_DWORD *)(v8 + 128);
      v22 = *(unsigned __int8 *)(v20 + *v7);
      *(_DWORD *)(v8 + 112) = v22;
      *(_DWORD *)(v8 + 112) = *(_DWORD *)(v8 + 124)
                            & ((v22 << v21)
                             ^ *(unsigned __int8 *)((unsigned int)(v20 + 1) + v19));
      if ( v18 != 0 )
      {
        v23 = (unsigned int)(v20 + 2);
        do
        {
          v24 = *(_QWORD *)(v8 + 104);
          v25 = *(unsigned __int8 *)(v23 + *v7);
          v23 = (unsigned int)(v23 + 1);
          v26 = *(_QWORD *)(v8 + 96);
          v27 = *(_DWORD *)(v8 + 124) & ((*(_DWORD *)(v8 + 112) << *(_DWORD *)(v8 + 128)) ^ v25);
          v28 = *(_DWORD *)(v8 + 76) & (unsigned int)v20;
          *(_DWORD *)(v8 + 112) = v27;
          *(_WORD *)(v26 + 2 * v28) = *(_WORD *)(v24 + 2 * v27);
          *(_WORD *)(*(_QWORD *)(v8 + 104) + 2LL * *(unsigned int *)(v8 + 112)) = v20;
          LODWORD(v20) = v20 + 1;
          a6 = *(_DWORD *)(v8 + 156);
          v29 = *v9 - 1;
          *v9 = v29;
        }
        while ( a6 + v29 >= 3 && v29 != 0 );
      }
    }
  }
  while ( a6 < 0x106 && *(_DWORD *)(*(_QWORD *)v8 + 8LL) != 0 );
  v30 = *(unsigned int *)(v8 + 5912);
  v31 = *(_DWORD *)(v8 + 88);
  if ( (unsigned int)v30 < v31 )
  {
    v32 = (unsigned int)(*(_DWORD *)(v8 + 148) + *(_DWORD *)(v8 + 156));
    if ( (unsigned int)v30 >= (unsigned int)v32 )
    {
      if ( (unsigned int)v30 < (int)v32 + 258 )
      {
        v35 = (unsigned int)(v32 - v30);
        if ( (int)v35 + 258 > v31 - (unsigned int)v30 )
          JUMPOUT(0x32651E148LL);
        v36 = v35 + 258;
        sub_1932CA161(a1: v8, a2: v35, a3: 0, a4: *(_QWORD *)(v8 + 80) + v30, a5: (unsigned int)(v35 + 258));
        *(_DWORD *)(v37 + 5912) += v36;
      }
    }
    else
    {
      if ( v31 - (unsigned int)v32 <= 0x102 )
        JUMPOUT(0x32651E116LL);
      sub_1932CA161(a1: v8, a2: v32, a3: 0, a4: *(_QWORD *)(v8 + 80) + (unsigned int)v32, a5: 258);
      *(_DWORD *)(v34 + 5912) = v33 + 258;
    }
  }
}
