// sub_181EC2E20
// rva 0x01ec2e20  size 115  section .text  group text
// window base 0x181ec2e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  unsigned int v17; // [rsp+10h] [rbp-8h]
  int v18; // [rsp+14h] [rbp-4h]

  v18 = a3;
  v16 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
    goto LABEL_6;
  }
  v8 = sub_181EC2F20(a1, a2, a3, a4, a5: 8, a6: -1, a7: v15);
  if ( v8 == -1 )
  {
LABEL_6:
    MEMORY[0x184F6B980](a1: v10, a2: v11, a3: v16);
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
    return sub_181EC2EA0();
  }
  v17 = v8;
  result = MEMORY[0x181E64480](a1: 0, a2: v11, a3: v6 + 376659136, a4: v9, a5: v16, a6: v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v13, a2: v14, a3: v17);
  return result;
}
