// sub_27861C0
// rva 0x027861c0  size 230  section .text  group text
// window base 0x1827861c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27861C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64); // r10
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  __int64 v25[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  char v27; // [rsp+28h] [rbp-40h] BYREF
  void *v28; // [rsp+30h] [rbp-38h]
  __int64 *v29; // [rsp+38h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-28h]
  __int64 v31; // [rsp+50h] [rbp-18h]
  __int64 v32; // [rsp+58h] [rbp-10h]
  __int64 v33; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
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
    return sub_27862C0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  else
  {
    v33 = a6;
    v32 = a5;
    v26 = a3;
    v28 = nullptr;
    v29 = nullptr;
    v30 = *(_QWORD *)(v7 + 56);
    *(_QWORD *)(v7 + 56) = &v27;
    v8 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10e442a8]/* 0x10e442a8 */;
    v28 = &loc_182786216;
    v29 = v25;
    *(_DWORD *)(v7 + 20) = 3;
    v9 = v8(a1, a2, a3, a4: 4294967284LL);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
    {
      *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
    }
    else
    {
      v31 = v9;
      sub_277F4A0(a1: v10, a2: v11, a3: 1, a4: v9, a5: 1u);
      v9 = v31;
    }
    result = sub_2789CE0(a1: v10, a2: v11, a3: v9, a4: v9, a5: v32, a6: v33);
    if ( (_DWORD)result == 0 )
      result = sub_2786160(a1: v15, a2: v16, a3: v26, a4: v14, a5: v17, a6: v18, a7: v25[0], a8: v25[1]);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v16, a3: v13, a4: v14);
  }
  return result;
}
