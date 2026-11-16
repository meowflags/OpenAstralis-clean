// sub_1E63DE0
// rva 0x01e63de0  size 401  section .text  group text
// window base 0x181e63de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E63DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+10h] [rbp-38h]
  __int64 v29; // [rsp+18h] [rbp-30h]
  __int64 v30; // [rsp+20h] [rbp-28h]
  _DWORD *v31; // [rsp+28h] [rbp-20h]
  __int64 v32; // [rsp+30h] [rbp-18h]
  __int64 v33; // [rsp+38h] [rbp-10h]
  unsigned int v34; // [rsp+40h] [rbp-8h]
  int v35; // [rsp+44h] [rbp-4h]

  v33 = a3;
  v35 = a5;
  v32 = a6;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a6 != v6 )
  {
    v8 = *(char *)(a6 + 69);
    v34 = v8;
    if ( a5 < -1 )
    {
LABEL_15:
      sub_1E60C20(a1, a2, a3: a5, a4, a5: v8, a6, a7: v26, a8: v27, a9: v28, a10: v29, a11: v30, a12: (char)v31);
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
      return sub_1E63F80();
    }
    v9 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v9 = sub_1EAA920(a1, a2, a3: 40451336);
      v8 = v34;
      a5 = v35;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 24;
      *(_DWORD *)v9 = 40451336;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    *(_QWORD *)(v9 + 8) = a5;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(v6 + 376650988);
    v31 = (_DWORD *)v9;
    v30 = sub_1E63720(a1, a2, a3: (_DWORD *)v9, a4: v9, a5: v8);
    v29 = sub_1E633C0(a1: v11, a2: v12, a3: v31, a4: v10, a5: v34, a6: v13, a7: v26, a8: v27);
    v18 = sub_1E63580(a1: v15, a2: v16, a3: v31, a4: v14, a5: v34, a6: v17, a7: v26, a8: v27);
    v21 = *(_QWORD *)(v7 + 40);
    v22 = v21 + 24;
    if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v28 = v18;
      v21 = sub_1EAA840(a1: v19, a2: v20, a3: 34084944, a4: v22, a5: 3);
      v18 = v28;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v22;
      *(_QWORD *)v21 = 34084944;
      *(_DWORD *)(v21 + 8) = 3;
      *(_DWORD *)(v21 + 12) = 0;
      *(_QWORD *)(v21 + 16) = 0;
    }
    v23 = v29;
    v24 = v30;
    *(_DWORD *)(v21 + 20) = (unsigned __int64)(v18 - v6) >> 3;
    *(_DWORD *)(v21 + 16) = (unsigned __int64)(v23 - v6) >> 3;
    *(_DWORD *)(v21 + 12) = (unsigned __int64)(v24 - v6) >> 3;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v19, a2: v20, a3: v21, a4: v18, a5: v23);
    return v21;
  }
  v8 = sub_2771080();
  goto LABEL_15;
}
