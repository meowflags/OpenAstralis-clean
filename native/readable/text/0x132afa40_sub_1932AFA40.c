// sub_132AFA40
// rva 0x132afa40  size 135  section .text  group text
// window base 0x1932afa40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AFA40(__int64 a1, _DWORD a2, __int64 a3, _QWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi

  v10 = __imp_KERNEL32.dll!GetTickCount64(a1, a2: a6);
  if ( (unsigned __int64)(v10 - a4[1]) > 0x1F4 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetSystemInfo(a1: v10, a2: v11, a3: v9, a4: *a4) != 0 )
      return 0xFFFFFFFFLL;
    a4[1] = v10;
  }
  return (unsigned int)__imp_api-ms-win-crt-convert-l1-1-0.dll!_itoa(a1: v10, a2: v11, a3: (unsigned int)v11, a4: a3, a5: 0, a6: a5) != 0
       ? 0xFFFFFFFE
       : 0;
}
