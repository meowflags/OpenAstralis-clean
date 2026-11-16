// sub_185054140
// rva 0x05054140  size 443  section .text  group text
// window base 0x185054140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185054140(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (*v10)(void); // rcx
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
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v24; // [rsp+10h] [rbp-28h]
  _DWORD *v25; // [rsp+18h] [rbp-20h]
  _DWORD *v26; // [rsp+20h] [rbp-18h]
  __int64 v27; // [rsp+28h] [rbp-10h]
  unsigned int v28; // [rsp+30h] [rbp-8h]
  unsigned int v29; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v27 = a5;
    v24 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v6[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))] == 7837 )
  {
    v27 = a5;
    v8 = *a3 >> 3;
    v9 = (unsigned int)v6[2 * v8 + 5];
    v29 = v6[2 * v8 + 11];
    v26 = &v6[2 * v9];
    v28 = HIBYTE(v29);
    LODWORD(v9) = v26[(v29 & (0x16BCu >> SHIBYTE(v29))) + 3];
    v25 = &v6[2 * v8];
    v10 = (__int64 (*)(void))(v5 + *(_QWORD *)((char *)v25 + WORD1(v9) + 16));
    v24 = a3;
    v11 = (_DWORD *)v10();
    if ( v11 == v6 )
    {
LABEL_9:
      MEMORY[0x182771080]();
      goto LABEL_10;
    }
    v14 = (unsigned __int16)v6[2 * v6[2 * (*v11 >> 3) + 5]
                             + 3
                             + (v6[2 * (*v11 >> 3) + 11] & (0x1ECFu >> HIBYTE(v6[2 * (*v11 >> 3) + 11])))];
    if ( (_DWORD)v14 != 7887 )
    {
LABEL_10:
      MEMORY[0x182770780](a1: v12, a2: v13, a3: v24, a4: v14, a5: v27);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_185054300();
    }
    v15 = *v11 >> 3;
    v16 = (unsigned int)v6[2 * v15 + 11];
    v17 = *(_QWORD *)((char *)&v6[2 * v15 + 8]
                    + HIWORD(v6[2 * v6[2 * v15 + 5] + 3 + ((unsigned int)v16 & (0x1ECFu >> HIBYTE(v6[2 * v15 + 11])))]));
    v18 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v5 + v17))(
            a1: v16,
            a2: v13,
            a3: v11,
            a4: v17,
            a5: v27);
    v19 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                              + *(_QWORD *)((char *)v25
                                                                                          + HIWORD(v26[(v29 & (0x1E9Du >> v28)) + 3])
                                                                                          + 976));
    result = v19(a1: v20, a2: v21, a3: v24, a4: v19, a5: v18);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v27 = a5;
  v24 = a3;
  MEMORY[0x182770780]();
  goto LABEL_9;
}
