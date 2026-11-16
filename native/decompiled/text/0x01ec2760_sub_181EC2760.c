// sub_181EC2760
// rva 0x01ec2760  size 117  section .text  group text
// window base 0x181ec2760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // r9d
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
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
    return sub_181EC27E0();
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 8);
    if ( v8 == -1 )
    {
      v12 = a5;
      v11 = a3;
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v6;
    }
    else
    {
      v11 = a3;
      v12 = a5;
      result = MEMORY[0x181E63880](a1, a2, a3: v6 + 376659136, a4, a5: v8, a6: a5);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
  }
  return result;
}
