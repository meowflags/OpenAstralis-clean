// sub_185049A00
// rva 0x05049a00  size 157  section .text  group text
// window base 0x185049a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185049A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    v19 = a3;
    MEMORY[0x181EB84E0]();
LABEL_7:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v7 + 10827292);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185049AA0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
  }
  if ( a5 != v7
    && (unsigned __int16)v7[2 * v7[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v7[2 * (*a5 >> 3) + 11] & (0x575u >> HIBYTE(v7[2 * (*a5 >> 3) + 11])))] != 1397 )
  {
    goto LABEL_7;
  }
  v9 = &v7[2 * *(unsigned int *)(a3 + 4)];
  v19 = a3;
  v18 = a5;
  result = sub_18504AF20(a1, a2, a3: v9);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
