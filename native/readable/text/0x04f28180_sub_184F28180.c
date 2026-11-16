// sub_4F28180
// rva 0x04f28180  size 727  section .text  group text
// window base 0x184f28180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F28180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int64 i; // r9
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 result; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // edi
  int v38; // esi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v42; // [rsp+14h] [rbp-14h]
  __int64 v43; // [rsp+18h] [rbp-10h]
  void (__fastcall *v44)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v9 + 8) )
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
    return sub_4F28460(a1: v37, a2: v38, a3: v35, a4: v36, a5: v39, a6: v40, a7);
  }
  else
  {
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 56) > *(_QWORD *)(v9 + 32) )
    {
      v43 = a3;
      v10 = sub_1EAA840(a1, a2, a3: 34089376, a4, a5: 20);
      a3 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 56;
      *(_QWORD *)v10 = 34089376;
      *(_DWORD *)(v10 + 8) = 20;
      *(_DWORD *)(v10 + 12) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 48) = 0;
    }
    *(_DWORD *)(a3 + 12) = (unsigned __int64)(v10 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v33 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v33) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v33) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 32) = 0x7FFFFFFF;
    *(_DWORD *)(a3 + 36) = 1;
    *(_BYTE *)(a3 + 46) = 0;
    *(_BYTE *)(a3 + 47) = 0;
    *(_BYTE *)(a3 + 48) = 0;
    v11 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v11 + 272) > *(_QWORD *)(v9 + 32) )
    {
      v43 = a3;
      v11 = sub_1EAA840(a1, a2, a3: 34082368, a4, a5: 256);
      a3 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11 + 272;
      *(_QWORD *)v11 = 34082368;
      *(_DWORD *)(v11 + 8) = 256;
      *(_DWORD *)(v11 + 12) = 0;
      for ( i = 16; i < 0x110; i += 8LL )
        *(_QWORD *)(v11 + i) = 0;
    }
    *(_DWORD *)(a3 + 16) = (unsigned __int64)(v11 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v34 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v34) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v34) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 40) = -4;
    v42 = *(_DWORD *)a3 >> 3;
    v44 = (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))(v7
                                                                                    + *(_QWORD *)(v8 + 8LL * v42 + 232));
    v43 = a3;
    v44(a1, a2, a3, a4: a3, a5: 97, a6: 122);
    v44(a1: v14, a2: v15, a3: v43, a4: v13, a5: 65, a6: 90);
    v44(a1: v17, a2: v18, a3: v43, a4: v16, a5: 160, a6: 255);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v42 + 224)))(
      a1: v20,
      a2: v21,
      a3: v43,
      a4: v19,
      a5: 0,
      a6: 32);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v42 + 112)))(
      a1: v23,
      a2: v24,
      a3: v43,
      a4: v22,
      a5: 47);
    v44 = (void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))(v7
                                                                                    + *(_QWORD *)(v8 + 8LL * v42 + 184));
    ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64), __int64))v44)(
      a1: v25,
      a2: v26,
      a3: v43,
      a4: v44,
      a5: 34);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64))v44)(a1: v28, a2: v29, a3: v43, a4: v27, a5: 39);
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7 + *(_QWORD *)(v8 + 8LL * v42 + 168)))(
               a1: v30,
               a2: v31,
               a3: v43);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
