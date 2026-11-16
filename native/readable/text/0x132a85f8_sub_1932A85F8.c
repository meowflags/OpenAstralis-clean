// sub_132A85F8
// rva 0x132a85f8  size 39  section .text  group text
// window base 0x1932a85f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A85F8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  _DWORD *v13; // r9

  __imp_KERNEL32.dll!SetLastError();
  __imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v7, a2: v8, a3: v5, a4: v6);
  result = sub_1932A8158(a1: v10, a2: v11, a3: v9, a4);
  *v13 = result;
  return result;
}
