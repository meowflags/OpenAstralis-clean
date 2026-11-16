// sub_184F23BC0
// rva 0x04f23bc0  size 280  section .text  group text
// window base 0x184f23bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F23BC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // r10
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[40]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+30h] [rbp-38h] BYREF
  void *v25; // [rsp+38h] [rbp-30h]
  _BYTE *v26; // [rsp+40h] [rbp-28h]
  __int64 v27; // [rsp+48h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-10h]
  unsigned int v29; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v22 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F23CE0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21);
  }
  else
  {
    if ( *(_QWORD *)v4 == 0 )
    {
      v15 = *(_QWORD *)(v3 + 376351984);
      if ( v15 == 0 )
      {
        v15 = v3 + 373388464;
        *(_QWORD *)(v3 + 376351984) = v3 + 373388464;
      }
      *(_QWORD *)v4 = v15;
    }
    v23 = a3;
    v29 = MEMORY[0x18206D7A0](a1, a2, a3: 16);
    v7 = MEMORY[0x18206CE60](a1: v5, a2: v6, a3: v23);
    v25 = nullptr;
    v26 = nullptr;
    v27 = *(_QWORD *)(v4 + 56);
    *(_QWORD *)(v4 + 56) = &v24;
    v8 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0xE677DB8];
    v25 = &loc_184F23C31;
    v26 = v22;
    *(_DWORD *)(v4 + 20) = 3;
    v28 = v8(a1: v9, a2: v10, a3: v7, a4: v4);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v4 + 20), 3, 1) == 3 )
      *(_QWORD *)(v4 + 56) = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
    else
      MEMORY[0x18277F4A0](a1: v12, a2: v13, a3: 1, a4: v11, a5: 1);
    MEMORY[0x18206CDE0](a1: v12, a2: v13, a3: v29);
    MEMORY[0x18206CE20]();
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v28;
  }
}
