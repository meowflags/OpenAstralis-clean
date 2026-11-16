// sub_27688A0
// rva 0x027688a0  size 454  section .text  group text
// window base 0x1827688a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27688A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // r9d
  __int64 i; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // r9
  unsigned int v25; // eax
  char v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+10h] [rbp-28h]
  __int64 v29; // [rsp+18h] [rbp-20h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+28h] [rbp-10h]
  int v32; // [rsp+30h] [rbp-8h]
  unsigned int v33; // [rsp+34h] [rbp-4h]

  v31 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
LABEL_23:
    v25 = sub_2771080(a1, a2, a3, a4, a5, a6, a7: v27);
LABEL_24:
    sub_2771220(a1: v11, a2: v12, a3: i, a4: i, a5: v25, a6: v18, a7: v27);
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
    return sub_2768A80();
  }
  if ( a3 == v7 )
    goto LABEL_23;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v9 = sub_1EAA920(a1, a2, a3: 34161576);
    a3 = v31;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 24;
    *(_DWORD *)v9 = 34161576;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
  }
  v30 = v9;
  v33 = *(_DWORD *)(a3 + 8);
  sub_5787780(a1, a2, a3: v9, a4, a5: v33);
  if ( v33 != 0 )
  {
    v13 = *(unsigned int *)(v31 + 12);
    v29 = v7 + 8 * v13;
    if ( (_DWORD)v13 != 0 )
      v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                               + *(_QWORD *)(v7
                                                                           + 8LL * (*(_DWORD *)(v7 + 8 * v13) >> 3)
                                                                           + 104)))(
              a1: v11,
              a2: v12,
              a3: v7 + 8 * v13);
    else
      v14 = v7 + 353301280;
    v15 = v30;
    ++*(_DWORD *)(v30 + 4);
    v16 = *(unsigned int *)(v15 + 12);
    v17 = v7 + 8LL * *(unsigned int *)(v15 + 8);
    v28 = v14;
    sub_57881C0(a1: v16, a2: v12, a3: v15, a4: v13, a5: v14, a6: v17);
    for ( i = 1; ; i = (unsigned int)(v32 + 1) )
    {
      v25 = v33;
      v10 = v31;
      if ( (int)v33 <= (int)i )
        break;
      if ( v33 <= (unsigned int)i )
        goto LABEL_24;
      v20 = *(unsigned int *)(v31 + 4 * i + 12);
      v28 = v7 + 8 * v20;
      v32 = i;
      if ( (_DWORD)v20 != 0 )
        v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                                 + *(_QWORD *)(v7
                                                                             + 8LL * (*(_DWORD *)(v7 + 8 * v20) >> 3)
                                                                             + 104)))(
                a1: v11,
                a2: v12,
                a3: v7 + 8 * v20);
      else
        v21 = v7 + 353301280;
      v22 = v30;
      ++*(_DWORD *)(v30 + 4);
      v23 = *(unsigned int *)(v22 + 12);
      v24 = v7 + 8LL * *(unsigned int *)(v22 + 8);
      v29 = v21;
      sub_57881C0(a1: v23, a2: v12, a3: v22, a4: i, a5: v21, a6: v24);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v11, a2: v12, a3: v10);
  return v30;
}
