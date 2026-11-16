// sub_181E9A920
// rva 0x01e9a920  size 102  section .text  group text
// window base 0x181e9a920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9A920(int a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  double v8; // xmm0_8
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v6 + 8) )
  {
    v11 = a5;
    v10 = a3;
    v8 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E9A9A0(a1: v8);
  }
  else
  {
    result = *(unsigned int *)(v6 + 300);
    if ( (_DWORD)result == 0 )
      goto LABEL_4;
    do
    {
      v10 = a3;
      v11 = a5;
      result = sub_181EBC9A0();
LABEL_4:
      v11 = a5;
      v10 = a3;
    }
    while ( *(_DWORD *)(v6 + 324) != 0 );
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
