// sub_1815ACBE0
// rva 0x015acbe0  size 560  section .text  group text
// window base 0x1815acbe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815ACBE0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 result; // rax
  unsigned __int64 v29; // rbx
  unsigned int *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 i; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // [rsp+0h] [rbp-28h] BYREF
  __int64 v41; // [rsp+8h] [rbp-20h]
  __int64 v42; // [rsp+10h] [rbp-18h]
  __int64 v43; // [rsp+18h] [rbp-10h]
  unsigned int *v44; // [rsp+20h] [rbp-8h]

  v44 = a3;
  v43 = a5;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  v10 = a3[2];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_21:
    MEMORY[0x182771080]();
    goto LABEL_22;
  }
  v11 = *(unsigned int *)(v8 + 8 * v10 + 4);
  v12 = v8 + 8 * v10;
  if ( (_DWORD)v11 == 0 )
  {
LABEL_22:
    MEMORY[0x182771080]();
    goto LABEL_23;
  }
  v42 = v12;
  MEMORY[0x185A9A080](a1, a2, a3: v8 + 8 * v11);
  sub_1815ABAA0(a1: v13, a2: v14, a3: (__int64)v44);
  v17 = v43;
  v18 = v44;
  v44[4] = (unsigned __int64)(v43 - v8) >> 3;
  __faststorefence();
  if ( (*v18 & 2) != 0 )
  {
    v29 = ((unsigned __int64)v18 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)(((unsigned __int64)v18 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v18 - v29) >> 9) + 0x38) != 0 )
      *(_BYTE *)(((unsigned __int64)v18 & 0xFFFFFFFFFFF80000LL) + (((unsigned __int64)v18 - v29) >> 9) + 0x38) = 0;
  }
  v19 = v8 + 376614496;
  if ( v8 + 376614496 == v17 )
  {
    *((_BYTE *)v18 + 34) = 0;
    __faststorefence();
  }
  v20 = v18[3];
  if ( (_DWORD)v20 != 0 )
  {
    v21 = *(_DWORD *)(v8 + 8 * v20) >> 3;
    if ( (unsigned __int16)*(_DWORD *)(v8
                                     + 8LL * *(unsigned int *)(v8 + 8 * v21 + 20)
                                     + 4LL
                                     * (*(_DWORD *)(v8 + 8 * v21 + 44)
                                      & (0x62Fu >> HIBYTE(*(_DWORD *)(v8 + 8 * v21 + 44))))
                                     + 12) != 1583 )
      goto LABEL_25;
    v22 = *(_DWORD *)(v8 + 8 * v20) >> 3;
    v23 = v8 + 8LL * *(unsigned int *)(v8 + 8 * v22 + 20);
    v24 = *(_DWORD *)(v8 + 8 * v22 + 44) & (0x62Fu >> HIBYTE(*(_DWORD *)(v8 + 8 * v22 + 44)));
    ((void (__fastcall *)(__int64, __int64, __int64))(v7
                                                    + *(_QWORD *)(v8
                                                                + 8 * v22
                                                                + HIWORD(*(_DWORD *)(v23 + 4 * v24 + 12))
                                                                + 48)))(
      a1: v24,
      a2: v23,
      a3: v8 + 8 * v20);
    v18 = v44;
    v44[3] = 0;
  }
  v25 = v18[2];
  if ( (_DWORD)v25 != 0 )
  {
    v26 = *(unsigned int *)(v8 + 8 * v25 + 4);
    v27 = v8 + 8 * v25;
    if ( (_DWORD)v26 != 0 )
    {
      v42 = v27;
      result = MEMORY[0x185A98320](a1: v15, a2: v16, a3: v8 + 8 * v26, a4: v19, a5: 1);
      if ( *(int *)(v9 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    }
    goto LABEL_24;
  }
LABEL_23:
  MEMORY[0x182771080]();
LABEL_24:
  MEMORY[0x182771080](a1: v15, a2: v16, a3: v18, a4: v19, a5: v27);
LABEL_25:
  for ( i = MEMORY[0x18276B120](); ; i = MEMORY[0x182769900](a1: v35, a2: v36, a3: v42, a4: v34, a5: &a7) )
  {
    v42 = i;
    v30 = v44;
    v31 = v44[2];
    if ( (_DWORD)v31 == 0 )
      break;
    v32 = *(unsigned int *)(v8 + 8 * v31 + 4);
    v33 = v8 + 8 * v31;
    if ( (_DWORD)v32 == 0 )
      goto LABEL_27;
    v41 = v33;
    MEMORY[0x185A98320](a1: v38, a2: v39, a3: v8 + 8 * v32, a4: v8 + 8 * v32, a5: 1);
  }
  MEMORY[0x182771080]();
LABEL_27:
  MEMORY[0x182771080](a1: v38, a2: v39, a3: v30, a4: v43, a5: v33);
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
  return sub_1815ACE20();
}
