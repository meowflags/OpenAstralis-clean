// sub_2757040
// rva 0x02757040  size 335  section .text  group text
// window base 0x182757040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2757040(int a1, int a2, _DWORD *a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // rbp
  char v23; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+10h] [rbp-18h]
  _DWORD *v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != v7 )
  {
    v27 = a5;
    v9 = (__int64 (*)(void))(v6 + *(_QWORD *)&v7[2 * (*a3 >> 3) + 126]);
    v26 = a3;
    v25 = (__int64)(v7 + 94162742);
    v10 = v9();
    v25 = sub_1E60B40(a1: v12, a2: v13, a3: v25, a4: v11, a5: v10, a6: 0);
    v16 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v16 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v16 = sub_1EAA920(a1: v14, a2: v15, a3: 40510824);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v16 + 40;
      *(_DWORD *)v16 = 40510824;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0;
    }
    *(_DWORD *)(v16 + 20) = 46923644;
    *(_DWORD *)(v16 + 16) = v7[93585974];
    *(_DWORD *)(v16 + 12) = (unsigned __int64)(v16 - (_QWORD)v7) >> 3;
    v24 = (unsigned int *)v16;
    sub_503B9A0(a1: v14, a2: v15, a3: v16, a4: v16, a5: 0);
    v19 = (unsigned __int64)v24;
    v24[2] = (unsigned __int64)(v25 - (_QWORD)v7) >> 3;
    v20 = *(unsigned int *)v19;
    if ( (v20 & 2) != 0 )
    {
      v22 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      v20 = (v19 - v22) >> 9;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + v20 + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v17, a2: v18, a3: v20);
    return v19;
  }
  sub_2771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v23);
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
  return sub_27571A0();
}
