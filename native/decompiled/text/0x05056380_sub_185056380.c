// sub_185056380
// rva 0x05056380  size 768  section .text  group text
// window base 0x185056380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185056380(__int64 a1, __m128 a2, __int64 a3, _DWORD *a4)
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
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  _DWORD *v28; // [rsp+18h] [rbp-20h]
  _DWORD *v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+2Ch] [rbp-Ch]
  unsigned int v31; // [rsp+30h] [rbp-8h]
  float v32; // [rsp+34h] [rbp-4h]

  v29 = a4;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v6 + 8) )
  {
    v32 = a2.m128_f32[0];
    MEMORY[0x181EB84E0]();
LABEL_19:
    MEMORY[0x182770780]();
LABEL_20:
    MEMORY[0x182770780]();
    goto LABEL_21;
  }
  v7 = (unsigned __int16)v5[2 * v5[2 * (*a4 >> 3) + 5]
                          + 3
                          + (v5[2 * (*a4 >> 3) + 11] & (0x1E9Du >> HIBYTE(v5[2 * (*a4 >> 3) + 11])))];
  if ( _mm_cvtsi128_si32((__m128i)a2.m128_i128) == 0 )
  {
    v32 = a2.m128_f32[0];
    if ( v7 == 7837 )
    {
      v20 = *a4 >> 3;
      v21 = v5[2 * v20 + 11] & (0x1E9Du >> HIBYTE(v5[2 * v20 + 11]));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v4
                                                                             + *(_QWORD *)((char *)&v5[2 * v20 + 122]
                                                                                         + HIWORD(v5[2 * (unsigned int)v5[2 * v20 + 5] + 3 + v21]))))(
                 a1,
                 a2: v21,
                 a3: a4,
                 a4);
      goto LABEL_9;
    }
    goto LABEL_19;
  }
  if ( a2.m128_f32[0] == MEMORY[0xE9691F4] )
  {
    v32 = a2.m128_f32[0];
    if ( v7 == 7837 )
    {
      v22 = *a4 >> 3;
      v23 = v5[2 * v22 + 11] & (0x1E9Du >> HIBYTE(v5[2 * v22 + 11]));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v4
                                                                             + *(_QWORD *)((char *)&v5[2 * v22 + 124]
                                                                                         + HIWORD(v5[2 * (unsigned int)v5[2 * v22 + 5] + 3 + v23]))))(
                 a1,
                 a2: v23,
                 a3: a4,
                 a4);
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( a2.m128_f32[0] != MEMORY[0xE9691F8] )
  {
    if ( v7 == 7837 )
    {
      v32 = a2.m128_f32[0];
      v8 = *a4 >> 3;
      v9 = (unsigned int)v5[2 * v8 + 5];
      v31 = v5[2 * v8 + 11];
      v28 = &v5[2 * v9];
      v30 = HIBYTE(v31);
      LODWORD(v9) = v28[(v31 & (0x16BCu >> SHIBYTE(v31))) + 3];
      v27 = &v5[2 * v8];
      v10 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *))(v4 + *(_QWORD *)((char *)v27 + WORD1(v9) + 16)))(a1: a4);
      if ( v10 != v5 )
      {
        if ( (unsigned __int16)v5[2 * v5[2 * (*v10 >> 3) + 5]
                                + 3
                                + (v5[2 * (*v10 >> 3) + 11] & (0x1ECFu >> HIBYTE(v5[2 * (*v10 >> 3) + 11])))] == 7887 )
        {
          v13 = *v10 >> 3;
          v14 = &v5[2 * v5[2 * v13 + 5]];
          v15 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, float))(v4
                                                                            + *(_QWORD *)((char *)&v5[2 * v13 + 22]
                                                                                        + HIWORD(v14[(v5[2 * v13 + 11] & (0x1ECFu >> HIBYTE(v5[2 * v13 + 11]))) + 3]))))(
                  a1: v14,
                  a2: v12,
                  a3: v10,
                  a4: v32);
          v16 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v4
                                                                                    + *(_QWORD *)((char *)v27
                                                                                                + HIWORD(v28[(v31 & (0x1E9Du >> v30)) + 3])
                                                                                                + 1280));
          result = v16(a1: v17, a2: v18, a3: v29, a4: v16, a5: v15);
          goto LABEL_9;
        }
LABEL_24:
        MEMORY[0x182770780](a1: v11, a2: v12, a3: v29, a4: v32);
        return sub_185056680();
      }
LABEL_23:
      MEMORY[0x182771080]();
      goto LABEL_24;
    }
LABEL_22:
    v32 = a2.m128_f32[0];
    MEMORY[0x182770780]();
    goto LABEL_23;
  }
  v32 = a2.m128_f32[0];
  if ( v7 != 7837 )
  {
LABEL_21:
    a2.m128_f32[0] = MEMORY[0x182770780]();
    goto LABEL_22;
  }
  v24 = *a4 >> 3;
  v25 = v5[2 * v24 + 11] & (0x1E9Du >> HIBYTE(v5[2 * v24 + 11]));
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v4
                                                                         + *(_QWORD *)((char *)&v5[2 * v24 + 126]
                                                                                     + HIWORD(v5[2
                                                                                               * (unsigned int)v5[2 * v24 + 5]
                                                                                               + 3
                                                                                               + v25]))))(
             a1,
             a2: v25,
             a3: a4,
             a4);
LABEL_9:
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
