// sub_182780DE0
// rva 0x02780de0  size 411  section .text  group text
// window base 0x182780de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int (__fastcall *v3)(__int64, _QWORD, __int64, __int64, __int64); // rsi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  __int64 v8; // rtt
  __int64 v9; // rtt
  signed __int64 v10; // rax
  unsigned int (__fastcall *v12)(__int64, _QWORD, __int64, __int64, __int64); // [rsp+60h] [rbp-8h]

  MEMORY[0x18207FBE0](a1, a2, a3: v2 + 376669024);
  v3 = (unsigned int (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))MEMORY[0x10E44DE0];
  v12 = (unsigned int (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))MEMORY[0x10E44DE0];
  v4 = v2 + 376665424;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 376181352);
    if ( (v7 & 0x4000000000000000LL) == 0 && (v7 & 0x3FFFFFFF80000000LL) == 0 )
    {
      v8 = *(_QWORD *)(v2 + 376181352);
      if ( v8 == __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v7, v7 + 1) )
        break;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v2 + 376181352);
        if ( (v10 & 0x4000000000000000LL) != 0 || (v10 & 0x3FFFFFFF80000000LL) != 0 )
          break;
        v9 = *(_QWORD *)(v2 + 376181352);
        if ( v9 == __sync_val_compare_and_swap((volatile signed __int64 *)(v2 + 376181352), v10, v10 + 1) )
          return MEMORY[0x18207FCE0](a1: v4, a2: v3, a3: v2 + 376669024);
      }
    }
    *(_QWORD *)(v2 + 376669032) = 0;
    if ( v3(a1: v4, a2: v3, a3: v4 + 296, a4: v4 + 32, a5: 0xFFFFFFFFLL) == 0 )
      sub_1827860C0(a1: v5, a2: v6, a3: v2 + 367119432);
    *(_QWORD *)(v2 + 376669032) = 0xFFFFFFFFLL;
    v4 = v2 + 376665424;
    v3 = v12;
  }
  return MEMORY[0x18207FCE0](a1: v4, a2: v3, a3: v2 + 376669024);
}
