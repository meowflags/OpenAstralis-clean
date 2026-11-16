// sub_2786E00
// rva 0x02786e00  size 521  section .text  group text
// window base 0x182786e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2786E00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  _QWORD *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(__int64, __int64, __int64, __int64); // r10
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // r8d
  int v28; // r9d
  __int64 (__fastcall *v29)(__int64, __int64, __int64, __int64); // r10
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64, __int64, __int64); // r10
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 result; // rax
  __int64 v40; // rdx
  _QWORD v41[6]; // [rsp+0h] [rbp-68h] BYREF
  char v42; // [rsp+30h] [rbp-38h] BYREF
  void *v43; // [rsp+38h] [rbp-30h]
  _QWORD *v44; // [rsp+40h] [rbp-28h]
  __int64 v45; // [rsp+48h] [rbp-20h]
  __int64 v46; // [rsp+58h] [rbp-10h]
  __int64 (__fastcall *v47)(__int64, __int64, __int64, __int64); // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)v41 <= *(_QWORD *)(v18 + 8) )
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
    return sub_2787020();
  }
  else
  {
    v41[5] = a3;
    sub_1EDBF40();
    sub_4F30AA0();
    v43 = nullptr;
    v44 = nullptr;
    v45 = *(_QWORD *)(v18 + 56);
    *(_QWORD *)(v18 + 56) = &v42;
    v19 = MEMORY[0x10e442a8]/* 0x10e442a8 */;
    v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10e442a8]/* 0x10e442a8 */;
    v47 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10e442a8]/* 0x10e442a8 */;
    v43 = &loc_182786E66;
    v44 = v41;
    *(_DWORD *)(v18 + 20) = 3;
    v23 = v20(a1: v21, a2: v22, a3: v19, a4: 4294967286LL);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v18 + 20), 3, 1) == 3 )
    {
      *(_QWORD *)(v18 + 56) = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 24LL);
      v17[47083696] = v23;
      v43 = nullptr;
      v44 = nullptr;
      v45 = *(_QWORD *)(v18 + 56);
      *(_QWORD *)(v18 + 56) = &v42;
      v29 = v47;
      v43 = &loc_182786EDC;
      v44 = v41;
      *(_DWORD *)(v18 + 20) = 3;
      v30 = v29(a1: v25, a2: v26, a3: v24, a4: 4294967285LL);
      v34 = v30;
      if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v18 + 20), 3, 1) == 3 )
      {
        *(_QWORD *)(v18 + 56) = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 24LL);
      }
      else
      {
        v46 = v30;
        sub_277F4A0(a1: v32, a2: v33, a3: 1, a4: 1, a5: 1u);
        v34 = v46;
      }
      v17[47083701] = v34;
      v43 = nullptr;
      v44 = nullptr;
      v45 = *(_QWORD *)(v18 + 56);
      *(_QWORD *)(v18 + 56) = &v42;
      v35 = v47;
      v43 = &loc_182786F52;
      v44 = v41;
      *(_DWORD *)(v18 + 20) = 3;
      v36 = v35(a1: v32, a2: v33, a3: v31, a4: 4294967284LL);
      result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v18 + 20), 3, 1);
      if ( (_DWORD)result == 3 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 24LL);
        *(_QWORD *)(v18 + 56) = v40;
      }
      else
      {
        v47 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))v36;
        result = sub_277F4A0(a1: v37, a2: v38, a3: 1, a4: v36, a5: 1u);
        v36 = (__int64)v47;
      }
      v17[47083706] = v36;
      if ( *(int *)(v18 + 16) <= 0 )
        return sub_277F280(a1: v37, a2: v38, a3: v40, a4: v36);
    }
    else
    {
      return sub_182786F9D(
               a1: v25,
               a2: v26,
               a3: v24,
               a4: 1,
               a5: v27,
               a6: v28,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17);
    }
  }
  return result;
}
