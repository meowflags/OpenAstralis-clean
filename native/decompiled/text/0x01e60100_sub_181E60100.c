// sub_181E60100
// rva 0x01e60100  size 235  section .text  group text
// window base 0x181e60100: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E60100(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_181E60200();
  }
  else
  {
    v16 = v2 + 376613728;
    v15 = v2 + 376650936;
    MEMORY[0x185A9A080](a1, a2, a3: v2 + 376650936);
    v7 = *(_QWORD *)(v3 + 40);
    if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v3 + 32) )
    {
      v7 = MEMORY[0x181EAA920](a1: v5, a2: v6, a3: 40450464);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v7 + 24;
      *(_DWORD *)v7 = 40450464;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
    }
    v8 = v7;
    v9 = v16;
    v16 = v8;
    sub_181E600E0(a1: v5, a2: v6, a3: v9, a4: v4, a5: v8);
    MEMORY[0x185A98320](a1: v11, a2: v12, a3: v15, a4: v10, a5: 1);
    if ( *(int *)(v3 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v16;
  }
}
