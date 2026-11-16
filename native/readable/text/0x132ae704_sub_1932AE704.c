// sub_132AE704
// rva 0x132ae704  size 186  section .text  group text
// window base 0x1932ae704: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AE704(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+0h] [rbp-158h] BYREF
  int v23; // [rsp+20h] [rbp-138h] BYREF
  __int128 v24; // [rsp+24h] [rbp-134h]
  __int16 v25; // [rsp+34h] [rbp-124h]
  _BYTE v26[254]; // [rsp+36h] [rbp-122h] BYREF
  __int64 v27; // [rsp+134h] [rbp-24h]
  __int64 v28; // [rsp+140h] [rbp-18h]

  v23 = 284;
  v25 = 0;
  v24 = 0;
  sub_1932CA161(a1, a2, a3: 0, a4: v26, a5: 254);
  LOBYTE(v2) = 3;
  v27 = 0;
  v5 = __imp_KERNEL32.dll!VerSetConditionMask(a1: v3, a2: v4, a3: 2, a4: 0, a5: v2);
  LOBYTE(v6) = 3;
  v9 = __imp_KERNEL32.dll!VerSetConditionMask(a1: v7, a2: v8, a3: 1, a4: v5, a5: v6);
  LOBYTE(v10) = 3;
  v13 = __imp_KERNEL32.dll!VerSetConditionMask(a1: v11, a2: v12, a3: 4, a4: v9, a5: v10);
  *(_QWORD *)&v24 = 10;
  DWORD2(v24) = 16299;
  __imp_KERNEL32.dll!VerifyVersionInfoW(a1: v14, a2: v15, a3: 7, a4: &v23, a5: v13);
  return sub_132C8DE0(a1: v17, a2: v18, a3: v16, a4: (unsigned __int64)&v22 ^ v28, a5: v19, a6: v20);
}
