// sub_1ED4C00
// rva 0x01ed4c00  size 314  section .text  group text
// window base 0x181ed4c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED4C00(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rbx
  int v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  unsigned int *v16; // [rsp+10h] [rbp-8h]

  v16 = a3;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v14);
LABEL_18:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1ED4D40();
  }
  if ( a3 != v6 )
  {
    v8 = *a3 >> 3;
    if ( SHIWORD(v6[2 * v8 + 15]) < 2 || v6[2 * v6[2 * v8 + 4] + 4] != 3988 )
      sub_276FC00(a1, a2, a3, a4, a5: v6 + 8524474);
  }
  v9 = a3;
  v10 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v7 + 32) )
  {
    v10 = sub_1EAA920(a1, a2, a3: 34210160);
    v9 = v16;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v10 + 32;
    *(_DWORD *)v10 = 34210160;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
  }
  v15 = v10;
  sub_53F1120(a1, a2, a3: v10, a4: v10, a5: v9, a6: v6 + 94165144);
  v11 = (unsigned __int64)v16;
  if ( v16 == v6 )
    goto LABEL_18;
  v16[16] = (unsigned __int64)(v15 - (_QWORD)v6) >> 3;
  __faststorefence();
  result = *(unsigned int *)v11;
  if ( (result & 2) != 0 )
  {
    v13 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (v11 - v13) >> 9;
    if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
