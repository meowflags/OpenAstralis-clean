// sub_501C620
// rva 0x0501c620  size 549  section .text  group text
// window base 0x18501c620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501C620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // ecx
  __int64 (__fastcall *v16)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *, __int64, __int64); // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+18h] [rbp-20h]
  _DWORD *v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+28h] [rbp-10h]
  unsigned int v30; // [rsp+34h] [rbp-4h]

  v29 = a3;
  v28 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_11:
    v20 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v20 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v20 = sub_1EAA920(a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v20 + 48;
      *(_DWORD *)v20 = 34101256;
      *(_DWORD *)(v20 + 4) = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_QWORD *)(v20 + 32) = 0;
      *(_QWORD *)(v20 + 40) = 0;
    }
    *(_DWORD *)(v20 + 20) = 46923644;
    *(_DWORD *)(v20 + 16) = v8[93585974];
    *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - (_QWORD)v8) >> 3;
    v27 = v20;
    sub_503B9A0(a1, a2, a3: v20, a4, a5: 0);
    v24 = v27;
    *(_DWORD *)(v27 + 8) = 45203299;
    if ( (*(_DWORD *)v24 & 2) != 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  if ( a5 == v8 )
    goto LABEL_11;
  result = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)result != *(_DWORD *)(a3 + 12) )
  {
    v11 = sub_501C860();
    if ( (unsigned __int16)v8[2 * v8[2 * (*v28 >> 3) + 5]
                            + 3
                            + (v8[2 * (*v28 >> 3) + 11] & (0x636u >> HIBYTE(v8[2 * (*v28 >> 3) + 11])))] != 1590 )
    {
      while ( 1 )
      {
        v24 = sub_2770780();
LABEL_16:
        v21 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v21) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v21) >> 9) + 0x38) = 0;
LABEL_14:
        sub_2769900(a1: v22, a2: v23, a3: v24, a4: v21, a5: &a7);
      }
    }
    v13 = *v28 >> 3;
    v14 = v8[2 * v13 + 11];
    v27 = (__int64)&v8[2 * v8[2 * v13 + 5]];
    v30 = v14 & (0x636u >> SHIBYTE(v14));
    v15 = *(_DWORD *)(v27 + 4LL * v30 + 12);
    v26 = &v8[2 * v13];
    v16 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                              + *(_QWORD *)((char *)v26 + HIWORD(v15)));
    result = v16(a1: v12, a2: v27, a3: v28, a4: v16, a5: v11);
    while ( *(_DWORD *)(v29 + 8) != *(_DWORD *)(v29 + 12) )
    {
      v17 = sub_501C860();
      v18 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, __int64))(v7
                                                                                + *(_QWORD *)((char *)v26
                                                                                            + HIWORD(*(_DWORD *)(v27 + 4LL * v30 + 12))));
      result = v18(a1: v19, a2: v18, a3: v28, a4: v27, a5: v17);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
