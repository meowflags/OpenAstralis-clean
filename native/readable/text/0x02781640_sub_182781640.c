// sub_2781640
// rva 0x02781640  size 90  section .text  group text
// window base 0x182781640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2781640(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi

  v4 = *(unsigned int *)(v3 + 376351692);
  v5 = v3 + 350570536;
  if ( (_DWORD)v4 == 0 )
  {
    while ( 1 )
LABEL_4:
      sub_28C1C40(a1, a2, a3: v5);
  }
  result = ((__int64 (*)(void))(v2 + *(_QWORD *)(v3 + 8LL * (*(_DWORD *)(v3 + 8 * v4) >> 3) + 136)))();
  if ( (_DWORD)result == 0 )
  {
    sub_28C1C40(a1: v7, a2: v8, a3: v3 + 350570536);
    goto LABEL_4;
  }
  return result;
}
