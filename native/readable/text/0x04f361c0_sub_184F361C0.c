// sub_4F361C0
// rva 0x04f361c0  size 267  section .text  group text
// window base 0x184f361c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F361C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  unsigned __int64 v27; // [rsp+20h] [rbp-18h]
  unsigned int v28; // [rsp+28h] [rbp-10h]
  unsigned int v29; // [rsp+2Ch] [rbp-Ch]
  unsigned int v30; // [rsp+30h] [rbp-8h]
  unsigned int v31; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v5 )
  {
    v7 = *(char *)(a3 + 12);
    v8 = *(unsigned int *)(a3 + 8);
    v9 = *(_DWORD *)(a5 + 8);
    v10 = v5 + 8LL * *(unsigned int *)(a3 + 4);
    v11 = v9 + *(_DWORD *)(a3 + 8);
    v27 = a3;
    v26 = a5;
    v31 = v11;
    v30 = v9;
    v29 = v8;
    v28 = v7;
    v25 = sub_4F39060(a1, a2, a3: v10, a4: v8, a5: v7, a6: v11);
    v12 = sub_4F37500(a1: v26, a2: 0, a3: v25, a4: v30, a5: v28, a6: v29);
    if ( v25 == v12 )
    {
      v15 = v31;
      v14 = v27;
    }
    else
    {
      v14 = v27;
      *(_BYTE *)(v27 + 12) = 1;
      v15 = v31;
    }
    *(_DWORD *)(v14 + 8) = v15;
    *(_DWORD *)(v14 + 4) = (unsigned __int64)(v12 - v5) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v17 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v17) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1: v13, a2: v28);
    return v14;
  }
  sub_2771080();
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
  return sub_4F362E0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
}
