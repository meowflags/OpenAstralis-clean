// sub_15A0D20
// rva 0x015a0d20  size 326  section .text  group text
// window base 0x1815a0d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0D20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, _DWORD *); // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  int v31; // [rsp+Ch] [rbp-1Ch]
  __int64 v32; // [rsp+10h] [rbp-18h]
  __int64 v33; // [rsp+18h] [rbp-10h]
  _DWORD *v34; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v10 + 8) )
  {
    v34 = a5;
    v33 = a3;
    sub_1EB84E0();
    goto LABEL_12;
  }
  if ( a5 == v9
    || (unsigned __int16)v9[2 * v9[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v9[2 * (*a5 >> 3) + 11] & (0x61Cu >> HIBYTE(v9[2 * (*a5 >> 3) + 11])))] != 1564 )
  {
    v34 = a5;
    v33 = a3;
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  v12 = *a5 >> 3;
  v13 = v9[2 * v12 + 11] & (0x61Cu >> HIBYTE(v9[2 * v12 + 11]));
  v14 = *(unsigned int *)(a3 + 4);
  v15 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v8
                                                           + *(_QWORD *)((char *)&v9[2 * v12 + 2]
                                                                       + HIWORD(v9[2 * (unsigned int)v9[2 * v12 + 5]
                                                                                 + 3
                                                                                 + v13])));
  v33 = a3;
  v34 = a5;
  v32 = (__int64)&v9[2 * v14];
  v31 = v14;
  v16 = v15(a1, a2: v13, a3: a5);
  if ( v31 == 0 )
  {
LABEL_12:
    sub_2771080(a1: v18, a2: v19, a3: v33, a4: v17, a5: v34);
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
    return sub_15A0E80();
  }
  v20 = sub_15A5660(a1: v18, a2: v19, a3: v32, a4: v32, a5: v16);
  if ( (_DWORD *)v20 == v9 )
    return sub_1815A0E23(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7, a8);
  v32 = v20;
  result = sub_15A04E0(a1: v23, a2: v24, a3: v20, a4: v22, a5: v34);
  if ( *(int *)(v10 + 16) <= 0 )
    return sub_277F280(a1: v28, a2: v29, a3: v27, a4: v32);
  return result;
}
