// sub_1EC9160
// rva 0x01ec9160  size 252  section .text  group text
// window base 0x181ec9160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC9160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  char v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a3, a5, a6, a7: v13);
    goto LABEL_12;
  }
  v16 = a5;
  v15 = a3;
  v14 = v6 + 40469064;
  result = (__int64)sub_1EAAFE0(a1, a2, a3: v6 + 376659632, a4: v6 + 376659664, a5: v6 + 40469064);
  if ( result != v6 )
  {
    v9 = *(_DWORD *)result >> 3;
    if ( (_DWORD)v9 != 5058633 )
      goto LABEL_13;
  }
  if ( result == v6 )
  {
LABEL_12:
    result = sub_2771080(a1: v10, a2: v11, a3: v9, a4: v15);
LABEL_13:
    sub_276FC00(a1: v10, a2: v11, a3: result, a4: v15, a5: v14);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC9260();
  }
  *(_DWORD *)(result + 4) = (unsigned __int64)(v15 - v6) >> 3;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v12 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(result + 8) = v16;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
