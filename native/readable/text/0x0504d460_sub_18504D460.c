// sub_504D460
// rva 0x0504d460  size 358  section .text  group text
// window base 0x18504d460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504D460(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rcx
  __int64 result; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  int v31; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v14 + 8) )
  {
    v30 = a2;
    v31 = a1;
    v29 = a6;
    v28 = a5;
    v27 = a3;
    sub_1EB84E0();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v13
                                        + 8LL * *(unsigned int *)(v13 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v13 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E99u >> HIBYTE(*(_DWORD *)(v13 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7833 )
  {
    v15 = *(_QWORD *)(v14 + 40);
    if ( (unsigned __int64)(v15 + 16) > *(_QWORD *)(v14 + 32) )
      return sub_18504D55A(a1, a2, (_DWORD)a3, a4: v15, a5, a6, a7, a8, a9, a10, a11, a12);
    *(_QWORD *)(v14 + 40) = v15 + 16;
    *(_DWORD *)v15 = 43310312;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    v16 = v15;
    *(_DWORD *)(v15 + 4) = (unsigned __int64)(a2 - v13) >> 3;
    v17 = *a3 >> 3;
    v18 = (__int64 (__fastcall *)(__int64, __int64))(v12
                                                   + *(_QWORD *)(v13
                                                               + 8 * v17
                                                               + HIWORD(*(_DWORD *)(v13
                                                                                  + 8LL
                                                                                  * *(unsigned int *)(v13 + 8 * v17 + 20)
                                                                                  + 4LL
                                                                                  * (*(_DWORD *)(v13 + 8 * v17 + 44)
                                                                                   & (0x1E99u >> HIBYTE(*(_DWORD *)(v13 + 8 * v17 + 44))))
                                                                                  + 12))
                                                               + 96));
    v30 = a2;
    v27 = a3;
    v28 = a5;
    v29 = a6;
    v31 = a1;
    result = v18(a1, a2: v16);
    if ( *(int *)(v14 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2770780();
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
  return sub_504D5E0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
}
