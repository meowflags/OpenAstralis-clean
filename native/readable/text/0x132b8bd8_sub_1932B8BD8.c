// sub_132B8BD8
// rva 0x132b8bd8  size 101  section .text  group text
// window base 0x1932b8bd8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8BD8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int16 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+22h] [rbp-16h]
  __int16 v14; // [rsp+26h] [rbp-12h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  v13 = 6029370;
  v12 = a4 + 64;
  v14 = 0;
  if ( (unsigned int)__imp_KERNEL32.dll!GetDriveTypeW(a1, a2, a3, a4: &v12) >= 2 )
    __imp_api-ms-win-crt-environment-l1-1-0.dll!_wgetdcwd(a1: v6, a2: v7, a3: 0, a4, a5: 260);
  return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v11 ^ v15, a5: v8, a6: v9);
}
