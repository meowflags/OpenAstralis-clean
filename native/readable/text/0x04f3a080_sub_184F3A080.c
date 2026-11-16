// sub_4F3A080
// rva 0x04f3a080  size 728  section .text  group text
// window base 0x184f3a080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3A080(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  int v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]
  __int64 v30; // [rsp+18h] [rbp-30h]
  unsigned __int64 v31; // [rsp+20h] [rbp-28h]
  unsigned int v32; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v33; // [rsp+30h] [rbp-18h]
  unsigned int v34; // [rsp+34h] [rbp-14h]
  unsigned int v35; // [rsp+38h] [rbp-10h]
  unsigned int v36; // [rsp+3Ch] [rbp-Ch]
  unsigned int v37; // [rsp+40h] [rbp-8h]
  unsigned int v38; // [rsp+44h] [rbp-4h]

  v38 = a2;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v9 + 8) )
  {
    v37 = a1;
    v35 = a5;
    sub_1EB84E0();
LABEL_22:
    sub_2770780(a1: v11, a2: v12, a3: v31);
    goto LABEL_23;
  }
  v31 = a3;
  if ( a6 == v8 )
    a6 = v8 + 353301280;
  v30 = a6;
  v37 = a1;
  v10 = *(char *)(a3 + 12);
  v36 = *(_DWORD *)(a3 + 8);
  v35 = a5;
  v34 = v10;
  sub_632A360(a1: v8 + 376643464, a2, a3: a5, a4: v36, a5: v36, a6: v36);
  v6 = v30;
  if ( (unsigned __int16)*(_DWORD *)(v8
                                   + 8LL * *(unsigned int *)(v8 + 8LL * (*(_DWORD *)v30 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v8 + 8LL * (*(_DWORD *)v30 >> 3) + 44)
                                    & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*(_DWORD *)v30 >> 3) + 44))))
                                   + 12) != 1384 )
    goto LABEL_22;
  v13 = *(_DWORD *)v30 >> 3;
  v14 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v13 + 20);
  v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                           + *(_QWORD *)(v8
                                                                       + 8 * v13
                                                                       + HIWORD(*(_DWORD *)(v14
                                                                                          + 4LL
                                                                                          * (*(_DWORD *)(v8 + 8 * v13 + 44)
                                                                                           & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v13 + 44))))
                                                                                          + 12))
                                                                       + 40)))(
          a1: v14,
          a2: v12,
          a3: v30);
  sub_632A360(a1: v8 + 377133352, a2: v17, a3: v37, a4: v16, a5: v38, a6: v15);
  v18 = v8 + 8LL * *(unsigned int *)(v31 + 4);
  v33 = v36 + v38 - v37;
  v32 = v38 - v37;
  v20 = sub_4F39060(a1: v19, a2: v38, a3: v18, a4: v33, a5: v34, a6: v33);
  if ( v20 == v8 )
  {
LABEL_23:
    sub_2771080(a1: v21, a2: v22, a3: v31, a4: v36);
    goto LABEL_24;
  }
  v29 = v20;
  sub_1EB4960(a1: (v32 + v35) << v34, a2: (v36 - v35) << v34, a3: v20, a4: v34, a5: v35 << v34, a6: v20);
  v6 = v30;
  if ( *(_DWORD *)v30 >> 3 != 4260335 )
    goto LABEL_7;
  v26 = *(unsigned int *)(v30 + 4);
  if ( (_DWORD)v26 == 0 )
  {
LABEL_24:
    sub_2771080(a1: v34, a2: v38, a3: v31, a4: v6, a5: v35, a6: v37);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F3A360();
  }
  if ( *(_DWORD *)(v8 + 8 * v26 + 8) >> *(_BYTE *)(v30 + 12) == v32 )
  {
    v23 = sub_4F3B1C0(a1: v35, a2: v30, a3: v29, a4: (unsigned int)*(char *)(v30 + 12), a5: v34, a6: v33);
    goto LABEL_8;
  }
LABEL_7:
  v23 = sub_4F3AE40(a1: v35, a2: v30, a3: v29, a4: v37, a5: v34, a6: v33, a7: v28, a8: v38);
LABEL_8:
  v24 = v31;
  if ( v29 != v23 )
    *(_BYTE *)(v31 + 12) = 1;
  *(_DWORD *)(v24 + 4) = (unsigned __int64)(v23 - v8) >> 3;
  if ( (*(_DWORD *)v24 & 2) != 0 )
  {
    v27 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v27) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v27) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v24 + 8) = v33;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return v24;
}
