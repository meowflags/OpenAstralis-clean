// sub_181E60200
// rva 0x01e60200  size 62  section .text  group text
// window base 0x181e60200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E60200(__int64 a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v5; // rax

  if ( a2 != 0 || v3 != *(_QWORD *)(v2 + 376351704) )
    return 0;
  v5 = *(unsigned int *)(v2 + 376351692);
  if ( (_DWORD)v5 != 0 )
  {
    if ( *(_DWORD *)(v2 + 8 * v5 + 4) == 0 )
    {
      MEMORY[0x18276EFE0]();
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  MEMORY[0x18276EFE0]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181E60240();
}
