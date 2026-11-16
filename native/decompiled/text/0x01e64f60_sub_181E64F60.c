// sub_181E64F60
// rva 0x01e64f60  size 62  section .text  group text
// window base 0x181e64f60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)v8 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    JUMPOUT(0x181E64FA0LL);
  }
  v8[4] = a3;
  v8[3] = a5;
  v8[2] = a6;
  result = MEMORY[0x181E652E0](a1, a2, a3: a5, a4, a5: a6);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
