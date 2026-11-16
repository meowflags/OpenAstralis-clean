// sub_4F2FD20
// rva 0x04f2fd20  size 362  section .text  group text
// window base 0x184f2fd20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2FD20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64); // r10
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+30h] [rbp-38h] BYREF
  void *v27; // [rsp+38h] [rbp-30h]
  _BYTE *v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-10h]
  unsigned int v31; // [rsp+60h] [rbp-8h]
  unsigned int v32; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v24 <= *(_QWORD *)(v6 + 8) )
  {
    result = sub_1EB84E0();
LABEL_15:
    sub_276FC00(a1: v20, a2: v21, a3: result, a4: v19, a5: v5 + 34082680);
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
    return sub_4F2FEA0();
  }
  if ( *(_QWORD *)v6 == 0 )
  {
    v23 = *(_QWORD *)(v5 + 376351984);
    if ( v23 == 0 )
    {
      v23 = v5 + 373388464;
      *(_QWORD *)(v5 + 376351984) = v5 + 373388464;
    }
    *(_QWORD *)v6 = v23;
  }
  v32 = a5;
  v25 = a3;
  v31 = sub_206D7A0(a1, a2, a3: 16);
  v9 = sub_206CE60(a1: v7, a2: v8, a3: v25);
  v27 = nullptr;
  v28 = nullptr;
  v29 = *(_QWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 56) = &v26;
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0xe677148]/* 0xe677148 */;
  v11 = v32;
  v27 = &loc_184F2FD9B;
  v28 = v24;
  *(_DWORD *)(v6 + 20) = 3;
  v14 = v10(a1: v12, a2: v13, a3: v9, a4: v6, a5: v11);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
  {
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
  }
  else
  {
    v30 = v14;
    sub_277F4A0(a1: v15, a2: v16, a3: 1, a4: v14, a5: 1);
    v14 = v30;
  }
  v30 = v14;
  v25 = (_DWORD *)sub_206D420(a1: v15, a2: v16, a3: v14);
  sub_206CDE0(a1: v17, a2: v18, a3: v31);
  sub_206CE20();
  result = (__int64)v25;
  if ( v25 != (_DWORD *)v5 && *v25 >> 3 != 4260335 )
    goto LABEL_15;
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v20, a2: v21, a3: v30);
  return result;
}
