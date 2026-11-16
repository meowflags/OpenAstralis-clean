// sub_181596F80
// rva 0x01596f80  size 852  section .text  group text
// window base 0x181596f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596F80(
        unsigned __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 result; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  _DWORD *i; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-18h]
  __int64 v33; // [rsp+18h] [rbp-10h]
  _DWORD *v34; // [rsp+20h] [rbp-8h]

  v34 = a3;
  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v9 + 8) )
    goto LABEL_30;
  v10 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 34197072);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v10 + 24;
    *(_DWORD *)v10 = 34197072;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
  }
  v33 = v10;
  v11 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v11 + 32) > *(_QWORD *)(v9 + 32) )
  {
    v11 = MEMORY[0x181EAA920](a1, a2, a3: 34168584);
    v10 = v33;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v11 + 32;
    *(_DWORD *)v11 = 34168584;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
  }
  v12 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v9 + 32) )
  {
    v32 = (_DWORD *)v11;
    v12 = MEMORY[0x181EAA840](a1, a2: 34082368, a3: 34082368, a4: v11, a5: 16);
    v11 = (__int64)v32;
    v10 = v33;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v12 + 32;
    *(_QWORD *)v12 = 34082368;
    *(_DWORD *)(v12 + 8) = 16;
    *(_DWORD *)(v12 + 12) = 0;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = 0;
  }
  v13 = (unsigned __int64)(v11 - (_QWORD)v8) >> 3;
  *(_DWORD *)(v10 + 8) = v13;
  v14 = *(unsigned int *)v10;
  if ( (v14 & 2) != 0 )
  {
    a1 = v10 & 0xFFFFFFFFFFF80000LL;
    v14 = (v10 - ((v10 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + v14 + 0x38) != 0 )
      *(_BYTE *)(a1 + v14 + 56) = 0;
  }
  *(_DWORD *)(v10 + 12) = v13;
  if ( (*(_DWORD *)v10 & 2) != 0 )
  {
    v14 = v10 & 0xFFFFFFFFFFF80000LL;
    a1 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - a1) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - a1) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v11 + 4) = (unsigned __int64)(v12 - (_QWORD)v8) >> 3;
  if ( (*(_DWORD *)v11 & 2) != 0 )
  {
    v24 = v11 & 0xFFFFFFFFFFF80000LL;
    v25 = (v11 - ((v11 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
    if ( *(_BYTE *)(v24 + v25 + 56) != 0 )
      *(_BYTE *)(v24 + v25 + 56) = 0;
  }
  v15 = sub_1815973C0(a1, a2: v14, a3: v10);
  if ( v34 == v8 )
    goto LABEL_31;
  if ( (unsigned __int16)v8[2 * v8[2 * (*v34 >> 3) + 5]
                          + 3
                          + (v8[2 * (*v34 >> 3) + 11] & (0x7ADu >> HIBYTE(v8[2 * (*v34 >> 3) + 11])))] != 1965 )
  {
    for ( i = (_DWORD *)MEMORY[0x18276B120](); ; i = (_DWORD *)MEMORY[0x18276BEE0]() )
    {
      while ( 1 )
      {
        v30 = *i >> 3;
        if ( SHIWORD(v8[2 * v30 + 15]) >= 4 && v8[2 * v8[2 * v30 + 4] + 6] == 81613 )
          break;
        i = (_DWORD *)MEMORY[0x182769900](a1: v28, a2: v29, a3: i, a4: v27, a5: &a7);
      }
      v32 = i;
      MEMORY[0x1828C1C40](a1: v28, a2: v29, a3: v8 + 91496388);
LABEL_30:
      MEMORY[0x181EB84E0]();
LABEL_31:
      ;
    }
  }
  v17 = *v34 >> 3;
  v18 = v8[2 * v17 + 11] & (0x7ADu >> HIBYTE(v8[2 * v17 + 11]));
  v19 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                         + *(_QWORD *)((char *)&v8[2 * v17]
                                                                                     + HIWORD(v8[2
                                                                                               * (unsigned int)v8[2 * v17 + 5]
                                                                                               + 3
                                                                                               + v18])));
  v19(a1: v16, a2: v18, a3: v34, a4: v19, a5: v15);
  v22 = *(unsigned int *)(v33 + 12);
  if ( (_DWORD)v22 != 0 )
  {
    result = MEMORY[0x185009C60](a1: v20, a2: v21, a3: &v8[2 * v22]);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  else
  {
    MEMORY[0x182771080](a1: v20, a2: v21, a3: v34);
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
    return sub_1815972E0();
  }
  return result;
}
