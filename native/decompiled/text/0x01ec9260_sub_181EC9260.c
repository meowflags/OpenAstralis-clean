// sub_181EC9260
// rva 0x01ec9260  size 219  section .text  group text
// window base 0x181ec9260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC9260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+0h] [rbp-18h] BYREF
  __int64 v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4: a3, a5, a6, a7: v19);
    goto LABEL_12;
  }
  v21 = a3;
  v20 = v6 + 40469176;
  result = (__int64)sub_181EAAFE0(a1, a2, a3: v6 + 376659632, a4, a5: v6 + 40469176);
  if ( result != v6 )
  {
    v9 = *(_DWORD *)result >> 3;
    if ( (_DWORD)v9 != 5058647 )
      goto LABEL_13;
  }
  if ( result == v6 )
  {
LABEL_12:
    result = MEMORY[0x182771080](a1: v10, a2: v11, a3: v9, a4: v21);
LABEL_13:
    MEMORY[0x18276FC00](a1: v10, a2: v11, a3: result, a4: v21, a5: v20);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EC9340(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18);
  }
  *(_DWORD *)(result + 4) = (unsigned __int64)(v21 - v6) >> 3;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v12 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v12) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
