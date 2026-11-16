// sub_184F23A60
// rva 0x04f23a60  size 262  section .text  group text
// window base 0x184f23a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F23A60(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, __int64, __int64, __int64); // r10
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  _BYTE v15[40]; // [rsp+0h] [rbp-58h] BYREF
  char v16; // [rsp+28h] [rbp-30h] BYREF
  void *v17; // [rsp+30h] [rbp-28h]
  _BYTE *v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]
  unsigned int v20; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v3 + 8) )
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
    return sub_184F23B80();
  }
  else
  {
    if ( *(_QWORD *)v3 == 0 )
    {
      v14 = *(_QWORD *)(v2 + 376351984);
      if ( v14 == 0 )
      {
        v14 = v2 + 373388464;
        *(_QWORD *)(v2 + 376351984) = v2 + 373388464;
      }
      *(_QWORD *)v3 = v14;
    }
    v20 = MEMORY[0x18206D7A0](a1, a2, a3: 16);
    v6 = MEMORY[0x18206CE60](a1: v4, a2: v5, a3: v2 + 36253608);
    v17 = nullptr;
    v18 = nullptr;
    v19 = *(_QWORD *)(v3 + 56);
    *(_QWORD *)(v3 + 56) = &v16;
    v7 = (void (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0xE677AF0];
    v17 = &loc_184F23ACF;
    v18 = v15;
    *(_DWORD *)(v3 + 20) = 3;
    v7(a1: v8, a2: v9, a3: v6, a4: v3);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v3 + 20), 3, 1) == 3 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
    else
      MEMORY[0x18277F4A0](a1: v11, a2: v12, a3: 1, a4: v10, a5: 1);
    MEMORY[0x18206CDE0](a1: v11, a2: v12, a3: v20);
    result = MEMORY[0x18206CE20]();
    if ( *(int *)(v3 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
