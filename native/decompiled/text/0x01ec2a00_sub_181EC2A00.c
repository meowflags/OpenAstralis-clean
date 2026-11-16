// sub_181EC2A00
// rva 0x01ec2a00  size 205  section .text  group text
// window base 0x181ec2a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v12);
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
    return sub_181EC2AE0();
  }
  else
  {
    v8 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v8 == -1 )
    {
      v16 = a1;
      v15 = a6;
      v14 = a5;
      v13 = a3;
      result = *(_QWORD *)(v7 + 40);
      v10 = result + 16;
      v11 = 34601856;
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v7 + 32) )
      {
        result = sub_181EAA840(a1, a2: v8, a3: 34601856, a4, a5: 0);
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v10;
        *(_QWORD *)result = 34601856;
        *(_DWORD *)(result + 8) = 0;
        *(_DWORD *)(result + 12) = 0;
      }
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280](a1, a2: v8, a3: v10, a4, a5: v11);
    }
    else
    {
      v13 = a3;
      v14 = a5;
      v15 = a6;
      v16 = a1;
      result = MEMORY[0x181E63F80](
                 a1: (unsigned int)a6,
                 a2: (unsigned int)a1,
                 a3: v6 + 376659136,
                 a4,
                 a5,
                 a6: (unsigned int)v8);
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
  }
  return result;
}
