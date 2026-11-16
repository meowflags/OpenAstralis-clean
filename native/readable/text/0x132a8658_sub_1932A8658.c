// sub_132A8658
// rva 0x132a8658  size 170  section .text  group text
// window base 0x1932a8658: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A8658(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-1D8h] BYREF
  _BYTE v20[416]; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+1C0h] [rbp-18h]

  v2 = __imp_WS2_32.dll!#115(a1, a2, a3: v20, a4: 514);
  if ( v2 == 0 )
  {
    if ( (int)sub_132A8704() < 0 )
      return sub_132C8DE0(a1: v7, a2: v8, a3: v6, a4: (unsigned __int64)&v19 ^ v21, a5: v9, a6: v10);
    v12 = __imp_KERNEL32.dll!InitializeSRWLock(a1: v7, a2: v8, a3: 983043, a4: 3372248, a5: 0, a6: 0);
    if ( v12 == 0 )
    {
      sub_1932CA161(a1: v14, a2: v15, a3: 0, a4: 3372216, a5: 8);
      __imp_KERNEL32.dll!GetModuleHandleW(a1: v17, a2: v18, a3: v16, a4: 3372224);
      __imp_KERNEL32.dll!GetProcAddress = 1;
      return sub_132C8DE0(a1: v7, a2: v8, a3: v6, a4: (unsigned __int64)&v19 ^ v21, a5: v9, a6: v10);
    }
    v2 = MEMORY[0x3374b0]/* 0x3374b0 */(a1: v14, a2: v15, a3: v13, a4: v12);
  }
  sub_132A85F8(a1: v4, a2: v5, a3: v3, a4: v2);
  return sub_132C8DE0(a1: v7, a2: v8, a3: v6, a4: (unsigned __int64)&v19 ^ v21, a5: v9, a6: v10);
}
