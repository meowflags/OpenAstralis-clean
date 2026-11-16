// sub_1EA1400
// rva 0x01ea1400  size 97  section .text  group text
// window base 0x181ea1400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1EA1400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  _QWORD *result; // rax
  char *v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx

  result = *(_QWORD **)(v6 + 40);
  v8 = (char *)result + a5;
  if ( (unsigned __int64)v8 > *(_QWORD *)(v6 + 32) )
    return (_QWORD *)v5;
  *(_QWORD *)(v6 + 40) = v8;
  if ( a3 == v5 )
    JUMPOUT(0x303D2B422LL);
  *result = (unsigned int)(a3 - v5);
  v9 = *(unsigned int *)(a3 + 32);
  for ( i = 8; v9 > i; i += 8LL )
    result[i / 8] = 0;
  return result;
}
