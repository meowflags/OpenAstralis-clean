// sub_18504E160
// rva 0x0504e160  size 590  section .text  group text
// window base 0x18504e160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504E160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  void (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rbx
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 v28; // [rsp+0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+8h] [rbp-20h]
  __int64 v30; // [rsp+10h] [rbp-18h]
  __int64 v31; // [rsp+18h] [rbp-10h]
  _DWORD *v32; // [rsp+20h] [rbp-8h]

  v32 = a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v31 = a6;
    v30 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_13;
  }
  v31 = a6;
  v30 = a3;
  v9 = MEMORY[0x185FD8680](a1, a2, a3: a6, a4, a5: a3);
  if ( (_DWORD *)v9 == v7 )
  {
LABEL_13:
    MEMORY[0x182771080]();
    goto LABEL_14;
  }
  v29 = v9;
  v10 = *(unsigned int *)(v9 + 12);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_14:
    MEMORY[0x182771080]();
    goto LABEL_15;
  }
  v11 = v7[2 * v10] >> 3;
  if ( (unsigned __int16)v7[2 * v7[2 * v11 + 5] + 3 + (v7[2 * v11 + 11] & (0x56Eu >> HIBYTE(v7[2 * v11 + 11])))] != 1390 )
  {
LABEL_15:
    MEMORY[0x182770780]();
    goto LABEL_16;
  }
  v12 = v7[2 * v10] >> 3;
  v13 = &v7[2 * v7[2 * v12 + 5]];
  v14 = v7[2 * v12 + 11] & (0x56Eu >> HIBYTE(v7[2 * v12 + 11]));
  ((void (__fastcall *)(__int64, _DWORD *, _DWORD *))(v6 + *(_QWORD *)((char *)&v7[2 * v12] + HIWORD(v13[v14 + 3]))))(
    a1: v14,
    a2: v13,
    a3: &v7[2 * v10]);
  if ( v32 == v7 )
  {
LABEL_16:
    MEMORY[0x182771080]();
  }
  else if ( (unsigned __int16)v7[2 * v7[2 * (*v32 >> 3) + 5]
                               + 3
                               + (v7[2 * (*v32 >> 3) + 11] & (0x16C0u >> HIBYTE(v7[2 * (*v32 >> 3) + 11])))] == 5824 )
  {
    v16 = *v32 >> 3;
    v17 = v7[2 * v16 + 11] & (0x16C0u >> HIBYTE(v7[2 * v16 + 11]));
    v18 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v6
                                                                            + *(_QWORD *)((char *)&v7[2 * v16 + 4]
                                                                                        + HIWORD(v7[2 * (unsigned int)v7[2 * v16 + 5] + 3 + v17])));
    v18(a1: v15, a2: v17, a3: v32, a4: v18, a5: &v7[2 * *(unsigned int *)(v29 + 4)]);
    v20 = *(unsigned int *)(v29 + 8);
    if ( (_DWORD)v20 == 0 )
    {
LABEL_18:
      MEMORY[0x182771080]();
      goto LABEL_19;
    }
    v21 = v7[2 * v20] >> 3;
    v22 = v7[2 * v21 + 11] & (0x56Eu >> HIBYTE(v7[2 * v21 + 11]));
    v23 = (unsigned __int16)v7[2 * (unsigned int)v7[2 * v21 + 5] + 3 + v22];
    if ( (_DWORD)v23 != 1390 )
    {
LABEL_19:
      MEMORY[0x182770780](a1: v19, a2: v22, a3: v30, a4: v23, a5: v32, a6: v31);
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
      return sub_18504E3C0();
    }
    v24 = v7[2 * v20] >> 3;
    v25 = &v7[2 * v7[2 * v24 + 5]];
    v26 = v7[2 * v24 + 11] & (0x56Eu >> HIBYTE(v7[2 * v24 + 11]));
    ((void (__fastcall *)(__int64, _DWORD *, _DWORD *))(v6 + *(_QWORD *)((char *)&v7[2 * v24] + HIWORD(v25[v26 + 3]))))(
      a1: v26,
      a2: v25,
      a3: &v7[2 * v20]);
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v30;
  }
  MEMORY[0x182770780]();
  goto LABEL_18;
}
