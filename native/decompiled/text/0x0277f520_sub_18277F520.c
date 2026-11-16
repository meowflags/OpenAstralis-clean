// sub_18277F520
// rva 0x0277f520  size 214  section .text  group text
// window base 0x18277f520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277F520(__int64 a1, __int64 a2, signed __int32 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+8h] [rbp-30h] BYREF
  void *v13; // [rsp+10h] [rbp-28h]
  __int64 *v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-8h]
  signed __int32 v17; // [rsp+34h] [rbp-4h]

  v17 = a3;
  v16 = a5;
  if ( *(_DWORD *)(v6 + 20) == 1 )
  {
    v13 = nullptr;
    v14 = nullptr;
    v15 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v12;
    v13 = &loc_18277F593;
    v14 = &v11;
    *(_DWORD *)(v6 + 20) = 3;
    sub_18277F600();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    else
      sub_18277F4A0(a1: v7, a2: v8, a3: 1, a4: v10, a5: 1u);
    return MEMORY[0x18207FC60](a1: v7, a2: v8, a3: v5 + 376668752);
  }
  if ( a5 != 0 )
  {
    sub_18277F600();
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, v17) == 3 )
      return MEMORY[0x18207FC60](a1: v7, a2: v8, a3: v5 + 376668752);
  }
  else
  {
    MEMORY[0x1828C1C40](a1, a2, a3: v5 + 361300432);
  }
  MEMORY[0x1828C1C40](a1: v7, a2: v8, a3: v5 + 366584096);
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
  return sub_18277F600();
}
