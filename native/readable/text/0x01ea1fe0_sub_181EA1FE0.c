// sub_1EA1FE0
// rva 0x01ea1fe0  size 118  section .text  group text
// window base 0x181ea1fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1EA1FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  _QWORD *result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // rdx
  _BYTE v10[8]; // [rsp+10h] [rbp-18h] BYREF
  _BYTE *v11; // [rsp+18h] [rbp-10h]
  unsigned __int64 v12; // [rsp+20h] [rbp-8h]

  v10[0] = 0;
  v12 = a5;
  v11 = v10;
  result = (_QWORD *)sub_1EA16C0(a1, a2, a3: a5, a4, a5: v10);
  if ( a3 == v5 )
    JUMPOUT(0x303D2C015LL);
  *result = (unsigned int)(a3 - v5);
  v7 = *(unsigned int *)(a3 + 32);
  for ( i = 8; v7 > i; i += 8LL )
    result[i / 8] = 0;
  return result;
}
