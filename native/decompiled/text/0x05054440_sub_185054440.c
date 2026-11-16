// sub_185054440
// rva 0x05054440  size 818  section .text  group text
// window base 0x185054440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185054440(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  unsigned int v9; // r10d
  int v10; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  _DWORD *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+10h] [rbp-28h]
  __int64 v35; // [rsp+18h] [rbp-20h]
  __int64 v36; // [rsp+20h] [rbp-18h]
  _DWORD *v37; // [rsp+28h] [rbp-10h]
  unsigned int v38; // [rsp+34h] [rbp-4h]

  v37 = a3;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    v38 = a4;
    v36 = a2;
    v35 = a1;
    v34 = a6;
    v33 = a5;
    MEMORY[0x181EB84E0]();
LABEL_15:
    v38 = v9;
    v36 = a2;
    v35 = a1;
    v34 = a6;
    v33 = a5;
    MEMORY[0x182770780]();
    goto LABEL_16;
  }
  v9 = a4;
  v10 = (unsigned __int16)v7[2 * v7[2 * (*a3 >> 3) + 5]
                           + 3
                           + (v7[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v7[2 * (*a3 >> 3) + 11])))];
  if ( v9 != 0 )
  {
    if ( v10 == 7837 )
    {
      v38 = v9;
      v36 = a2;
      v35 = a1;
      v34 = a6;
      v33 = a5;
      v11 = *a3 >> 3;
      v12 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v6
                                                                                    + *(_QWORD *)((char *)&v7[2 * v11 + 4]
                                                                                                + HIWORD(v7[2 * v7[2 * v11 + 5] + 3 + (v7[2 * v11 + 11] & (0x16BCu >> HIBYTE(v7[2 * v11 + 11])))]))))(
                        a1,
                        a2,
                        a3,
                        a4: a3);
      if ( v12 != v7 )
      {
        v15 = *v12 >> 3;
        v16 = &v7[2 * v7[2 * v15 + 5]];
        if ( (unsigned __int16)v16[(v7[2 * v15 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v15 + 11]))) + 3] == 7887 )
        {
          v17 = *v12 >> 3;
          v18 = *(_QWORD *)((char *)&v7[2 * v17 + 28]
                          + HIWORD(v7[2 * v7[2 * v17 + 5]
                                    + 3
                                    + (v7[2 * v17 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v17 + 11])))]));
          v19 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v6 + v18))(
                  a1: v36,
                  a2: v14,
                  a3: v12,
                  a4: v18,
                  a5: v34,
                  a6: v35);
          goto LABEL_7;
        }
LABEL_20:
        MEMORY[0x182770780](a1: v13, a2: v14, a3: v16, a4: v38);
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
        return sub_185054780();
      }
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  v38 = 0;
  v36 = a2;
  v35 = a1;
  v34 = a6;
  v33 = a5;
  if ( v10 != 7837 )
  {
LABEL_16:
    MEMORY[0x182770780]();
    goto LABEL_17;
  }
  v25 = *a3 >> 3;
  v26 = v7[2 * v25 + 11] & (0x16BCu >> HIBYTE(v7[2 * v25 + 11]));
  v27 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v6
                                                                                + *(_QWORD *)((char *)&v7[2 * v25 + 4]
                                                                                            + HIWORD(v7[2 * (unsigned int)v7[2 * v25 + 5] + 3 + v26]))))(
                    a1,
                    a2: v26,
                    a3,
                    a4: a3);
  if ( v27 == v7 )
  {
LABEL_17:
    MEMORY[0x182771080]();
LABEL_18:
    MEMORY[0x182771080]();
    goto LABEL_19;
  }
  v29 = (unsigned __int16)v7[2 * v7[2 * (*v27 >> 3) + 5]
                           + 3
                           + (v7[2 * (*v27 >> 3) + 11] & (0x1ECFu >> HIBYTE(v7[2 * (*v27 >> 3) + 11])))];
  if ( (_DWORD)v29 != 7887 )
  {
LABEL_19:
    MEMORY[0x182770780](a1: v35, a2: v36, a3: v37, a4: v29, a5: v33, a6: v34);
    goto LABEL_20;
  }
  v30 = *v27 >> 3;
  v31 = *(_QWORD *)((char *)&v7[2 * v30 + 44]
                  + HIWORD(v7[2 * v7[2 * v30 + 5] + 3 + (v7[2 * v30 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v30 + 11])))]));
  v19 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v6 + v31))(
          a1: v36,
          a2: v28,
          a3: v27,
          a4: v31,
          a5: v34,
          a6: v35);
LABEL_7:
  v22 = *v37 >> 3;
  v23 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v6
                                                                                     + *(_QWORD *)((char *)&v7[2 * v22 + 248]
                                                                                                 + HIWORD(v7[2 * v7[2 * v22 + 5] + 3 + (v7[2 * v22 + 11] & (0x1E9Du >> HIBYTE(v7[2 * v22 + 11])))])));
  result = v23(a1: v20, a2: v21, a3: v37, a4: v23, a5: v33, a6: v19);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
