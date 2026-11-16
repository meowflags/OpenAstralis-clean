// sub_132BDD9C
// rva 0x132bdd9c  size 199  section .text  group text
// window base 0x1932bdd9c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BDD9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+0h] [rbp-668h] BYREF
  _BYTE *v16; // [rsp+20h] [rbp-648h]
  int v17; // [rsp+28h] [rbp-640h]
  __int64 v18; // [rsp+30h] [rbp-638h]
  _BYTE v19[512]; // [rsp+40h] [rbp-628h] BYREF
  _BYTE v20[1024]; // [rsp+240h] [rbp-428h] BYREF
  __int64 v21; // [rsp+640h] [rbp-28h]

  v18 = 0;
  v17 = 500;
  v19[0] = 0;
  v16 = v19;
  v20[0] = 0;
  if ( (unsigned int)__imp_KERNEL32.dll!FormatMessageA(a1: a4, a2: a3, a3: 0, a4: 4096, a5, a6: 0) == 0 )
    sub_1932CA27B(a1: v5, a2: v6, a3: 545504, a4: v19);
  v16 = v19;
  sub_1329EDE0(a1: v5, a2: v6, a3: 1024, a4: (__int64)v20, a5: 545544);
  JNU_ThrowByName(a1: v7, a2: v8, a3: v8, a4: v7, a5: (__int64)v20);
  return sub_132C8DE0(a1: v10, a2: v11, a3: v9, a4: (unsigned __int64)&v15 ^ v21, a5: v12, a6: v13);
}
