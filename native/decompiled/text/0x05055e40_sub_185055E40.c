// sub_185055E40
// rva 0x05055e40  size 670  section .text  group text
// window base 0x185055e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185055E40(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 (*v12)(void); // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  __int64 v28; // [rsp+10h] [rbp-38h]
  _DWORD *v29; // [rsp+18h] [rbp-30h]
  _DWORD *v30; // [rsp+20h] [rbp-28h]
  _DWORD *v31; // [rsp+28h] [rbp-20h]
  _DWORD *v32; // [rsp+30h] [rbp-18h]
  _DWORD *v33; // [rsp+38h] [rbp-10h]
  unsigned int v34; // [rsp+40h] [rbp-8h]
  unsigned int v35; // [rsp+44h] [rbp-4h]

  v33 = a5;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    v30 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v8[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] == 7837 )
  {
    v10 = *a3 >> 3;
    v11 = (unsigned int)v8[2 * v10 + 5];
    v35 = v8[2 * v10 + 11];
    v32 = &v8[2 * v11];
    v34 = HIBYTE(v35);
    LODWORD(v11) = v32[(v35 & (0x16BCu >> SHIBYTE(v35))) + 3];
    v31 = &v8[2 * v10];
    v12 = (__int64 (*)(void))(v7 + *(_QWORD *)((char *)v31 + WORD1(v11) + 16));
    v30 = a3;
    v13 = (_DWORD *)v12();
    if ( v33 == v8 )
    {
LABEL_11:
      v23 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v23 + 48) > *(_QWORD *)(v9 + 32) )
        goto LABEL_17;
      *(_QWORD *)(v9 + 40) = v23 + 48;
      *(_DWORD *)v23 = 34101256;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v23 + 32) = 0;
      *(_QWORD *)(v23 + 40) = 0;
      v29 = v13;
      goto LABEL_13;
    }
    v16 = (unsigned __int16)v8[2 * v8[2 * (*v33 >> 3) + 5]
                             + 3
                             + (v8[2 * (*v33 >> 3) + 11] & (0x59Du >> HIBYTE(v8[2 * (*v33 >> 3) + 11])))];
    if ( (_DWORD)v16 != 1437 )
      goto LABEL_14;
    if ( v13 == v8 )
      goto LABEL_15;
    if ( (unsigned __int16)v8[2 * v8[2 * (*v13 >> 3) + 5]
                            + 3
                            + (v8[2 * (*v13 >> 3) + 11] & (0x1ECFu >> HIBYTE(v8[2 * (*v13 >> 3) + 11])))] != 7887 )
    {
      while ( 1 )
      {
        v13 = (_DWORD *)MEMORY[0x182770780]();
LABEL_17:
        v29 = v13;
        v23 = MEMORY[0x181EAA920](a1: v14, a2: v15, a3: 34101256);
LABEL_13:
        *(_DWORD *)(v23 + 20) = 46923644;
        *(_DWORD *)(v23 + 16) = v8[93585974];
        *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - (_QWORD)v8) >> 3;
        v28 = v23;
        sub_18503B9A0(a1: v14, a2: v15, a3: (unsigned int *)v23, a4: v23, a5: 0);
        MEMORY[0x182769900](a1: v25, a2: v26, a3: v28, a4: v24, a5: &a7);
LABEL_14:
        MEMORY[0x18276FC00](a1: v14, a2: v15, a3: v33, a4: v16, a5: v8 + 10828194);
LABEL_15:
        MEMORY[0x182771080]();
      }
    }
    v17 = *v13 >> 3;
    v18 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7
                                                               + *(_QWORD *)((char *)&v8[2 * v17 + 34]
                                                                           + HIWORD(v8[2 * v8[2 * v17 + 5]
                                                                                     + 3
                                                                                     + (v8[2 * v17 + 11]
                                                                                      & (0x1ECFu >> HIBYTE(v8[2 * v17 + 11])))]))))(
            a1: v33,
            a2: v15,
            a3: v13);
    v19 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                              + *(_QWORD *)((char *)v31
                                                                                          + HIWORD(v32[(v35 & (0x1E9Du >> v34)) + 3])
                                                                                          + 1280));
    result = v19(a1: v20, a2: v21, a3: v30, a4: v19, a5: v18);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v30 = a3;
  v13 = (_DWORD *)MEMORY[0x182770780]();
  goto LABEL_11;
}
