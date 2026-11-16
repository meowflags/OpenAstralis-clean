// Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_initialize
// rva 0x132b73c0  size 178  section .text  group text
// window base 0x1932b73c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall Java_sun_util_locale_provider_HostLocaleProviderAdapterImpl_initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax

  v3 = 1;
  if ( __imp_KERNEL32.dll!GetModuleHandleA != 0 )
  {
    v19 = __imp_KERNEL32.dll!GetProcAddress;
  }
  else
  {
    v4 = __imp_KERNEL32.dll!GetModuleHandleA(a1, a2, a3, a4: 544976);
    __imp_KERNEL32.dll!GetProcAddress = __imp_KERNEL32.dll!GetModuleHandleA(a1: v5, a2: v6, a3: 544960, a4: v4);
    v10 = __imp_KERNEL32.dll!GetProcAddress(a1: v8, a2: v9, a3: v7, a4: 544976);
    MEMORY[0x337f60]/* 0x337f60 */ = MEMORY[0x79738]/* 0x79738 */(a1: v11, a2: v12, a3: 544992, a4: v10);
    v16 = MEMORY[0x79748]/* 0x79748 */(a1: v14, a2: v15, a3: v13, a4: 544976);
    v19 = MEMORY[0x79738]/* 0x79738 */(a1: v17, a2: v18, a3: 545016, a4: v16);
    MEMORY[0x337f58]/* 0x337f58 */ = v19;
    MEMORY[0x337688]/* 0x337688 */ = 1;
  }
  if ( MEMORY[0x337f68]/* 0x337f68 */ == 0 || MEMORY[0x337f60]/* 0x337f60 */ == 0 || v19 == 0 )
    return 0;
  return v3;
}
