// sub_181E8E060
// rva 0x01e8e060  size 275  section .text  group text
// window base 0x181e8e060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8E060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  v6 = *(unsigned int *)(a5 + 40);
  v7 = v5 + 8 * v6;
  if ( *(_BYTE *)(v5 + 376654992) != 0 )
  {
    v16 = v5 + 8 * v6;
    v17 = a5;
    return sub_181E9D660(a1, a2, a3: v17, a4, a5: v16, a6: v5 + 376653896);
  }
  if ( (_DWORD)v6 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_12;
  }
  v9 = *(unsigned int *)(v5 + 376654972);
  if ( (_DWORD)v9 == 0 )
  {
LABEL_12:
    MEMORY[0x18276EFE0]();
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(v5 + 8 * v9) >> 3;
  v11 = *(_DWORD *)(v5 + 8 * v10 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v5 + 8 * v10 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 8 * v10 + 20) + 4 * v11 + 12) != 519 )
  {
LABEL_13:
    MEMORY[0x18276EDE0]();
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
    return sub_181E8E180(a1: v14, a2: v15, a3: v13);
  }
  v12 = (unsigned int)(*(_DWORD *)(v5 + 8 * v9 + 16) + 1);
  if ( (int)v12 <= *(_DWORD *)(v5 + 8 * v6 + 48) + 1 )
    return sub_181E9D660(a1, a2: v11, a3: a5, a4: v12, a5: v7, a6: v5 + 376653896);
  v16 = v5 + 8 * v6;
  v17 = a5;
  result = sub_181EA7500(a1, a2: v11, a3: v5 + 376652784, a4: a5, a5, a6: v7);
  if ( (_DWORD)result == 0 )
  {
    *(_BYTE *)(v5 + 376652620) = 1;
    return sub_181E9D660(a1, a2, a3: v17, a4, a5: v16, a6: v5 + 376653896);
  }
  return result;
}
