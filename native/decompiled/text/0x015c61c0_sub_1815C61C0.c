// sub_1815C61C0
// rva 0x015c61c0  size 208  section .text  group text
// window base 0x1815c61c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C61C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]
  __int64 v14; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
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
    return sub_1815C62A0();
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v7 + 32) > *(_QWORD *)(v6 + 32) )
    {
      v14 = a6;
      v13 = a5;
      v12 = a3;
      v7 = MEMORY[0x181EAA920](a1: v7, a2, a3: 35847624);
      a6 = v14;
      a5 = v13;
      v8 = v12;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v7 + 32;
      *(_DWORD *)v7 = 35847624;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      v8 = a3;
    }
    v11 = v7;
    v12 = v8;
    v13 = a5;
    v14 = a6;
    MEMORY[0x18B3759C0](a1: a6, a2, a3: v7, a4: v13, a5: v8, a6: v13);
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v11;
  }
}
