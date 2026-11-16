// sub_504BCA0
// rva 0x0504bca0  size 1045  section .text  group text
// window base 0x18504bca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504BCA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbp
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+10h] [rbp-38h]
  __int64 v40; // [rsp+18h] [rbp-30h]
  __int64 v41; // [rsp+20h] [rbp-28h]
  __int64 v42; // [rsp+28h] [rbp-20h]
  __int64 v43; // [rsp+30h] [rbp-18h]
  _DWORD *v44; // [rsp+38h] [rbp-10h]
  __int64 v45; // [rsp+40h] [rbp-8h]

  v44 = a3;
  v43 = a5;
  v42 = a6;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v10 = sub_1EAA920(a1, a2, a3: 34085680);
      a5 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 24;
      *(_DWORD *)v10 = 34085680;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
    }
    v41 = v10;
    v11 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v11 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v11 = sub_1EAA840(a1, a2, a3: 34082368, a4: v11, a5: 16);
      v10 = v41;
      a5 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11 + 32;
      *(_QWORD *)v11 = 34082368;
      *(_DWORD *)(v11 + 8) = 16;
      *(_DWORD *)(v11 + 12) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
    }
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(v11 - v8) >> 3;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v25 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v25) >> 9) + 0x38) = 0;
    }
    v40 = v8 + 8LL * *(unsigned int *)(a5 + 12);
    sub_4F36F80(a1, a2, a3: v10, a4: v40, a5: v40);
    sub_4F36F80(a1: v13, a2: v14, a3: v41, a4: v12, a5: v8 + 372906248);
    if ( v42 == v8 )
      goto LABEL_42;
    v18 = sub_4F36F80(a1: v16, a2: v17, a3: v41, a4: v15, a5: v42);
    v21 = v41;
    if ( *(_DWORD *)(v41 + 8) != 0 )
    {
      v22 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v22 + 24) > *(_QWORD *)(v9 + 32) )
      {
        v39 = v18;
        v22 = sub_1EAA920(a1: v19, a2: v20, a3: 34082680);
        v21 = v41;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v22 + 24;
        *(_DWORD *)v22 = 34082680;
        *(_DWORD *)(v22 + 4) = 0;
        *(_QWORD *)(v22 + 8) = 0;
        *(_QWORD *)(v22 + 16) = 0;
      }
      v39 = v22;
      sub_4FE9280(a1: v19, a2: v20, a3: v22, a4: v21, a5: v21, a6: v8);
      v45 = v7;
      v40 = v39;
    }
    else
    {
      v40 = v8 + 373281248;
    }
    v23 = (unsigned __int64)v44;
    v44[3] = ((unsigned __int64)v44 - v8) >> 3;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v29 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v29) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v29) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v23 + 16) = *(_DWORD *)(v8 + 374343896);
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v30 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v30) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v30) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v23 + 20) = 46923644;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v31 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v31) >> 9) + 0x38) = 0;
    }
    ((void (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)v23 >> 3) + 112)))();
    result = (__int64)v44;
    v44[2] = (unsigned __int64)(v40 - v8) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v27 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v27) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 28) = (unsigned __int64)(v43 - v8) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v28 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v28) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v28) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 32) = (unsigned __int64)(v42 - v8) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v26 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v26) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v26) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
LABEL_42:
  sub_2771080(a1: v16, a2: v17, a3: v44, a4: v15, a5: v43);
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
  return sub_504C0C0(a1: v34, a2: v35, a3: v32, a4: v33, a5: v36, a6: v37, a7);
}
