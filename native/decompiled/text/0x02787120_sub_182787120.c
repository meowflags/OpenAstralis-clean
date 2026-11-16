// sub_182787120
// rva 0x02787120  size 233  section .text  group text
// window base 0x182787120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182787120(
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
        __int64 a16)
{
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 (__fastcall *v18)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD); // r10
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  _BYTE v32[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+20h] [rbp-38h]
  char v34; // [rsp+28h] [rbp-30h] BYREF
  void *v35; // [rsp+30h] [rbp-28h]
  _BYTE *v36; // [rsp+38h] [rbp-20h]
  __int64 v37; // [rsp+40h] [rbp-18h]

  v33 = a3;
  if ( (unsigned __int64)v32 <= *(_QWORD *)(v17 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v35 = nullptr;
  v36 = nullptr;
  v37 = *(_QWORD *)(v17 + 56);
  *(_QWORD *)(v17 + 56) = &v34;
  v18 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))MEMORY[0x10E446A8];
  v35 = &loc_18278717D;
  v36 = v32;
  *(_DWORD *)(v17 + 20) = 3;
  v19 = v18(a1, a2, a3: 1, a4: 0, a5: 0, a6: 0);
  result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v17 + 20), 3, 1);
  if ( (_DWORD)result != 3 )
    return sub_1827871D1(
             a1: v20,
             a2: v21,
             a3: 1,
             a4: v19,
             a5: v22,
             a6: v23,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  *(_QWORD *)(v17 + 56) = *(_QWORD *)(*(_QWORD *)(v17 + 56) + 24LL);
  v25 = v33;
  *(_QWORD *)(v33 + 8) = v19;
  if ( v19 == 0 )
  {
LABEL_7:
    MEMORY[0x1828C1C40](a1: v20, a2: v21, a3: v16 + 371313552);
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
    return sub_182787220(a1: v28, a2: v29, a3: v26, a4: v27, a5: v30, a6: v31);
  }
  if ( *(int *)(v17 + 16) <= 0 )
    return sub_18277F280(a1: v20, a2: v21, a3: v25, a4: v19);
  return result;
}
