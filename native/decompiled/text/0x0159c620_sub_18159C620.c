// sub_18159C620
// rva 0x0159c620  size 249  section .text  group text
// window base 0x18159c620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159C620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  signed __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18159C720();
  }
  else if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v6 + 376613408), 0, v7) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0;
  }
  else
  {
    v8 = v6 + 376613328;
    *(_DWORD *)(v6 + 376613336) = 47076515;
    if ( (*(_DWORD *)(v6 + 376613328) & 2) != 0 )
    {
      v11 = v8 & 0xFFFFFFFFFFF80000LL;
      v12 = (v8 - ((v8 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
      if ( *(_BYTE *)(v11 + v12 + 56) != 0 )
        *(_BYTE *)(v11 + v12 + 56) = 0;
    }
    v17 = a4;
    v16 = a2;
    v15 = a1;
    v14 = a6;
    v9 = sub_1815A85E0(a1, a2, a3: v6 + 376613360, a4, a5: 0);
    *(_QWORD *)(v9 + 16) = v14;
    *(_QWORD *)v9 = v15;
    *(_QWORD *)(v9 + 8) = v16;
    *(_BYTE *)(v9 + 24) = v17;
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
}
