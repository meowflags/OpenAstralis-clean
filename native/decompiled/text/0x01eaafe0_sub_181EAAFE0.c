// sub_181EAAFE0
// rva 0x01eaafe0  size 147  section .text  group text
// window base 0x181eaafe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_181EAAFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 i; // rdx
  _QWORD *v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+30h] [rbp-8h]

  v13 = *(unsigned int *)(a5 + 32);
  v6 = (_QWORD *)sub_181EAAB80(a1, a2, a3: v5 + 376657424, a4, a5: v13);
  if ( a5 == v5 )
    JUMPOUT(0x303D35015LL);
  *v6 = ((_DWORD)a5 - (_DWORD)v5) | 2u;
  for ( i = 8; v13 > i; i += 8LL )
    v6[i / 8] = 0;
  v11 = v6;
  sub_181EAB080(a1: v7, a2: v8, a3: v6, a4: v13, a5: v13);
  return v11;
}
