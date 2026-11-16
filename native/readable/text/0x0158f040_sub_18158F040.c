// sub_158F040
// rva 0x0158f040  size 526  section .text  group text
// window base 0x18158f040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158F040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  void (__fastcall *v10)(__int64, __int64, _DWORD *); // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  _DWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 result; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // edx
  int v36; // ecx
  int v37; // edi
  int v38; // esi
  int v39; // r8d
  int v40; // r9d
  char v41; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v42; // [rsp+10h] [rbp-18h]
  int v43; // [rsp+1Ch] [rbp-Ch]
  __int64 v44; // [rsp+20h] [rbp-8h]

  v44 = a3;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
  {
    v42 = a5;
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v43 = *a5 >> 3;
    v10 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v43 + 44]);
    v42 = a5;
    v10(a1, a2, a3: a5);
    v15 = *(unsigned int *)(v44 + 8);
    if ( (_DWORD)v15 == 0 )
    {
LABEL_16:
      sub_2771080();
      goto LABEL_17;
    }
    sub_158E7E0(a1: v12, a2: v13, a3: (__int64)&v8[2 * v15], a4: v11, a5: v42, a6: v14, a7: v41);
    v16 = *(unsigned int *)(v44 + 12);
    if ( (_DWORD)v16 == 0 )
    {
LABEL_17:
      sub_2771080();
      goto LABEL_18;
    }
    v17 = v8[2 * v16] >> 3;
    if ( (unsigned __int16)v8[2 * v8[2 * v17 + 5] + 3 + (v8[2 * v17 + 11] & (0x61Du >> HIBYTE(v8[2 * v17 + 11])))] != 1565 )
    {
LABEL_18:
      sub_2770780();
LABEL_19:
      sub_2771080();
      goto LABEL_20;
    }
    v18 = v8[2 * v16] >> 3;
    v19 = &v8[2 * v8[2 * v18 + 5]];
    v20 = v8[2 * v18 + 11] & (0x61Du >> HIBYTE(v8[2 * v18 + 11]));
    if ( ((unsigned int (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7
                                                                   + *(_QWORD *)((char *)&v8[2 * v18 + 24]
                                                                               + HIWORD(v19[v20 + 3]))))(
           a1: v20,
           a2: v19,
           a3: &v8[2 * v16]) != 0 )
      goto LABEL_7;
    v24 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v43 + 46]))(
                      a1: v21,
                      a2: v22,
                      a3: v42);
    if ( v24 == v8 )
      goto LABEL_19;
    v27 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v7
                                                                               + *(_QWORD *)&v8[2 * (*v24 >> 3) + 64]);
    v28 = (_DWORD *)v27(a1: v25, a2: v26, a3: v24, a4: v27, a5: v8 + 88305034);
    if ( v28 == v8 )
    {
LABEL_20:
      sub_2771080();
      goto LABEL_21;
    }
    v31 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v28 >> 3) + 36]))(
                      a1: v29,
                      a2: v30,
                      a3: v28);
    if ( v31 == v8 )
    {
LABEL_21:
      sub_2771080(a1: v33, a2: v34, a3: v44, a4: v32, a5: v42);
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
      return sub_158F260(a1: v37, a2: v38, a3: v35, a4: v36, a5: v39, a6: v40, a7);
    }
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v31 >> 3) + 60]))(
      a1: v33,
      a2: v34,
      a3: v31,
      a4: &v8[2 * *(unsigned int *)(v44 + 12)],
      a5: &v8[2 * *(unsigned int *)(v44 + 12)]);
LABEL_7:
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v43 + 42]))(
               a1: v21,
               a2: v22,
               a3: v42);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_16;
}
