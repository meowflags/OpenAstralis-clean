// sub_132B3D7C
// rva 0x132b3d7c  size 133  section .text  group text
// window base 0x1932b3d7c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B3D7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  v5 = __imp_KERNEL32.dll!CreateFileW(a1, a2, a3: 128, a4, a5: 7, a6: 0);
  if ( v5 == -1 )
    return 0;
  v8 = __imp_KERNEL32.dll!GetFileInformationByHandle(a1: v5, a2: v6, a3, a4: v5);
  v10 = __imp_KERNEL32.dll!GetLastError(a1: v9);
  if ( (unsigned int)__imp_KERNEL32.dll!CloseHandle(a1: v12, a2: v10, a3: v11, a4: v12) != 0 )
    __imp_KERNEL32.dll!SetLastError(a1: v14, a2: v15, a3: v13, a4: (unsigned int)v15);
  return v8;
}
