// sub_1EB8760
// rva 0x01eb8760  size 87  section .text  group text
// window base 0x181eb8760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB8760(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  result = *(_QWORD *)(v3 + 232);
  v5 = *(_QWORD *)(v3 + 240);
  if ( result != 0 && v5 != 0 && result - v5 > a3 )
  {
    v6 = result - a3;
    *(_QWORD *)(v3 + 240) = v6;
    result = v6 + 40960;
    *(_QWORD *)(v3 + 8) = result;
    *(_DWORD *)(v3 + 320) = 1;
  }
  return result;
}
