// sub_181EC2EA0
// rva 0x01ec2ea0  size 109  section .text  group text
// window base 0x181ec2ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  char v21; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-Ch]
  int v23; // [rsp+10h] [rbp-8h]
  unsigned int v24; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v21);
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
    return sub_181EC2F20(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    v24 = a5;
    v23 = a3;
    v9 = sub_181EC2F20(a1, a2, a3, a4, a5: 32, a6: -1, a7: v21);
    if ( v9 == -1 )
    {
      v22 = 0xFFFFFFFF;
      result = v7;
    }
    else
    {
      v22 = v9;
      result = MEMORY[0x181E63CC0](a1: v12, a2: v13, a3: v7 + 376659136, a4: v11, a5: v9, a6: v24);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v12, a2: v13, a3: v10, a4: v22);
  }
  return result;
}
