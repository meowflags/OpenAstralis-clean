// sub_185054860
// rva 0x05054860  size 518  section .text  group text
// window base 0x185054860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185054860(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 (*v11)(void); // rcx
  _DWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64); // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-40h]
  _DWORD *v24; // [rsp+10h] [rbp-38h]
  _DWORD *v25; // [rsp+18h] [rbp-30h]
  _DWORD *v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+28h] [rbp-20h]
  __int64 v28; // [rsp+30h] [rbp-18h]
  __int64 v29; // [rsp+38h] [rbp-10h]
  unsigned int v30; // [rsp+40h] [rbp-8h]
  unsigned int v31; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    v29 = a1;
    v28 = a6;
    v27 = a5;
    v23 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v7[2 * v7[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v7[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v7[2 * (*a3 >> 3) + 11])))] == 7837 )
  {
    v29 = a1;
    v28 = a6;
    v27 = a5;
    v9 = *a3 >> 3;
    v10 = (unsigned int)v7[2 * v9 + 5];
    v31 = v7[2 * v9 + 11];
    v26 = &v7[2 * v10];
    v30 = HIBYTE(v31);
    LODWORD(v10) = v26[(v31 & (0x16BCu >> SHIBYTE(v31))) + 3];
    v25 = &v7[2 * v9];
    v11 = (__int64 (*)(void))(v6 + *(_QWORD *)((char *)v25 + WORD1(v10) + 16));
    v24 = v7 + 94303674;
    v23 = a3;
    v12 = (_DWORD *)v11();
    if ( v12 == v7 )
    {
LABEL_9:
      MEMORY[0x182771080]();
      goto LABEL_10;
    }
    v14 = (unsigned __int16)v7[2 * v7[2 * (*v12 >> 3) + 5]
                             + 3
                             + (v7[2 * (*v12 >> 3) + 11] & (0x1ECFu >> HIBYTE(v7[2 * (*v12 >> 3) + 11])))];
    if ( (_DWORD)v14 != 7887 )
    {
LABEL_10:
      MEMORY[0x182770780](a1: v29, a2: v13, a3: v23, a4: v14, a5: v27, a6: v28);
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
      return sub_185054A80();
    }
    v15 = *v12 >> 3;
    v16 = *(_QWORD *)((char *)&v7[2 * v15 + 28]
                    + HIWORD(v7[2 * v7[2 * v15 + 5] + 3 + (v7[2 * v15 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v15 + 11])))]));
    v17 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v6 + v16))(
            a1: v29,
            a2: v13,
            a3: v12,
            a4: v16,
            a5: v27,
            a6: v28);
    v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64))(v6
                                                                                        + *(_QWORD *)((char *)v25 + HIWORD(v26[(v31 & (0x1E9Du >> v30)) + 3]) + 992));
    result = v18(a1: v19, a2: v20, a3: v23, a4: v18, a5: v24, a6: v17);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v29 = a1;
  v28 = a6;
  v27 = a5;
  v23 = a3;
  MEMORY[0x182770780]();
  goto LABEL_9;
}
