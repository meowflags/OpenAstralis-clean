// sub_4F240C0
// rva 0x04f240c0  size 326  section .text  group text
// window base 0x184f240c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F240C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // rax
  _DWORD v23[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+38h] [rbp-40h] BYREF
  void *v27; // [rsp+40h] [rbp-38h]
  _DWORD *v28; // [rsp+48h] [rbp-30h]
  __int64 v29; // [rsp+50h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-18h]
  unsigned int v31; // [rsp+6Ch] [rbp-Ch]
  unsigned int v32; // [rsp+70h] [rbp-8h]
  unsigned int v33; // [rsp+74h] [rbp-4h]

  if ( (unsigned __int64)v23 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_4F24220();
  }
  else
  {
    if ( *(_QWORD *)v7 == 0 )
    {
      v22 = *(_QWORD *)(v6 + 376351984);
      if ( v22 == 0 )
      {
        v22 = v6 + 373388464;
        *(_QWORD *)(v6 + 376351984) = v6 + 373388464;
      }
      *(_QWORD *)v7 = v22;
    }
    v33 = a1;
    v32 = a6;
    v25 = a5;
    v24 = a3;
    v31 = sub_206D7A0(a1, a2, a3: 16);
    v30 = sub_206CE60(a1: v8, a2: v9, a3: v24);
    v12 = sub_206CE60(a1: v10, a2: v11, a3: v25);
    v13 = v30;
    v14 = v33;
    v27 = nullptr;
    v28 = nullptr;
    v29 = *(_QWORD *)(v7 + 56);
    *(_QWORD *)(v7 + 56) = &v26;
    v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))MEMORY[0xe6778c8]/* 0xe6778c8 */;
    v16 = v32;
    v23[8] = v14;
    v27 = &loc_184F24160;
    v28 = v23;
    *(_DWORD *)(v7 + 20) = 3;
    v32 = v15(a1: v14, a2: v17, a3: v13, a4: v7, a5: v12, a6: v16);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
      *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
    else
      sub_277F4A0(a1: v19, a2: v20, a3: 1, a4: v18, a5: 1);
    sub_206CDE0(a1: v19, a2: v20, a3: v31);
    sub_206CE20();
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return v32;
  }
}
