// sub_4F33600
// rva 0x04f33600  size 365  section .text  group text
// window base 0x184f33600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F33600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  _DWORD v28[14]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  char v31; // [rsp+48h] [rbp-40h] BYREF
  void *v32; // [rsp+50h] [rbp-38h]
  _DWORD *v33; // [rsp+58h] [rbp-30h]
  __int64 v34; // [rsp+60h] [rbp-28h]
  __int64 v35; // [rsp+70h] [rbp-18h]
  unsigned int v36; // [rsp+78h] [rbp-10h]
  unsigned int v37; // [rsp+7Ch] [rbp-Ch]
  unsigned int v38; // [rsp+80h] [rbp-8h]
  unsigned int v39; // [rsp+84h] [rbp-4h]

  if ( (unsigned __int64)v28 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F33780(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27);
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
    v39 = a2;
    v38 = a1;
    v37 = a6;
    v30 = a5;
    v29 = a3;
    v36 = sub_206D7A0(a1, a2, a3: 16);
    v35 = sub_206CE60(a1: v8, a2: v9, a3: v29);
    v12 = sub_206CE60(a1: v10, a2: v11, a3: v30);
    v13 = v35;
    v14 = v39;
    v15 = v38;
    v32 = nullptr;
    v33 = nullptr;
    v34 = *(_QWORD *)(v7 + 56);
    *(_QWORD *)(v7 + 56) = &v31;
    v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))MEMORY[0xe677280]/* 0xe677280 */;
    v17 = v37;
    v28[8] = v15;
    v28[10] = v14;
    v32 = &loc_184F336BF;
    v33 = v28;
    *(_DWORD *)(v7 + 20) = 3;
    v37 = v16(a1: v15, a2: v14, a3: v13, a4: v7, a5: v12, a6: v17);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
      *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
    else
      sub_277F4A0(a1: v19, a2: v20, a3: 1, a4: v18, a5: 1);
    sub_206CDE0(a1: v19, a2: v20, a3: v36);
    sub_206CE20();
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return (_BYTE)v37 != 0;
  }
}
