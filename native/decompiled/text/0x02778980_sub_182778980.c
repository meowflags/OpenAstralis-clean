// sub_182778980
// rva 0x02778980  size 169  section .text  group text
// window base 0x182778980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_182778980(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-28h]
  unsigned int v8; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(v3 + 376242736) != 0 )
  {
    v8 = MEMORY[0x10E44510];
    v7 = (unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))MEMORY[0x10E44930];
    if ( (unsigned int)MEMORY[0x10E44930](a1: MEMORY[0x10E44AA0], a2: MEMORY[0x10E44930], a3, a4: MEMORY[0x10E44AA0]) != 0 )
    {
      if ( v7(a1: v4, a2: v7, a3: *(_QWORD *)(v3 + 376181296), a4: v8) != 0 )
        return;
    }
    else
    {
      MEMORY[0x1828C1C40](a1: v4, a2: v5, a3: v3 + 366622808);
    }
    MEMORY[0x1828C1C40](a1: v6, a2: v3 + 366622808, a3: v3 + 366622808);
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
    sub_182778A40();
  }
}
