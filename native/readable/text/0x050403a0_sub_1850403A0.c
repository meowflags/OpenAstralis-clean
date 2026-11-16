// sub_50403A0
// rva 0x050403a0  size 1030  section .text  group text
// window base 0x1850403a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50403A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 result; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+10h] [rbp-38h]
  __int64 v33; // [rsp+18h] [rbp-30h]
  __int64 v34; // [rsp+20h] [rbp-28h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  __int64 v36; // [rsp+30h] [rbp-18h]
  _DWORD *v37; // [rsp+38h] [rbp-10h]
  __int64 v38; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v8 + 8) )
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
    return sub_50407C0();
  }
  else
  {
    v37 = a3;
    v36 = a5;
    v35 = a6;
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v8 + 32) )
    {
      v9 = sub_1EAA920(a1, a2, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34085680;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    v34 = v9;
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v8 + 32) )
    {
      v10 = sub_1EAA840(a1, a2, a3: 34082368, a4: v10, a5: 16);
      v9 = v34;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 32;
      *(_QWORD *)v10 = 34082368;
      *(_DWORD *)(v10 + 8) = 16;
      *(_DWORD *)(v10 + 12) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
    }
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(v10 - v7) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v24 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v24) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v24) >> 9) + 0x38) = 0;
    }
    sub_4F36F80(a1, a2, a3: v9, a4: v7 + 366514792, a5: v7 + 366514792);
    sub_4F36F80(a1: v12, a2: v13, a3: v34, a4: v11, a5: v36);
    v17 = sub_4F36F80(a1: v15, a2: v16, a3: v34, a4: v14, a5: v7 + 372902480);
    v20 = v34;
    if ( *(_DWORD *)(v34 + 8) != 0 )
    {
      v21 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v32 = v17;
        v21 = sub_1EAA920(a1: v18, a2: v19, a3: 34082680);
        v20 = v34;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v21 + 24;
        *(_DWORD *)v21 = 34082680;
        *(_DWORD *)(v21 + 4) = 0;
        *(_QWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = 0;
      }
      v32 = v21;
      sub_4FE9280(a1: v18, a2: v19, a3: v21, a4: v20, a5: v20, a6: v7);
      v38 = v6;
      v33 = v32;
    }
    else
    {
      v33 = v7 + 373281248;
    }
    v22 = (unsigned __int64)v37;
    v37[3] = ((unsigned __int64)v37 - v7) >> 3;
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      v25 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v25) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v22 + 16) = *(_DWORD *)(v7 + 374343896);
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      v29 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v29) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v29) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v22 + 20) = 46923644;
    if ( (*(_DWORD *)v22 & 2) != 0 )
    {
      v30 = (v22 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v30) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v22 & 0xFFFFFFFFFFF80000LL) + ((v22 - v30) >> 9) + 0x38) = 0;
    }
    ((void (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*(_DWORD *)v22 >> 3) + 112)))();
    result = (__int64)v37;
    v37[2] = (unsigned __int64)(v33 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v27 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v27) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 12) = (unsigned __int64)(v35 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v28 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v28) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 28) = (unsigned __int64)(v36 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v26 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v26) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
