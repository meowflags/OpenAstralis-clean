// sub_18504C8C0
// rva 0x0504c8c0  size 718  section .text  group text
// window base 0x18504c8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504C8C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 (*v11)(void); // rcx
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  _DWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // [rsp+0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+10h] [rbp-48h]
  _DWORD *v31; // [rsp+18h] [rbp-40h]
  _DWORD *v32; // [rsp+20h] [rbp-38h]
  _DWORD *v33; // [rsp+28h] [rbp-30h]
  __int64 v34; // [rsp+30h] [rbp-28h]
  __int64 v35; // [rsp+38h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-18h]
  unsigned int v37; // [rsp+4Ch] [rbp-Ch]
  unsigned int v38; // [rsp+50h] [rbp-8h]
  unsigned int v39; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    v36 = a1;
    v35 = a6;
    v34 = a5;
    v31 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v7[2 * v7[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v7[2 * (*a3 >> 3) + 11] & (0x1E99u >> HIBYTE(v7[2 * (*a3 >> 3) + 11])))] == 7833 )
  {
    v36 = a1;
    v35 = a6;
    v34 = a5;
    v9 = *a3 >> 3;
    v10 = (unsigned int)v7[2 * v9 + 5];
    v39 = v7[2 * v9 + 11];
    v33 = &v7[2 * v10];
    v38 = HIBYTE(v39);
    v37 = v39 & (0x16BCu >> SHIBYTE(v39));
    LODWORD(v10) = v33[v37 + 3];
    v32 = &v7[2 * v9];
    v11 = (__int64 (*)(void))(v6 + *(_QWORD *)((char *)v32 + WORD1(v10) + 16));
    v31 = a3;
    v12 = (_DWORD *)v11();
    if ( v12 == v7 )
    {
LABEL_11:
      MEMORY[0x182771080]();
    }
    else if ( (unsigned __int16)v7[2 * v7[2 * (*v12 >> 3) + 5]
                                 + 3
                                 + (v7[2 * (*v12 >> 3) + 11] & (0x1ECFu >> HIBYTE(v7[2 * (*v12 >> 3) + 11])))] == 7887 )
    {
      v14 = *v12 >> 3;
      v15 = v7[2 * v14 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v14 + 11]));
      v16 = *(_QWORD *)((char *)&v7[2 * v14 + 68] + HIWORD(v7[2 * (unsigned int)v7[2 * v14 + 5] + 3 + v15]));
      v30 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v6 + v16))(
              a1: v13,
              a2: v15,
              a3: v12,
              a4: v16,
              a5: v34);
      v19 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                                          + *(_QWORD *)((char *)v32
                                                                                      + HIWORD(v33[v37 + 3])
                                                                                      + 16)))(
                        a1: v17,
                        a2: v18,
                        a3: v31);
      if ( v19 == v7 )
      {
LABEL_13:
        MEMORY[0x182771080]();
        goto LABEL_14;
      }
      v22 = (unsigned __int16)v7[2 * v7[2 * (*v19 >> 3) + 5]
                               + 3
                               + (v7[2 * (*v19 >> 3) + 11] & (0x1ECFu >> HIBYTE(v7[2 * (*v19 >> 3) + 11])))];
      if ( (_DWORD)v22 != 7887 )
      {
LABEL_14:
        MEMORY[0x182770780](a1: v36, a2: v21, a3: v31, a4: v22, a5: v34, a6: v35);
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
        return sub_18504CBA0();
      }
      v23 = *v19 >> 3;
      v24 = *(_QWORD *)((char *)&v7[2 * v23 + 70]
                      + HIWORD(v7[2 * v7[2 * v23 + 5] + 3 + (v7[2 * v23 + 11] & (0x1ECFu >> HIBYTE(v7[2 * v23 + 11])))]));
      v25 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v6 + v24))(
              a1: v20,
              a2: v21,
              a3: v19,
              a4: v24,
              a5: v35);
      v26 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v6
                                                                                         + *(_QWORD *)((char *)v32 + HIWORD(v33[(v39 & (0x1E99u >> v38)) + 3]) + 40));
      result = v26(a1: v36, a2: v27, a3: v31, a4: v26, a5: v30, a6: v25);
      if ( *(int *)(v8 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    }
    MEMORY[0x182770780]();
    goto LABEL_13;
  }
  v36 = a1;
  v35 = a6;
  v34 = a5;
  v31 = a3;
  MEMORY[0x182770780]();
  goto LABEL_11;
}
