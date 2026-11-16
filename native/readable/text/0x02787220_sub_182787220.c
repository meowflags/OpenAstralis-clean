// sub_2787220
// rva 0x02787220  size 988  section .text  group text
// window base 0x182787220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2787220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64); // r10
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64, __int64); // rsi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, __int64); // r10
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64); // r10
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // edx
  int v35; // ecx
  int v36; // edi
  int v37; // esi
  int v38; // r8d
  int v39; // r9d
  _BYTE v40[32]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+28h] [rbp-70h]
  char v43; // [rsp+30h] [rbp-68h] BYREF
  void *v44; // [rsp+38h] [rbp-60h]
  _BYTE *v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  unsigned int v47; // [rsp+5Ch] [rbp-3Ch]
  __int64 (__fastcall *v48)(__int64, __int64, __int64, __int64); // [rsp+60h] [rbp-38h]
  unsigned int v49; // [rsp+68h] [rbp-30h]
  unsigned int v50; // [rsp+6Ch] [rbp-2Ch]
  __int64 (__fastcall *v51)(__int64, _QWORD, __int64, __int64); // [rsp+70h] [rbp-28h]
  __int64 v52; // [rsp+78h] [rbp-20h]
  int v53; // [rsp+84h] [rbp-14h]
  __int64 v54; // [rsp+88h] [rbp-10h]
  __int64 v55; // [rsp+90h] [rbp-8h]

  if ( (unsigned __int64)v40 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2787600(a1: v36, a2: v37, a3: v34, a4: v35, a5: v38, a6: v39, a7);
  }
  v42 = a3;
  v54 = a6;
  if ( a6 == 0 )
  {
    v53 = a5;
    v52 = 0xFFFFFFFFLL;
    goto LABEL_6;
  }
  if ( a5 == 0 )
  {
    v53 = 0;
    if ( a6 / 1000000 != 0 )
      JUMPOUT(0x304ED0557LL);
    v52 = 1;
    goto LABEL_6;
  }
  v53 = a5;
  result = sub_1EDF700(a1, a2, a3: 0, a4, a5: 0);
  if ( v54 - result >= 1 )
  {
    v52 = v54 - result;
LABEL_6:
    v41 = v8 + 376614544;
    sub_1EB8140(a1, a2, a3: v8 + 376614544);
    v12 = *(_QWORD *)(v42 + 8);
    v44 = nullptr;
    v45 = nullptr;
    v46 = *(_QWORD *)(v9 + 56);
    *(_QWORD *)(v9 + 56) = &v43;
    v13 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))MEMORY[0x10e44680]/* 0x10e44680 */;
    v51 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))MEMORY[0x10e44680]/* 0x10e44680 */;
    v44 = &loc_1827872EF;
    v45 = v40;
    *(_DWORD *)(v9 + 20) = 3;
    v50 = v13(a1: v14, a2: v15, a3: 0, a4: v12);
    v18 = v50;
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v9 + 20), 3, 1) == 3 )
    {
      *(_QWORD *)(v9 + 56) = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 24LL);
    }
    else
    {
      sub_277F4A0(a1: v16, a2: v17, a3: 1, a4: 1, a5: 1u);
      v18 = v50;
    }
    v19 = *(_QWORD *)(v42 + 8);
    v20 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))MEMORY[0x10e44bf0]/* 0x10e44bf0 */;
    if ( (_DWORD)v18 != 0 )
    {
      if ( v52 < 0x100000000LL )
        v21 = (unsigned int)v52;
      else
        v21 = 0xFFFFFFFFLL;
      v48 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10e44bf0]/* 0x10e44bf0 */;
      v44 = nullptr;
      v45 = nullptr;
      v46 = *(_QWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 56) = &v43;
      v22 = v51;
      v44 = &loc_18278739C;
      v45 = v40;
      *(_DWORD *)(v9 + 20) = 3;
      v47 = v22(a1: v16, a2: v20, a3: v21, a4: v19);
      if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v9 + 20), 3, 1) == 3 )
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 24LL);
      else
        sub_277F4A0(a1: v24, a2: v25, a3: 1, a4: 1, a5: 1u);
      v26 = *(_QWORD *)(v42 + 8);
      v44 = nullptr;
      v45 = nullptr;
      v46 = *(_QWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 56) = &v43;
      v27 = v48;
      v44 = &loc_182787410;
      v45 = v40;
      *(_DWORD *)(v9 + 20) = 3;
      v50 = v27(a1: v24, a2: v25, a3: v23, a4: v26);
      if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v9 + 20), 3, 1) == 3 )
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 24LL);
      else
        sub_277F4A0(a1: v29, a2: v30, a3: 1, a4: v28, a5: 1u);
      v55 = v7;
      v49 = v47;
    }
    else
    {
      v44 = nullptr;
      v45 = nullptr;
      v46 = *(_QWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 56) = &v43;
      v44 = &loc_1827874CB;
      v45 = v40;
      *(_DWORD *)(v9 + 20) = 3;
      v49 = v20(a1: v16, a2: v20, a3: v18, a4: v19);
      if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v9 + 20), 3, 1) == 3 )
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 24LL);
      else
        sub_277F4A0(a1: v29, a2: v30, a3: 1, a4: 1, a5: 1u);
      v55 = v7;
      v49 = v50;
    }
    result = sub_1EB8320(a1: v29, a2: v30, a3: v41);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v32, a2: v33, a3: v49, a4: v31);
    return result;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1, a2, a3: v54 - result, a4: v11);
  return result;
}
