// sub_181EC2DA0
// rva 0x01ec2da0  size 109  section .text  group text
// window base 0x181ec2da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  char v14; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-Ch]
  int v16; // [rsp+10h] [rbp-8h]
  unsigned int v17; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
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
    return sub_181EC2E20();
  }
  else
  {
    v17 = a5;
    v16 = a3;
    v8 = sub_181EC2F20(a1, a2, a3, a4, a5: 16, a6: -1, a7: v14);
    if ( v8 == -1 )
    {
      v15 = 0xFFFFFFFF;
      result = v6;
    }
    else
    {
      v15 = v8;
      result = MEMORY[0x181E63CC0](a1: v11, a2: v12, a3: v6 + 376659136, a4: v10, a5: v8, a6: v17);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v11, a2: v12, a3: v9, a4: v15);
  }
  return result;
}
