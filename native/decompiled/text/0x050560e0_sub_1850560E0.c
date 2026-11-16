// sub_1850560E0
// rva 0x050560e0  size 662  section .text  group text
// window base 0x1850560e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850560E0(__int64 a1, double a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r13
  _DWORD *v5; // r14
  __int64 v6; // r15
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+10h] [rbp-28h]
  _DWORD *v26; // [rsp+18h] [rbp-20h]
  _DWORD *v27; // [rsp+20h] [rbp-18h]
  unsigned int v28; // [rsp+28h] [rbp-10h]
  unsigned int v29; // [rsp+2Ch] [rbp-Ch]
  double v30; // [rsp+30h] [rbp-8h]

  v27 = a4;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v6 + 8) )
  {
    v30 = a2;
    MEMORY[0x181EB84E0]();
    goto LABEL_16;
  }
  v7 = (unsigned __int16)v5[2 * v5[2 * (*a4 >> 3) + 5]
                          + 3
                          + (v5[2 * (*a4 >> 3) + 11] & (0x1E9Du >> HIBYTE(v5[2 * (*a4 >> 3) + 11])))];
  if ( a2 == 0.0 )
  {
    v30 = 0.0;
    if ( v7 == 7837 )
    {
      v20 = *a4 >> 3;
      v21 = v5[2 * v20 + 11] & (0x1E9Du >> HIBYTE(v5[2 * v20 + 11]));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v4
                                                                             + *(_QWORD *)((char *)&v5[2 * v20 + 64]
                                                                                         + HIWORD(v5[2 * (unsigned int)v5[2 * v20 + 5] + 3 + v21]))))(
                 a1,
                 a2: v21,
                 a3: a4,
                 a4);
      goto LABEL_8;
    }
LABEL_16:
    a2 = MEMORY[0x182770780]();
LABEL_17:
    v30 = a2;
    MEMORY[0x182770780]();
    goto LABEL_18;
  }
  if ( a2 != MEMORY[0xE987640] )
  {
    if ( v7 == 7837 )
    {
      v30 = a2;
      v8 = *a4 >> 3;
      v9 = (unsigned int)v5[2 * v8 + 5];
      v29 = v5[2 * v8 + 11];
      v26 = &v5[2 * v9];
      v28 = HIBYTE(v29);
      LODWORD(v9) = v26[(v29 & (0x16BCu >> SHIBYTE(v29))) + 3];
      v25 = &v5[2 * v8];
      v10 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *))(v4 + *(_QWORD *)((char *)v25 + WORD1(v9) + 16)))(a1: a4);
      if ( v10 != v5 )
      {
        if ( (unsigned __int16)v5[2 * v5[2 * (*v10 >> 3) + 5]
                                + 3
                                + (v5[2 * (*v10 >> 3) + 11] & (0x1ECFu >> HIBYTE(v5[2 * (*v10 >> 3) + 11])))] == 7887 )
        {
          v13 = *v10 >> 3;
          v14 = &v5[2 * v5[2 * v13 + 5]];
          v15 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, double))(v4
                                                                             + *(_QWORD *)((char *)&v5[2 * v13 + 16]
                                                                                         + HIWORD(v14[(v5[2 * v13 + 11] & (0x1ECFu >> HIBYTE(v5[2 * v13 + 11]))) + 3]))))(
                  a1: v14,
                  a2: v12,
                  a3: v10,
                  a4: v30);
          v16 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v4
                                                                                    + *(_QWORD *)((char *)v25
                                                                                                + HIWORD(v26[(v29 & (0x1E9Du >> v28)) + 3])
                                                                                                + 1280));
          result = v16(a1: v17, a2: v18, a3: v27, a4: v16, a5: v15);
          goto LABEL_8;
        }
LABEL_20:
        MEMORY[0x182770780](a1: v11, a2: v12, a3: v27, a4: v30);
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
        return sub_185056380();
      }
LABEL_19:
      MEMORY[0x182771080]();
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  v30 = a2;
  if ( v7 != 7837 )
  {
LABEL_18:
    MEMORY[0x182770780]();
    goto LABEL_19;
  }
  v22 = *a4 >> 3;
  v23 = v5[2 * v22 + 11] & (0x1E9Du >> HIBYTE(v5[2 * v22 + 11]));
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v4
                                                                         + *(_QWORD *)((char *)&v5[2 * v22 + 66]
                                                                                     + HIWORD(v5[2
                                                                                               * (unsigned int)v5[2 * v22 + 5]
                                                                                               + 3
                                                                                               + v23]))))(
             a1,
             a2: v23,
             a3: a4,
             a4);
LABEL_8:
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
