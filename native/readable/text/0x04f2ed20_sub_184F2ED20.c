// sub_4F2ED20
// rva 0x04f2ed20  size 390  section .text  group text
// window base 0x184f2ed20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2ED20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
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
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // rax
  _BYTE v26[32]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  char v29; // [rsp+30h] [rbp-38h] BYREF
  void *v30; // [rsp+38h] [rbp-30h]
  _BYTE *v31; // [rsp+40h] [rbp-28h]
  __int64 v32; // [rsp+48h] [rbp-20h]
  __int64 v33; // [rsp+58h] [rbp-10h]
  unsigned int v34; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)v26 <= *(_QWORD *)(v6 + 8) )
  {
    result = sub_1EB84E0();
LABEL_15:
    sub_276FC00(a1: v22, a2: v23, a3: result, a4: v21, a5: v5 + 34082680);
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
    return sub_4F2EEC0();
  }
  if ( *(_QWORD *)v6 == 0 )
  {
    v25 = *(_QWORD *)(v5 + 376351984);
    if ( v25 == 0 )
    {
      v25 = v5 + 373388464;
      *(_QWORD *)(v5 + 376351984) = v5 + 373388464;
    }
    *(_QWORD *)v6 = v25;
  }
  v28 = a5;
  v27 = a3;
  v34 = sub_206D7A0(a1, a2, a3: 16);
  v33 = sub_206CE60(a1: v7, a2: v8, a3: v27);
  v11 = sub_206CE60(a1: v9, a2: v10, a3: v28);
  v12 = v33;
  v30 = nullptr;
  v31 = nullptr;
  v32 = *(_QWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 56) = &v29;
  v13 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0xe678048]/* 0xe678048 */;
  v30 = &loc_184F2EDAA;
  v31 = v26;
  *(_DWORD *)(v6 + 20) = 3;
  v16 = v13(a1: v14, a2: v15, a3: v12, a4: v6, a5: v11);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
  {
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
  }
  else
  {
    v33 = v16;
    sub_277F4A0(a1: v17, a2: v18, a3: 1, a4: v16, a5: 1);
    v16 = v33;
  }
  v33 = v16;
  v27 = (_DWORD *)sub_206D420(a1: v17, a2: v18, a3: v16);
  sub_206CDE0(a1: v19, a2: v20, a3: v34);
  sub_206CE20();
  result = (__int64)v27;
  if ( v27 != (_DWORD *)v5 && *v27 >> 3 != 4260335 )
    goto LABEL_15;
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v22, a2: v23, a3: v33);
  return result;
}
