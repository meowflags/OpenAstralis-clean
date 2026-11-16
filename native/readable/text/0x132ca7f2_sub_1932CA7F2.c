// sub_132CA7F2
// rva 0x132ca7f2  size 80  section .text  group text
// window base 0x1932ca7f2: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132CA7F2(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = a3[9];
  if ( v4 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v4);
  v6 = a3[10];
  if ( v6 != 0 )
    result = sub_1932C97D0(a1, a2, a3, a4: v6);
  if ( a3[6] != 0 )
    result = __imp_ADVAPI32.dll!CryptDestroyHash();
  v7 = a3[7];
  if ( v7 != 0 )
    return __imp_ADVAPI32.dll!CryptReleaseContext(a1, a2, a3: 0, a4: v7);
  return result;
}
