// sub_1EBFC60
// rva 0x01ebfc60  size 464  section .text  group text
// window base 0x181ebfc60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBFC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v18);
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
    return sub_1EBFE40();
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v21 = a3;
      v8 = sub_1EAA920(a1, a2, a3: 34085680);
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 34085680;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    v20 = v8;
    v9 = *(_QWORD *)(v7 + 40);
    v10 = v9 + 32;
    if ( (unsigned __int64)(v9 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v21 = a3;
      v9 = sub_1EAA840(a1, a2, a3: 34082368, a4: v10, a5: 0x10u);
      v8 = v20;
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v10;
      *(_QWORD *)v9 = 34082368;
      *(_DWORD *)(v9 + 8) = 16;
      *(_DWORD *)(v9 + 12) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v9 - v6) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v17 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v17) >> 9) + 0x38) = 0;
    }
    v21 = a3;
    sub_1EBF240(a1, a2, a3, a4: v8, a5: v8, a6);
    v13 = v20;
    if ( *(_DWORD *)(v20 + 8) != 0 )
    {
      v14 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v7 + 32) )
      {
        v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34082680);
        v13 = v20;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v14 + 24;
        *(_DWORD *)v14 = 34082680;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
      }
      v19 = v14;
      sub_4FE9280(a1: v11, a2: v12, a3: v14, a4: v13, a5: v13, a6: v6);
      v15 = v19;
    }
    else
    {
      v15 = v6 + 373281248;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: v15);
    return v15;
  }
}
