// sub_181E9EBA0
// rva 0x01e9eba0  size 108  section .text  group text
// window base 0x181e9eba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9EBA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  v4 = 8LL * *(unsigned int *)(v3 + 58177844);
  if ( v4 != 0 )
    v4 += v3;
  if ( *(_QWORD *)(v3 + 376612552) <= a3 )
    JUMPOUT(0x303D28BD9LL);
  if ( v4 > a3 )
    return 0;
  v5 = 8LL * *(unsigned int *)(v3 + 58177848);
  if ( v5 != 0 )
    v5 += v3;
  if ( a3 <= v5 )
    JUMPOUT(0x303D28C03LL);
  return 0;
}
