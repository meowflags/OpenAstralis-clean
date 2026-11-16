// sub_181597480
// rva 0x01597480  size 853  section .text  group text
// window base 0x181597480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181597480(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx
  _DWORD *v6; // rbp
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  _DWORD *v24; // r8
  __int64 v25; // rsi
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v34; // [rsp+8h] [rbp-50h]
  unsigned int v35; // [rsp+14h] [rbp-44h]
  _DWORD *v36; // [rsp+18h] [rbp-40h]
  _DWORD *v37; // [rsp+20h] [rbp-38h]
  __int64 v38; // [rsp+28h] [rbp-30h]
  _DWORD *v39; // [rsp+30h] [rbp-28h]
  _DWORD *v40; // [rsp+38h] [rbp-20h]
  unsigned int v41; // [rsp+40h] [rbp-18h]
  unsigned int v42; // [rsp+44h] [rbp-14h]
  __int64 (__fastcall *v43)(_QWORD, _DWORD *, _DWORD *, __int64, _DWORD *); // [rsp+48h] [rbp-10h]
  unsigned int v44; // [rsp+54h] [rbp-4h]

  v40 = a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v9 + 8) )
  {
    v39 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    v10 = (__int64 (*)(void))(v7 + *(_QWORD *)&v8[2 * (*a3 >> 3) + 36]);
    v39 = a3;
    v11 = v10();
    v38 = v11;
    v15 = *(unsigned int *)(v11 + 8);
    v44 = v15;
    if ( (_DWORD)v15 == 0 )
    {
      v31 = 0;
LABEL_20:
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v13, a2: v14, a3: v12, a4: v31);
      return (__int64)v8;
    }
    v5 = *(unsigned int *)(v11 + 12);
    v6 = &v8[2 * v5];
    if ( (_DWORD)v5 == 0 )
      goto LABEL_29;
    v37 = &v8[2 * v5];
    v16 = (unsigned int)v37[4];
    v43 = (__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *, __int64, _DWORD *))(v7
                                                                                + *(_QWORD *)&v8[2 * (*v40 >> 3) + 40]);
    v36 = &v8[2 * v16];
    v35 = v5;
    v17 = (_DWORD *)v43(a1: v43, a2: v36, a3: v40, a4: v15, a5: v36);
    if ( v17 == v8 )
      v17 = v8 + 13106284;
    v20 = *v17 >> 3;
    v5 = v8[2 * v20 + 11] & (0x1EFBu >> HIBYTE(v8[2 * v20 + 11]));
    v21 = (unsigned __int16)v8[2 * (unsigned int)v8[2 * v20 + 5] + 3 + v5];
    if ( (_DWORD)v21 != 7931 )
      goto LABEL_30;
    v22 = *v17 >> 3;
    v23 = v8[2 * v22 + 11] & (0x1EFBu >> HIBYTE(v8[2 * v22 + 11]));
    v42 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                  + *(_QWORD *)((char *)&v8[2 * v22 + 6]
                                                                                              + HIWORD(v8[2 * (unsigned int)v8[2 * v22 + 5] + 3 + v23]))))(
            a1: v18,
            a2: v23,
            a3: v17,
            a4: &v8[2 * v8[2 * v35 + 5]],
            a5: &v8[2 * v8[2 * v35 + 5]]);
    v5 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v43;
        v24 = v40;
        if ( (int)v44 <= (int)v5 )
        {
          v31 = v42;
          goto LABEL_20;
        }
        if ( v44 <= (unsigned int)v5 )
          goto LABEL_31;
        v25 = *(unsigned int *)(v38 + 4 * v5 + 12);
        v26 = &v8[2 * v25];
        if ( (_DWORD)v25 == 0 )
          goto LABEL_32;
        v36 = &v8[2 * v25];
        v41 = v5;
        v34 = &v8[2 * v36[4]];
        v35 = v25;
        v27 = (_DWORD *)v43(a1: v26, a2: (_DWORD *)v25, a3: v40, a4: v44, a5: v34);
        if ( v27 == v8 )
          v27 = v8 + 13106284;
        if ( (unsigned __int16)v8[2 * v8[2 * (*v27 >> 3) + 5]
                                + 3
                                + (v8[2 * (*v27 >> 3) + 11] & (0x1EFBu >> HIBYTE(v8[2 * (*v27 >> 3) + 11])))] != 7931 )
          goto LABEL_33;
        v29 = *v27 >> 3;
        v30 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                     + *(_QWORD *)((char *)&v8[2 * v29 + 6]
                                                                                                 + HIWORD(v8[2 * v8[2 * v29 + 5] + 3 + (v8[2 * v29 + 11] & (0x1EFBu >> HIBYTE(v8[2 * v29 + 11])))]))))(
                a1: v28,
                a2: v35,
                a3: v27,
                a4: &v8[2 * v8[2 * v35 + 5]],
                a5: &v8[2 * v8[2 * v35 + 5]]);
        v5 = v41 + 1;
        if ( v30 == 0 )
          break;
        v42 = 1;
      }
      if ( v42 != 0 )
        break;
      v42 = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v36;
  }
  MEMORY[0x182771080]();
LABEL_29:
  v37 = v6;
  v17 = (_DWORD *)MEMORY[0x182771080]();
LABEL_30:
  MEMORY[0x18276FC00](a1: v18, a2: v19, a3: v17, a4: v21, a5: v8 + 8605382);
LABEL_31:
  v41 = v5;
  MEMORY[0x182771220](a1: v13, a2: v14, a3: (unsigned int)v5, a4: v42, a5: v44);
LABEL_32:
  v36 = v26;
  v41 = v5;
  v27 = (_DWORD *)MEMORY[0x182771080](a1: v26, a2: v25, a3: v12, a4: v42, a5: v24);
LABEL_33:
  MEMORY[0x18276FC00](a1: v36, a2: v41, a3: v27, a4: v42, a5: v8 + 8605382, a6: v38);
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
  return sub_1815977E0();
}
