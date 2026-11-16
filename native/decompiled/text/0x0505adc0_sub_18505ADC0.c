// sub_18505ADC0
// rva 0x0505adc0  size 171  section .text  group text
// window base 0x18505adc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505ADC0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    v12 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v5 = *a3 >> 3;
  v6 = *(_DWORD *)(v3 + 8 * v5 + 44);
  v7 = v3 + 8LL * *(unsigned int *)(v3 + 8 * v5 + 20);
  v8 = HIBYTE(v6);
  if ( (unsigned __int16)*(_DWORD *)(v7 + 4LL * (v6 & (0x597u >> SHIBYTE(v6))) + 12) != 1431 )
  {
LABEL_7:
    v12 = a3;
    MEMORY[0x182770780]();
  }
  else if ( *a3 >> 3 == 5414695 )
  {
    v9 = a3[3];
    v12 = a3;
    result = MEMORY[0x1853F42E0](a1, a2, a3: v9, a4: v8, a5: v3 + 377216080);
    if ( *(int *)(v4 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276FC00](a1, a2, a3, a4: v8, a5: v3 + 43317736);
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
  return sub_18505AE80();
}
