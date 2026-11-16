// sub_132AF6C0
// rva 0x132af6c0  size 275  section .text  group text
// window base 0x1932af6c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AF6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax

  __imp_KERNEL32.dll!GetProcAddress = __imp_KERNEL32.dll!GetProcAddress(a1, a2, a3: 542216, a4);
  __imp_KERNEL32.dll!GetProcAddress = __imp_KERNEL32.dll!GetProcAddress(a1: v5, a2: v6, a3: 542232, a4);
  __imp_KERNEL32.dll!GetProcAddress = __imp_KERNEL32.dll!GetProcAddress(a1: v7, a2: v8, a3: 542248, a4);
  __imp_KERNEL32.dll!GetProcAddress = __imp_KERNEL32.dll!GetProcAddress(a1: v9, a2: v10, a3: 542264, a4);
  MEMORY[0x337568]/* 0x337568 */ = MEMORY[0x79738]/* 0x79738 */(a1: v11, a2: v12, a3: 542288, a4);
  MEMORY[0x337570]/* 0x337570 */ = MEMORY[0x79738]/* 0x79738 */(a1: v13, a2: v14, a3: 542320, a4);
  MEMORY[0x337578]/* 0x337578 */ = MEMORY[0x79738]/* 0x79738 */(a1: v15, a2: v16, a3: 542344, a4);
  v19 = MEMORY[0x79738]/* 0x79738 */(a1: v17, a2: v18, a3: 542368, a4);
  sub_337580 = v19;
  if ( MEMORY[0x337548]/* 0x337548 */ != 0
    && MEMORY[0x337550]/* 0x337550 */ != 0
    && MEMORY[0x337558]/* 0x337558 */ != 0
    && MEMORY[0x337560]/* 0x337560 */ != 0
    && MEMORY[0x337568]/* 0x337568 */ != 0
    && MEMORY[0x337570]/* 0x337570 */ != 0
    && MEMORY[0x337578]/* 0x337578 */ != 0 )
  {
    return (unsigned int)(v19 != 0) - 1;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
