// sub_1EAADE0
// rva 0x01eaade0  size 174  section .text  group text
// window base 0x181eaade0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAADE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v13; // [rsp+10h] [rbp-8h]

  v5 = sub_1E7ECC0(a1, a2, a3: v4 + 376612536, a4, a5: 0x80000, a6: 0x80000);
  *(_QWORD *)v5 = 0x80000;
  *(_QWORD *)(v5 + 32) = 2112;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 376654976);
  *(_DWORD *)(v5 + 44) = 0;
  *(_BYTE *)(v5 + 48) = 0;
  v13 = v5;
  sub_1EAB1E0(a1: v6, a2: v7, a3: v5);
  if ( *(_DWORD *)(a3 + 4) != 0 )
  {
    sub_1E9FB20(a1: v9, a2: v10, a3: v4 + 376654552, a4: v8, a5: v13);
    return v13;
  }
  else
  {
    sub_276EFE0();
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
    return sub_1EAAEA0();
  }
}
