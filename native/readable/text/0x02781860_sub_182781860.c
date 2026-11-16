// sub_2781860
// rva 0x02781860  size 588  section .text  group text
// window base 0x182781860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2781860(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // rax
  signed int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 result; // rax
  unsigned __int64 v25; // rbx
  char v26; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v28; // [rsp+10h] [rbp-38h]
  __int64 v29; // [rsp+18h] [rbp-30h]
  __int64 v30; // [rsp+20h] [rbp-28h]
  __int64 v31; // [rsp+30h] [rbp-18h]
  __int64 v32; // [rsp+38h] [rbp-10h]
  int v33; // [rsp+44h] [rbp-4h]

  if ( *(_DWORD *)(a3 + 4) == 0 )
  {
    sub_276EFE0(a1, a2, a3: a4, a4, a5, a6, a7: v26);
    goto LABEL_21;
  }
  v15 = *(unsigned int *)(v14 + 376651016);
  if ( (unsigned int)v15 >= 0x1E )
  {
LABEL_21:
    sub_276F0E0(a1, a2, a3: (unsigned int)a4, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v26);
LABEL_22:
    sub_276EFE0(a1: v31, a2: v32, a3: v33, a4: v20, a5: v29, a6: v30, a7: v26);
LABEL_23:
    sub_276EFE0(a1: v31, a2: v32, a3: v33, a4: v20, a5: v21, a6: v22, a7: v26);
    goto LABEL_24;
  }
  v16 = ((int)v15 + 1) % 0x1Eu;
  if ( v16 <= (int)v15 )
    *(_BYTE *)(v14 + 376651020) = 1;
  *(_DWORD *)(v14 + 376651016) = v16;
  v17 = *(unsigned int *)(v14 + 4 * v15 + 376651044);
  if ( (_DWORD)v17 != 0 )
  {
    v18 = *(_DWORD *)(v14 + 8 * v17) >> 3;
    if ( *(__int16 *)(v14 + 8 * v18 + 62) < 2
      || *(_DWORD *)(v14 + 8LL * *(unsigned int *)(v14 + 8 * v18 + 16) + 16) != 1958 )
    {
      v17 = sub_276EAE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v26);
    }
  }
  v33 = a4;
  v32 = a2;
  v31 = a1;
  v30 = a6;
  v29 = a5;
  v28 = v14 + 8 * v17;
  v27 = v17;
  v19 = sub_28C0020(a1, a2, a3: *(_QWORD *)(v14 + 376181320));
  v20 = v27;
  if ( v27 == 0 )
    goto LABEL_22;
  v21 = v29;
  *(_QWORD *)(v14 + 8LL * v27 + 40) = v19;
  *(_DWORD *)(v14 + 8LL * v27 + 4) = (unsigned __int64)(v29 - v14) >> 3;
  if ( (*(_DWORD *)v28 & 2) != 0 )
  {
    v25 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v25) >> 9) + 0x38) = 0;
  }
  v22 = v30;
  if ( v30 == v14 )
    goto LABEL_23;
  v23 = *(unsigned int *)(v30 + 4);
  if ( (_DWORD)v23 == 0 )
  {
LABEL_24:
    sub_276EFE0(a1: v31, a2: v32, a3: v33, a4: v20, a5: v21, a6: v22, a7: v26);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2781AC0();
  }
  *(_DWORD *)(v14 + 8LL * v27 + 8) = *(_DWORD *)(v14 + 8 * v23 + 4);
  if ( (*(_DWORD *)v28 & 2) != 0
    && *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - ((v28 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
  {
    *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - ((v28 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
  }
  *(_BYTE *)(v14 + 8LL * v27 + 48) = *(_DWORD *)(v14 + 8 * v23 + 8) == 47076659;
  *(_QWORD *)(v14 + 8LL * v27 + 16) = v31;
  *(_QWORD *)(v14 + 8LL * v27 + 24) = v32;
  *(_DWORD *)(v14 + 8LL * v27 + 12) = v33;
  result = *(_QWORD *)(v14 + 376668728);
  *(_QWORD *)(v14 + 8LL * v27 + 32) = result;
  return result;
}
