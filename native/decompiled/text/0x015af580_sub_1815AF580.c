// sub_1815AF580
// rva 0x015af580  size 1033  section .text  group text
// window base 0x1815af580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AF580(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r8
  int v8; // ebx
  int v9; // ebp
  int v10; // esi
  int v11; // r10d
  _BOOL8 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 result; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbp
  int v30; // [rsp+Ch] [rbp-8Ch]
  int v31; // [rsp+24h] [rbp-74h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  unsigned int v34; // [rsp+50h] [rbp-48h]
  unsigned int v35; // [rsp+54h] [rbp-44h]
  unsigned int v36; // [rsp+5Ch] [rbp-3Ch]
  _DWORD *v37; // [rsp+78h] [rbp-20h]
  _DWORD **v38; // [rsp+80h] [rbp-18h]

  v4 = *(_QWORD *)(v3 + 376178840);
  v5 = *(_QWORD *)(v4 + 160);
  v6 = *(_DWORD *)(a3 + 52);
  if ( v5 != 0 && *(_DWORD *)(v5 + 216) <= v6 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 160);
      if ( v7 == 0 )
      {
        v4 = v5;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v7 + 216) > v6 )
        break;
      v5 = *(_QWORD *)(v5 + 160);
    }
    v4 = v5;
  }
LABEL_8:
  v38 = (_DWORD **)v4;
  v8 = *(_DWORD *)(*(_QWORD *)v4 + 8LL);
  v9 = *(_DWORD *)(*(_QWORD *)(v4 + 144) + 8LL);
  v10 = *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL);
  v37 = *(_DWORD **)(v4 + 152);
  v11 = v6 - *(_DWORD *)(v4 + 216);
  v12 = v10 < 0x10000;
  if ( v10 >= 0x10000 )
    JUMPOUT(0x302B3B655LL);
  if ( v8 >= 0x10000 )
    JUMPOUT(0x302B3B66FLL);
  if ( v9 >= 0x10000 )
    JUMPOUT(0x302B3B689LL);
  v13 = 1;
  if ( v11 >= 0 )
    goto LABEL_13;
  do
  {
    MEMORY[0x1828C1C40](a1: v12, a2: v13, a3: v3 + 361300432);
LABEL_13:
    ;
  }
  while ( *(_DWORD *)(v4 + 212) <= v11 );
  v36 = v13;
  v34 = v9;
  v35 = v11;
  sub_1815A85E0(a1: v12, a2: 4, a3: v37);
  v33 = v14;
  sub_1815A85E0(a1: v15, a2: v16, a3: *v38);
  v20 = *v19;
  if ( (_DWORD)v20 != 0 && *(_DWORD *)(v3 + 8 * v20) >> 3 != 4262015 )
  {
    MEMORY[0x18276EAE0](a1: v17, a2: v18, a3);
    goto LABEL_29;
  }
  v31 = v20;
  v34 = *(unsigned __int16 *)(v33 + 2);
  sub_1815A85E0(a1: v17, a2: *(unsigned __int16 *)(v33 + 2), a3: v38[18]);
  v24 = *v23;
  if ( (_DWORD)v24 != 0 && *(_DWORD *)(v3 + 8 * v24) >> 3 != 4260335 )
  {
LABEL_29:
    MEMORY[0x18276EAE0](a1: v36, a2: v8 < 0x10000, a3, a4: v34, a5: v38, a6: 6);
    JUMPOUT(0x1815AF989LL);
  }
  v30 = v24;
  sub_1815A85E0(a1: v21, a2: v22, a3: v37);
  v26 = *(char *)(v25 + (v35 >> 1));
  *(_DWORD *)(a3 + 4) = v31;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v28 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v28) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v28) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 8) = v30;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v29 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v29) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v29) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 48) = 0;
  result = (((unsigned __int16)(v26 >> (4 * (v35 & 1))) << 12) & 0xE000u) + 7679;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
