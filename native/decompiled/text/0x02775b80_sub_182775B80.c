// sub_182775B80
// rva 0x02775b80  size 199  section .text  group text
// window base 0x182775b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182775B80(
        _DWORD *a1,
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
        __m128 a14,
        char a15,
        int a16,
        int a17,
        int a18)
{
  __int64 v18; // r13
  _DWORD *v19; // r14
  __int64 v20; // r15
  __int64 (__fastcall *v21)(_DWORD *, __int64, _DWORD *); // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  int v35; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+18h] [rbp-30h]
  _DWORD *v37; // [rsp+20h] [rbp-28h]
  __int64 v38; // [rsp+28h] [rbp-20h]
  __int64 v39; // [rsp+30h] [rbp-18h]
  unsigned int v40; // [rsp+38h] [rbp-10h]
  int v41; // [rsp+3Ch] [rbp-Ch]
  int v42; // [rsp+40h] [rbp-8h]
  int v43; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v20 + 8) )
  {
    v43 = a4;
    v42 = a2;
    v39 = a6;
    v38 = a5;
    v41 = a3;
    *(double *)a7.m128_u64 = MEMORY[0x181EB84E0]();
  }
  else if ( a1 != v19 )
  {
    v43 = a4;
    v42 = a2;
    v39 = a6;
    v38 = a5;
    v41 = a3;
    v21 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v18 + *(_QWORD *)&v19[2 * (*a1 >> 3) + 24]);
    v37 = a1;
    v40 = v21(a1, a2, a3: a1);
    v36 = MEMORY[0x184F8CF80](a1: v23, a2: v24, a3: v40, a4: v22, a5: 4);
    result = sub_182776580(a1: v36, a2: v42 == 72, a3: v41, a4: v43, a5: v38, a6: v39, a7: v35, a8: a16);
    if ( *(int *)(v20 + 16) <= 0 )
      return sub_18277F280(a1: v27, a2: v28, a3: v26);
    return result;
  }
  sub_182771080((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15: v35);
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
  return sub_182775C60(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7: a15, a8: a16, a9: a17, a10: a18);
}
