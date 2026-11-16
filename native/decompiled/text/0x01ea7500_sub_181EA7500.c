// sub_181EA7500
// rva 0x01ea7500  size 125  section .text  group text
// window base 0x181ea7500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA7500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+18h] [rbp-10h]

  if ( (unsigned int)sub_181EA47E0(a1) == 0 )
    return 0;
  v10 = *(unsigned int *)(a6 + 48);
  v11 = (unsigned int)(*(_DWORD *)(a6 + 48) + 1);
  if ( (unsigned int)v10 >= 0xF )
  {
    MEMORY[0x18276F0E0](a1: v8, a2: v9, a3: v7, a4: v11, a5);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181EA7580(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17);
  }
  else
  {
    HIDWORD(v21) = *(_DWORD *)(a6 + 48) + 1;
    v19 = v6 + 8LL * *(unsigned int *)(v6 + 4 * v10 + 376654108);
    sub_181E9D660(a1: v8, a2: v9, a3: a5, a4: v11, a5: a6, a6: v19, a7: v18, a8: v19, a9: a6, a10: v21);
    return 1;
  }
}
