// sub_4F308A0
// rva 0x04f308a0  size 294  section .text  group text
// window base 0x184f308a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F308A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  _BYTE v21[40]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+38h] [rbp-40h] BYREF
  void *v25; // [rsp+40h] [rbp-38h]
  _BYTE *v26; // [rsp+48h] [rbp-30h]
  __int64 v27; // [rsp+50h] [rbp-28h]
  unsigned int v28; // [rsp+64h] [rbp-14h]
  __int64 v29; // [rsp+68h] [rbp-10h]
  unsigned int v30; // [rsp+74h] [rbp-4h]

  if ( (unsigned __int64)v21 <= *(_QWORD *)(v6 + 8) )
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
    return sub_4F309E0();
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
    v30 = sub_206D7A0(a1, a2, a3: 16);
    v29 = sub_206CE60(a1: v7, a2: v8, a3: v22);
    v11 = sub_206CE60(a1: v9, a2: v10, a3: v23);
    v12 = v29;
    v25 = nullptr;
    v26 = nullptr;
    v27 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v24;
    v13 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0xe677850]/* 0xe677850 */;
    v25 = &loc_184F3092A;
    v26 = v21;
    *(_DWORD *)(v6 + 20) = 3;
    v28 = v13(a1: v14, a2: v15, a3: v12, a4: v6, a5: v11);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    else
      sub_277F4A0(a1: v17, a2: v18, a3: 1, a4: v16, a5: 1);
    sub_206CDE0(a1: v17, a2: v18, a3: v30);
    sub_206CE20();
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280();
    return v28;
  }
}
