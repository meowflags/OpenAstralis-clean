// sub_132B57D4
// rva 0x132b57d4  size 80  section .text  group text
// window base 0x1932b57d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B57D4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = *(int *)(a3 + 16);
  v5 = a4;
  v7 = *(_QWORD *)(a3 + 8 * result);
  if ( v7 != -1 )
    result = __imp_KERNEL32.dll!CloseHandle(a1: v5, a2, a3, a4: v7);
  if ( (_DWORD)v5 != 0 )
  {
    result = (unsigned int)-*(_DWORD *)(a3 + 16);
    v8 = *(_QWORD *)((*(_DWORD *)(a3 + 16) == 0 ? 8 : 0) + a3);
    if ( v8 != -1 )
      return __imp_KERNEL32.dll!CloseHandle(a1: v5, a2, a3, a4: v8);
  }
  return result;
}
