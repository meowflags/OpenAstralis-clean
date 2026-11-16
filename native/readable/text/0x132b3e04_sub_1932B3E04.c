// sub_132B3E04
// rva 0x132b3e04  size 205  section .text  group text
// window base 0x1932b3e04: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B3E04(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v17; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-2B0h]
  _DWORD v19[12]; // [rsp+20h] [rbp-298h] BYREF
  _DWORD v20[148]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v21; // [rsp+2A0h] [rbp-18h]

  if ( (unsigned int)__imp_KERNEL32.dll!GetFileAttributesExW(a1: a4, a2: 0xFFFFFFFFLL, a3: 0, a4, a5: v19) != 0 )
  {
    v6 = sub_132B3ED4(a1: v4, a2: v5, a3: v19[0], a4: v4);
    if ( v6 == (_DWORD)v9 && (unsigned int)__imp_KERNEL32.dll!GetLastError(a1: v8) == 1920 )
      sub_132B3F1C(a1: v8, a2: v9, a3: v7, a4: v8, a5: v10, a6: v11, a7: v17, a8: v18);
  }
  else
  {
    v12 = __imp_KERNEL32.dll!GetLastError(a1: v4);
    if ( v12 == 32 || v12 == 5 )
    {
      v9 = __imp_KERNEL32.dll!FindFirstFileW(a1: v8, a2: v9, a3: v20, a4: v8);
      if ( v9 != -1 )
      {
        sub_132B3ED4(a1: v8, a2: v9, a3: v20[0], a4: v8);
        __imp_KERNEL32.dll!FindClose(a1: v14, a2: v15, a3: v13, a4: v15);
      }
    }
  }
  return sub_132C8DE0(a1: v8, a2: v9, a3: v7, a4: (unsigned __int64)&v17 ^ v21, a5: v10, a6: v11);
}
