// sub_504B880
// rva 0x0504b880  size 1051  section .text  group text
// window base 0x18504b880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504B880(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 result; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  __int64 v37; // [rsp+0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+10h] [rbp-38h]
  __int64 v39; // [rsp+18h] [rbp-30h]
  __int64 v40; // [rsp+20h] [rbp-28h]
  __int64 v41; // [rsp+28h] [rbp-20h]
  __int64 v42; // [rsp+30h] [rbp-18h]
  _DWORD *v43; // [rsp+38h] [rbp-10h]
  __int64 v44; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_504BCA0();
  }
  else
  {
    v43 = a3;
    v42 = a5;
    v41 = a6;
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
    v40 = v9;
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 32) > *(_QWORD *)(v8 + 32) )
    {
      v10 = sub_1EAA840(a1, a2, a3: 34082368, a4: v10, a5: 16);
      v9 = v40;
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
      v30 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v30) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v30) >> 9) + 0x38) = 0;
    }
    sub_4F36F80(a1, a2, a3: v9, a4: v7 + 369903000, a5: v7 + 369903000);
    sub_500AEA0(a1: v12, a2: v13, a3: v40, a4: v11, a5: v42);
    sub_4F36F80(a1: v15, a2: v16, a3: v40, a4: v14, a5: v7 + 372989608);
    sub_4F36F80(a1: v18, a2: v19, a3: v40, a4: v17, a5: v41);
    v23 = sub_4F36F80(a1: v21, a2: v22, a3: v40, a4: v20, a5: v7 + 372674176);
    v26 = v40;
    if ( *(_DWORD *)(v40 + 8) != 0 )
    {
      v27 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v27 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v38 = v23;
        v27 = sub_1EAA920(a1: v24, a2: v25, a3: 34082680);
        v26 = v40;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v27 + 24;
        *(_DWORD *)v27 = 34082680;
        *(_DWORD *)(v27 + 4) = 0;
        *(_QWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = 0;
      }
      v38 = v27;
      sub_4FE9280(a1: v24, a2: v25, a3: v27, a4: v26, a5: v26, a6: v7);
      v44 = v6;
      v39 = v38;
    }
    else
    {
      v39 = v7 + 373281248;
    }
    v28 = (unsigned __int64)v43;
    v43[3] = ((unsigned __int64)v43 - v7) >> 3;
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v31 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v31) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v28 + 16) = *(_DWORD *)(v7 + 374343896);
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v35 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v35) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v35) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v28 + 20) = 46923644;
    if ( (*(_DWORD *)v28 & 2) != 0 )
    {
      v36 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v36) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v36) >> 9) + 0x38) = 0;
    }
    ((void (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*(_DWORD *)v28 >> 3) + 112)))();
    result = (__int64)v43;
    v43[2] = (unsigned __int64)(v39 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v33 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v33) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 28) = (unsigned __int64)(v42 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v34 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v34) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 32) = (unsigned __int64)(v41 - v7) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v32 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v32) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v32) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
