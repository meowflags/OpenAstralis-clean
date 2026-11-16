// sub_1932C5CC0
// rva 0x132c5cc0  size 155  section .text  group text
// window base 0x1932c5cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C5CC0(_DWORD a1, _DWORD a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx

  if ( (unsigned int)sub_1932C5EA0() != 0 )
    return 4294967294LL;
  v6 = *(_QWORD *)(v5 + 40);
  if ( v4 >= 0 )
  {
    v7 = ((unsigned int)a3 >> 4) + 5;
    if ( a3 < 48 )
      a3 &= 0xFu;
  }
  else
  {
    if ( v4 < -15 )
      return 4294967294LL;
    v7 = 0;
    a3 = -a3;
  }
  if ( a3 != 0 && (unsigned int)(a3 - 8) > 7 )
    return 4294967294LL;
  v8 = *(_QWORD *)(v6 + 64);
  if ( v8 != 0 && *(_DWORD *)(v6 + 48) != a3 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v5 + 56))(
      a1: v7,
      a2: v6,
      a3: v8,
      a4: *(_QWORD *)(v5 + 64));
    *(_QWORD *)(v6 + 64) = 0;
  }
  *(_DWORD *)(v6 + 16) = v7;
  *(_DWORD *)(v6 + 48) = a3;
  return sub_1932C5C94();
}
