// sub_4F25E80
// rva 0x04f25e80  size 619  section .text  group text
// window base 0x184f25e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F25E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // r10d
  __int64 v29; // rsi
  void (__fastcall *v30)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD); // rcx
  unsigned int v31; // ecx
  char v32; // [rsp+0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+8h] [rbp-20h]
  __int64 v34; // [rsp+10h] [rbp-18h]
  unsigned int v35; // [rsp+18h] [rbp-10h]
  unsigned int v36; // [rsp+1Ch] [rbp-Ch]
  unsigned int v37; // [rsp+20h] [rbp-8h]
  unsigned int v38; // [rsp+24h] [rbp-4h]

  v34 = a3;
  v33 = a5;
  v38 = a1;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v8 + 8) )
  {
    v37 = a6;
    sub_1EB84E0();
    goto LABEL_20;
  }
  v37 = a6;
  sub_4F25A20(a1, a2, a3, a4, a5, a6, a7: v32);
  if ( v33 == v7 )
  {
LABEL_20:
    sub_2771080(a1: v10, a2: v11, a3: v34);
    goto LABEL_21;
  }
  v36 = *(_DWORD *)(v33 + 8);
  sub_6329C40(a1: v7, a2: v11, a3: v37, a4: v9, a5: v38, a6: v36);
  if ( v38 != 0 )
  {
    v13 = *(unsigned int *)(v34 + 12);
    if ( (_DWORD)v13 != 0 )
    {
      v14 = *(_DWORD *)(v7 + 8 * v13) >> 3;
      if ( (unsigned __int16)*(_DWORD *)(v7
                                       + 8LL * *(unsigned int *)(v7 + 8 * v14 + 20)
                                       + 4LL
                                       * (*(_DWORD *)(v7 + 8 * v14 + 44)
                                        & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v14 + 44))))
                                       + 12) == 1384 )
      {
        v15 = *(_DWORD *)(v7 + 8 * v13) >> 3;
        v16 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v15 + 20);
        v17 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))(v6
                                                                + *(_QWORD *)(v7
                                                                            + 8 * v15
                                                                            + HIWORD(*(_DWORD *)(v16
                                                                                               + 4LL
                                                                                               * (*(_DWORD *)(v7 + 8 * v15 + 44)
                                                                                                & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v15 + 44))))
                                                                                               + 12))
                                                                            + 40)))(
                a1: v38,
                a2: v16,
                a3: v7 + 8 * v13);
        v19 = v34;
        v20 = *(unsigned int *)(v34 + 16);
        if ( v17 <= (int)v20 )
        {
          if ( *(int *)(v8 + 16) <= 0 )
          {
            v36 = v17;
            sub_277F280();
          }
          return 0xFFFFFFFFLL;
        }
        v22 = v38;
        v23 = *(unsigned int *)(v34 + 12);
        if ( v17 - (int)v20 < (int)v38 )
          JUMPOUT(0x309E3BFC7LL);
        v24 = v38;
        if ( (_DWORD)v23 != 0 )
        {
          v25 = *(_DWORD *)(v7 + 8 * v23) >> 3;
          v26 = *(unsigned int *)(v7 + 8 * v25 + 20);
          v27 = *(unsigned int *)(v7 + 8 * v25 + 44);
          v28 = v38;
          if ( (unsigned __int16)*(_DWORD *)(v7 + 8 * v26 + 4LL * ((unsigned int)v27 & (0x568u >> SBYTE3(v27))) + 12) == 1384 )
          {
            v36 = v17;
            v29 = *(_DWORD *)(v7 + 8 * v23) >> 3;
            v30 = (void (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD))(v6
                                                                                         + *(_QWORD *)(v7 + 8 * v29 + HIWORD(*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v29 + 20) + 4LL * (*(_DWORD *)(v7 + 8 * v29 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v7 + 8 * v29 + 44)))) + 12)) + 24));
            v35 = v38;
            v30(a1: v33, a2: v37, a3: v7 + 8 * v23, a4: v30, a5: v20, a6: (unsigned int)v20 + v38);
            v31 = v35;
            *(_DWORD *)(v34 + 16) += v35;
            if ( *(int *)(v8 + 16) <= 0 )
              sub_277F280();
            return v31;
          }
LABEL_24:
          sub_2770780(a1: v22, a2: v27, a3: v19, a4: v28, a5: v33, a6: v37);
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
          return sub_4F26100();
        }
LABEL_23:
        v36 = v17;
        sub_2771080(a1: v22, a2: v18, a3: v19, a4: v24);
        goto LABEL_24;
      }
LABEL_22:
      v17 = sub_2770780();
      goto LABEL_23;
    }
LABEL_21:
    sub_2771080();
    goto LABEL_22;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v38, a2: v12, a3: v34);
  return 0;
}
