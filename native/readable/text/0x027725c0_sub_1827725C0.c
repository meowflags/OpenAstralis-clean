// sub_27725C0
// rva 0x027725c0  size 395  section .text  group text
// window base 0x1827725c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27725C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  _DWORD *i; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-40h]
  int v24; // [rsp+14h] [rbp-34h]
  __int64 v25; // [rsp+18h] [rbp-30h]
  _DWORD *v26; // [rsp+20h] [rbp-28h]
  __int64 v27; // [rsp+28h] [rbp-20h]
  __int64 v28; // [rsp+30h] [rbp-18h]
  __int64 v29; // [rsp+38h] [rbp-10h]
  __int64 v30; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
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
    return sub_2772760(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21);
  }
  v26 = a3;
  v30 = a5;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
  {
    v29 = a1;
    v28 = a6;
    v8 = sub_1EAA920(a1, a2, a3: 35804184);
    a1 = v29;
    a6 = v28;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 16;
    *(_DWORD *)v8 = 35804184;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
  }
  v25 = v8;
  v9 = a6 - *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 192);
  v28 = a6;
  v29 = a1;
  v27 = v9;
  sub_15B0140(a1: v6 + 94153702, a2, a3: a1, a4: v6 + 94153702, a5: v9, a6: v8);
  v13 = *(unsigned int *)(v25 + 4);
  if ( (_DWORD)v13 == 0 )
    goto LABEL_5;
  v24 = *(_DWORD *)(v25 + 4);
  v23 = &v6[2 * v13];
  if ( (unsigned int)sub_2772420(a1: v11, a2: v12, a3: v26, a4: v13, a5: v23, a6: v30) != 0 )
  {
    for ( i = &v6[2 * v6[2 * v24 + 7]]; i != v6; i = &v6[2 * v23[7]] )
    {
      v23 = i;
      if ( (unsigned int)sub_2772420(a1: v11, a2: v12, a3: v26, a4: (__int64)v23, a5: v23, a6: v30) == 0 )
        goto LABEL_9;
    }
LABEL_5:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: i);
    return 1;
  }
LABEL_9:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v11, a2: v12, a3: v15);
  return 0;
}
