// sub_182789C60
// rva 0x02789c60  size 107  section .text  group text
// window base 0x182789c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182789C60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // [rsp+0h] [rbp-18h] BYREF
  __int64 v31; // [rsp+8h] [rbp-10h]
  __int64 v32; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v15 + 8) )
  {
    v32 = a3;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v16 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_7:
    v32 = a3;
    sub_182771080(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v30);
    goto LABEL_8;
  }
  v17 = *(unsigned int *)(v14 + 8 * v16 + 4);
  v18 = v14 + 8 * v16;
  if ( (_DWORD)v17 == 0 )
  {
LABEL_8:
    sub_182771080(a1, a2, a3, a4: v17, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v30);
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
    return sub_182789CE0(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29);
  }
  v31 = v18;
  v32 = a3;
  result = MEMORY[0x181EBBCC0](a1, a2, a3: v14 + 8 * v17);
  if ( *(int *)(v15 + 16) <= 0 )
    return sub_18277F280(a1: v22, a2: v23, a3: v20, a4: v21);
  return result;
}
