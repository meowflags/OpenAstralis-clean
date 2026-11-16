// sub_1E64480
// rva 0x01e64480  size 461  section .text  group text
// window base 0x181e64480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1E64480(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned int v26; // [rsp+20h] [rbp-8h]
  unsigned int v27; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v11 + 8) )
  {
    v27 = a1;
    v26 = a6;
    v25 = a5;
    v24 = a3;
    result = (_DWORD *)sub_1EB84E0();
    goto LABEL_12;
  }
  v12 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v11 + 32) )
  {
    v27 = a1;
    v26 = a6;
    v25 = a5;
    v24 = a3;
    v12 = sub_1EAA920(a1, a2, a3: 40451336);
    a1 = v27;
    a6 = v26;
    a5 = v25;
    a3 = v24;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v12 + 24;
    *(_DWORD *)v12 = 40451336;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
  }
  *(_QWORD *)(v12 + 8) = (int)a6;
  *(_DWORD *)(v12 + 4) = v10[94162747];
  v13 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v11 + 32) )
    return (_DWORD *)sub_181E6458B(a1, a2, a3, a4: v13, a5, a6, a7, a8, a9, a10);
  *(_QWORD *)(v11 + 40) = v13 + 24;
  *(_DWORD *)v13 = 40452488;
  *(_DWORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  v26 = a6;
  v24 = a3;
  *(_DWORD *)(v13 + 12) = a1;
  *(_DWORD *)(v13 + 8) = (unsigned __int64)(a5 - (_QWORD)v10) >> 3;
  *(_DWORD *)(v13 + 4) = (unsigned __int64)(v12 - (_QWORD)v10) >> 3;
  v25 = a5;
  v23 = v12;
  v27 = a1;
  result = (_DWORD *)sub_1E61720(a1, a2, a3: v12, a4: (unsigned int)a1, a5: v10 + 10113184, a6: v13);
  if ( result != v10 && *result >> 3 != 5056578 )
  {
LABEL_12:
    sub_276FC00(a1: v27, a2: v15, a3: result, a4: v23, a5: v10 + 10113156, a6: v26);
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
    return (_DWORD *)sub_1E64660(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21);
  }
  if ( *(int *)(v11 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
