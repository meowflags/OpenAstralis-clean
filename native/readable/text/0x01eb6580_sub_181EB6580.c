// sub_1EB6580
// rva 0x01eb6580  size 225  section .text  group text
// window base 0x181eb6580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB6580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+30h] [rbp-28h]
  _QWORD *v14; // [rsp+48h] [rbp-10h]

  v4 = MEMORY[0x11703820]/* 0x11703820 */(a1, a2, a3: 419, a4: 1);
  if ( v4 == 0 )
    return 3;
  v14 = (_QWORD *)((v4 + 63) & 0xFFFFFFFFFFFFFFC0LL);
  v14[33] = v4;
  v13 = v4 + 63;
  MEMORY[0x11703200]/* 0x11703200 */(a1: v5, a2: v6, a3: v4 + 63, a4: v14 + 10);
  MEMORY[0x11703588]/* 0x11703588 */(a1: v8, a2: v9, a3: v14 + 22, a4: v14 + 22);
  v14[32] = v14;
  if ( (v13 & 0xFFFFFFFFFFFFFFC0LL) == 0 )
    return 3;
  sub_2782F60(a1: v11, a2: v12, a3: v3 + 376658176, a4: v10, a5: 0);
  v14[26] = a3;
  return 0;
}
