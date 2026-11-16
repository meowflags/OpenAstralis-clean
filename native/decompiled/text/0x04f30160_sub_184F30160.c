// sub_184F30160
// rva 0x04f30160  size 296  section .text  group text
// window base 0x184f30160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F30160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64, __int64); // r10
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // rax
  _BYTE v21[32]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+30h] [rbp-38h] BYREF
  void *v25; // [rsp+38h] [rbp-30h]
  _BYTE *v26; // [rsp+40h] [rbp-28h]
  __int64 v27; // [rsp+48h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-10h]
  unsigned int v29; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v21 <= *(_QWORD *)(v6 + 8) )
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
    return sub_184F302A0();
  }
  else
  {
    if ( *(_QWORD *)v6 == 0 )
    {
      v20 = *(_QWORD *)(v5 + 376351984);
      if ( v20 == 0 )
      {
        v20 = v5 + 373388464;
        *(_QWORD *)(v5 + 376351984) = v5 + 373388464;
      }
      *(_QWORD *)v6 = v20;
    }
    v23 = a5;
    v22 = a3;
    v29 = MEMORY[0x18206D7A0](a1, a2, a3: 16);
    v28 = MEMORY[0x18206CE60](a1: v7, a2: v8, a3: v22);
    v11 = MEMORY[0x18206CE60](a1: v9, a2: v10, a3: v23);
    v12 = v28;
    v25 = nullptr;
    v26 = nullptr;
    v27 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v24;
    v13 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0xE677A40];
    v25 = &loc_184F301EA;
    v26 = v21;
    *(_DWORD *)(v6 + 20) = 3;
    v28 = v13(a1: v14, a2: v15, a3: v12, a4: v6, a5: v11);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    else
      MEMORY[0x18277F4A0](a1: v17, a2: v18, a3: 1, a4: v16, a5: 1);
    MEMORY[0x18206CDE0](a1: v17, a2: v18, a3: v29);
    MEMORY[0x18206CE20]();
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v28;
  }
}
