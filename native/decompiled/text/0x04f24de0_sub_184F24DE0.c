// sub_184F24DE0
// rva 0x04f24de0  size 276  section .text  group text
// window base 0x184f24de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64); // r10
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rax
  _BYTE v19[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-38h]
  char v21; // [rsp+28h] [rbp-30h] BYREF
  void *v22; // [rsp+30h] [rbp-28h]
  _BYTE *v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-18h]
  unsigned int v25; // [rsp+50h] [rbp-8h]
  unsigned int v26; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)v19 <= *(_QWORD *)(v6 + 8) )
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
    return sub_184F24F00();
  }
  else
  {
    if ( *(_QWORD *)v6 == 0 )
    {
      v18 = *(_QWORD *)(v5 + 376351984);
      if ( v18 == 0 )
      {
        v18 = v5 + 373388464;
        *(_QWORD *)(v5 + 376351984) = v5 + 373388464;
      }
      *(_QWORD *)v6 = v18;
    }
    v26 = a5;
    v20 = a3;
    v25 = MEMORY[0x18206D7A0](a1, a2, a3: 16);
    v9 = MEMORY[0x18206CE60](a1: v7, a2: v8, a3: v20);
    v22 = nullptr;
    v23 = nullptr;
    v24 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v21;
    v10 = (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0xE6776D8];
    v11 = v26;
    v22 = &loc_184F24E5B;
    v23 = v19;
    *(_DWORD *)(v6 + 20) = 3;
    v10(a1: v12, a2: v13, a3: v9, a4: v6, a5: v11);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    else
      MEMORY[0x18277F4A0](a1: v15, a2: v16, a3: 1, a4: v14, a5: 1);
    MEMORY[0x18206CDE0](a1: v15, a2: v16, a3: v25);
    result = MEMORY[0x18206CE20]();
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
