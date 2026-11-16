// sub_132B42F8
// rva 0x132b42f8  size 175  section .text  group text
// window base 0x1932b42f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_132B42F8(__int64 a1, _DWORD a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  BOOL v14; // r14d

  v4 = a3;
  v5 = __imp_KERNEL32.dll!GetFileAttributesW(a1, a2: a4, a3, a4);
  v8 = v5;
  if ( v5 == -1 )
    return true;
  if ( (v5 & 0x10) != 0 )
    return (unsigned int)__imp_KERNEL32.dll!RemoveDirectoryW(a1: v5, a2: v7, a3: v6, a4: v7) == 0;
  v10 = 0;
  if ( v4 != 0 && (v5 & 1) != 0 )
    v10 = __imp_KERNEL32.dll!SetFileAttributesW(a1: v5, a2: v7, a3: v5 & 0xFFFFFFFE, a4: v7);
  v11 = __imp_KERNEL32.dll!DeleteFileW(a1: v8, a2: v7, a3: v6, a4: v7);
  v14 = v11 == 0;
  if ( v11 != 0 && v10 != 0 )
    __imp_KERNEL32.dll!SetFileAttributesW(a1: v12, a2: v13, a3: (unsigned int)v12, a4: v13);
  return v14;
}
