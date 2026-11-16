// sub_4F17D40
// rva 0x04f17d40  size 550  section .text  group text
// window base 0x184f17d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F17D40(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v26; // rbx
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+8h] [rbp-20h]
  __int64 v29; // [rsp+10h] [rbp-18h]
  __int64 v30; // [rsp+18h] [rbp-10h]
  _DWORD *v31; // [rsp+20h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v5 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F17F80();
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 144)))(
           a1,
           a2,
           a3,
           a4: a3);
    v9 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v30 = v6;
      v9 = sub_1EAA920(a1: v7, a2: v8, a3: 34085680);
      v6 = v30;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34085680;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    v29 = v9;
    v10 = *(_QWORD *)(v5 + 40);
    v11 = v10 + 32;
    if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v30 = v6;
      v10 = sub_1EAA840(a1: v7, a2: v8, a3: 34082368, a4: v11, a5: 16);
      v9 = v29;
      v6 = v30;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v11;
      *(_QWORD *)v10 = 34082368;
      *(_DWORD *)(v10 + 8) = 16;
      *(_DWORD *)(v10 + 12) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
    }
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(v10 - v4) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v11 = v9 & 0xFFFFFFFFFFF80000LL;
      v26 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v26) >> 9) + 0x38) = 0;
    }
    v30 = v6;
    sub_4F36F80(a1: v7, a2: v8, a3: v9, a4: v11, a5: v6);
    sub_4F35F80(a1: v13, a2: v14, a3: v29, a4: v12, a5: 32);
    v30 = v4 + 8LL * (unsigned int)v31[1];
    v17 = sub_4F36F80(a1: v15, a2: v16, a3: v29, a4: v30, a5: v30);
    v21 = v29;
    if ( *(_DWORD *)(v29 + 8) != 0 )
    {
      v22 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v22 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v28 = v17;
        v22 = sub_1EAA920(a1: v19, a2: v20, a3: 34082680);
        v23 = v29;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v22 + 24;
        *(_DWORD *)v22 = 34082680;
        *(_DWORD *)(v22 + 4) = 0;
        *(_QWORD *)(v22 + 8) = 0;
        *(_QWORD *)(v22 + 16) = 0;
        v23 = v21;
      }
      v28 = v22;
      sub_4FE9280(a1: v19, a2: v20, a3: v22, a4: v18, a5: v23, a6: v4);
      v24 = v28;
    }
    else
    {
      v24 = v4 + 373281248;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v19, a2: v20, a3: v21, a4: v18, a5: v24);
    return v24;
  }
}
