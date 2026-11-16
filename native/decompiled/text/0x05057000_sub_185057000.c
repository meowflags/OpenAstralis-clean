// sub_185057000
// rva 0x05057000  size 654  section .text  group text
// window base 0x185057000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185057000(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v28; // [rsp+10h] [rbp-28h]
  _DWORD *v29; // [rsp+18h] [rbp-20h]
  _DWORD *v30; // [rsp+20h] [rbp-18h]
  unsigned int v31; // [rsp+28h] [rbp-10h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  __int64 v33; // [rsp+30h] [rbp-8h]

  v30 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
  {
    v33 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_16;
  }
  v8 = (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))];
  if ( a5 == 0 )
  {
    v33 = 0;
    if ( v8 == 7837 )
    {
      v23 = *a3 >> 3;
      v24 = v6[2 * v23 + 11] & (0x1E9Du >> HIBYTE(v6[2 * v23 + 11]));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v5
                                                                             + *(_QWORD *)((char *)&v6[2 * v23 + 316]
                                                                                         + HIWORD(v6[2 * (unsigned int)v6[2 * v23 + 5] + 3 + v24]))))(
                 a1,
                 a2: v24,
                 a3,
                 a4: a3);
      goto LABEL_8;
    }
LABEL_16:
    MEMORY[0x182770780]();
LABEL_17:
    v33 = a5;
    MEMORY[0x182770780]();
    goto LABEL_18;
  }
  if ( a5 != 1 )
  {
    if ( v8 == 7837 )
    {
      v33 = a5;
      v9 = *a3 >> 3;
      v10 = (unsigned int)v6[2 * v9 + 5];
      v32 = v6[2 * v9 + 11];
      v29 = &v6[2 * v10];
      v31 = HIBYTE(v32);
      LODWORD(v10) = v29[(v32 & (0x16BCu >> SHIBYTE(v32))) + 3];
      v28 = &v6[2 * v9];
      v11 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *))(v5 + *(_QWORD *)((char *)v28 + WORD1(v10) + 16)))(a1: a3);
      if ( v11 != v6 )
      {
        v14 = (unsigned __int16)v6[2 * v6[2 * (*v11 >> 3) + 5]
                                 + 3
                                 + (v6[2 * (*v11 >> 3) + 11] & (0x1ECFu >> HIBYTE(v6[2 * (*v11 >> 3) + 11])))];
        if ( (_DWORD)v14 == 7887 )
        {
          v15 = *v11 >> 3;
          v16 = (unsigned int)v6[2 * v15 + 11];
          v17 = *(_QWORD *)((char *)&v6[2 * v15 + 36]
                          + HIWORD(v6[2 * v6[2 * v15 + 5]
                                    + 3
                                    + ((unsigned int)v16 & (0x1ECFu >> HIBYTE(v6[2 * v15 + 11])))]));
          v18 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v5 + v17))(
                  a1: v16,
                  a2: v13,
                  a3: v11,
                  a4: v17,
                  a5: v33);
          v19 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                                    + *(_QWORD *)((char *)v28
                                                                                                + HIWORD(v29[(v32 & (0x1E9Du >> v31)) + 3])
                                                                                                + 1280));
          result = v19(a1: v20, a2: v21, a3: v30, a4: v19, a5: v18);
          goto LABEL_8;
        }
LABEL_20:
        MEMORY[0x182770780](a1: v12, a2: v13, a3: v30, a4: v14, a5: v33);
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
        return sub_1850572A0();
      }
LABEL_19:
      MEMORY[0x182771080]();
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  v33 = 1;
  if ( v8 != 7837 )
  {
LABEL_18:
    MEMORY[0x182770780]();
    goto LABEL_19;
  }
  v25 = *a3 >> 3;
  v26 = v6[2 * v25 + 11] & (0x1E9Du >> HIBYTE(v6[2 * v25 + 11]));
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v5
                                                                         + *(_QWORD *)((char *)&v6[2 * v25 + 318]
                                                                                     + HIWORD(v6[2
                                                                                               * (unsigned int)v6[2 * v25 + 5]
                                                                                               + 3
                                                                                               + v26]))))(
             a1,
             a2: v26,
             a3,
             a4: a3);
LABEL_8:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
