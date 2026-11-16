// sub_181E9CD00
// rva 0x01e9cd00  size 116  section .text  group text
// window base 0x181e9cd00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9CD00(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r8
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
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
    return sub_181E9CD80();
  }
  else
  {
    result = *(_QWORD *)(v8 + 40);
    v10 = result + 16;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      return sub_181E9CD47(a1, a2, a3, a4: 35803056, a5: v10, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10;
      *(_QWORD *)result = 35803056;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        v12 = a3;
        return MEMORY[0x18277F280](a1, a2, a3, a4: 35803056);
      }
    }
  }
  return result;
}
