// Java_com_sun_management_internal_OperatingSystemImpl_getTotalSwapSpaceSize0
// rva 0x132af468  size 61  section .text  group text
// window base 0x1932af468: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_com_sun_management_internal_OperatingSystemImpl_getTotalSwapSpaceSize0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  int v10[6]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v10[0] = 64;
  __imp_KERNEL32.dll!GlobalMemoryStatusEx(a1, a2, a3, a4: v10);
  return sub_132C8DE0(a1: v4, a2: v5, a3: v3, a4: (unsigned __int64)&v9 ^ v11, a5: v6, a6: v7);
}
